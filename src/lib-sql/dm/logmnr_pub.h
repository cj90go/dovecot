#ifndef LOGMNR_PUB_H
#define LOGMNR_PUB_H

#include "dm.h"
#include "dmerr.h"
#include "dmstr.h"
#include "dop.h"
#include "rt_mo.h"
#include "ndct.h"

#define  LOGMNR_NEWFILE         1
#define  LOGMNR_REMOVEFILE      2
#define  LOGMNR_ADDFILE         3

/*
* START_LSN, COMMIT_LSN, CSCN, ROLLBACK, START_TS, COMMIT_TS
* 这几列的值跟事务相关，在dtab_logmnr_contents_build_data_low填充时计算，
* 因为它需要遍历日志文件中的记录，找到记录所在事务开始和结束的点
*/
#define LOGMNR_BDTA_LSN             0
#define LOGMNR_BDTA_TIMESTAMP       1
#define LOGMNR_BDTA_START_LSN       2
#define LOGMNR_BDTA_COMMMIT_LSN     3
#define LOGMNR_BDTA_START_TS        4
#define LOGMNR_BDTA_COMMIT_TS       5
#define LOGMNR_BDTA_TRXID           6
#define LOGMNR_BDTA_OPER            7
#define LOGMNR_BDTA_OPER_CODE       8
#define LOGMNR_BDTA_SCHNAME         9
#define LOGMNR_BDTA_REC_ROWID       10
#define LOGMNR_BDTA_USERNAME        11
#define LOGMNR_BDTA_OBJID           12
#define LOGMNR_BDTA_OBJV            13
#define LOGMNR_BDTA_SQL_REDO        14
#define LOGMNR_BDTA_SQL_UNDO        15
#define LOGMNR_BDTA_RS_ID           16
#define LOGMNR_BDTA_SSN             17
#define LOGMNR_BDTA_CSF             18
#define LOGMNR_BDTA_STATUS          19
#define LOGMNR_BDTA_COL_DATAS       20
#define LOGMNR_BDTA_REDO_VALUE      21
#define LOGMNR_BDTA_UNDO_VALUE      22
#define LOGMNR_BDTA_TABLE_NAME      23
#define LOGMNR_BDTA_RBA_SEQ         24
#define LOGMNR_BDTA_RBA_BLK         25
#define LOGMNR_BDTA_RBA_OFFSET      26
#define LOGMNR_BDTA_TRXID_NUMBER    27
#define LOGMNR_BDTA_CSCN            28
#define LOGMNR_BDTA_ROLLBACK        29
#define LOGMNR_BDTA_TRX_INNER_SEQ   30
#define LOGMNR_BDTA_SESSION_INFO    31

#define LOGMNR_OP_INTERNAL   0
#define LOGMNR_OP_INSERT     1
#define LOGMNR_OP_DELETE     2
#define LOGMNR_OP_UPDATE     3
#define LOGMNR_OP_BUPD       4  // dm特有的，批量更新
#define LOGMNR_OP_DDL        5 
#define LOGMNR_OP_START      6
#define LOGMNR_OP_COMMIT     7
#define LOGMNR_OP_SEL_LOB    9
#define LOGMNR_OP_LOB_WRITE  10
#define LOGMNR_OP_LOB_TRIM   11
#define LOGMNR_OP_SEL_UPD    25
#define LOGMNR_OP_LOB_ERASE  28
#define LOGMNR_OP_MIS_LSN    34
#define LOGMNR_OP_ROLLBACK   36
#define LOGMNR_OP_SEQ_MODIFY 37
#define LOGMNR_OP_UNSUPPORT  255

#define LOGMNR_TYPE_ARCHIVED    1
#define LOGMNR_TYPE_ONLINE      2

#define LOGMNR_MAX_CACHE_ITEM   1000

#define  LOGMNR_UNDO 1
#define  LOGMNR_REDO 0

#define  LOGMNR_OPTION_COMMIT_ONLY     2
#define  LOGMNR_OPTION_SKIP_CORRUPTION 4
#define  LOGMNR_OPTION_DDL_TRACKING    8
#define  LOGMNR_OPTION_ONLINE_DICT     16
#define  LOGMNR_OPTION_REDOLOG_DICT    32
#define  LOGMNR_OPTION_NO_DELIMITER    64
#define  LOGMNR_OPTION_PRETTY_SQL      512
#define  LOGMNR_OPTION_CONTINUOUS      1024
#define  LOGMNR_OPTION_NO_ROWID        2048
#define  LOGMNR_OPTION_STRING_LITERALS 4096

#define LOGMNR_INTERNAL   "INTERNAL"
#define LOGMNR_INSERT     "INSERT"
#define LOGMNR_DELETE     "DELETE"
#define LOGMNR_UPDATE     "UPDATE"
#define LOGMNR_BUPD       "BATCH_UPDATE"
#define LOGMNR_DDL        "DDL"
#define LOGMNR_START      "START"
#define LOGMNR_COMMIT     "COMMIT"
#define LOGMNR_SEL_LOB    "SEL_LOB_LOCATOR"
#define LOGMNR_LOB_WRITE  "LOB_WRITE"
#define LOGMNR_LOB_TRIM   "LOB_TRIM"
#define LOGMNR_SEL_UPD    "SELECT_FOR_UPDATE"
#define LOGMNR_LOB_ERASE  "LOB_ERASE"
#define LOGMNR_MIS_LSN    "MISSING_SCN"
#define LOGMNR_ROLLBACK   "ROLLBACK"
#define LOGMNR_UNSUPPORT  "UNSUPPORTED"
#define LOGMNR_START      "START"
#define LOGMNR_SEQ_MODIFY "SEQ MODIFY"

typedef struct logmnr_tid_lsn_struct logmnr_tid_lsn_t;
typedef DM_LIST_BASE_NODE_T(logmnr_tid_lsn_t) logmnr_trxid_lst_t;

#define logmnr_tid_lsn_MAGIC   76876619
struct logmnr_tid_lsn_struct
{
    ulint64           trx_id; 
    ulint64           lsn;
    ulint             type;
    dmtime_t          time;
    ulint             seq; 

    hash_node_t       hash; 

    DM_LIST_NODE_T(logmnr_tid_lsn_t) 
        link;

    MAGIC_DECLARE
};

enum
{
   logmnr_dml = 0, /*insert, delete, update*/
   logmnr_ddl,
   logmnr_trx,     /*commit和rollback*/
   logmnr_start,   
   logmnr_seq,     /*seq*/   

   logmnr_max
};

DllExport
//设置操作类型的字符串
dmcode_t
logmnr_set_op(
    usint           llog_type,
    ulint*	        op_code,
    schar*          op_str
);

DllExport
void
logmnr_add_trx_info(
    rt_memobj_t*			memobj,
	hash_table_t*			hash_tab,
	logmnr_trxid_lst_t*		trxid_lst,
    ulint64					trx_id, 
    ulint					trx_seq,
    ulint					type,
    dmtime_t				time,
    ulint64					lsn
);

DllExport
void
logmnr_get_obj_sql(
    rt_memobj_t*    memobj,
    dmstr_t*        dmstr,
    schar*			sch_name,
    ulint           schid,
    schar*			table_name,
    ulint           tabid
);

DllExport
void
logmnr_get_col_sql(
    rt_memobj_t*    memobj,
    dmstr_t*        dmstr,
    schar*          col_name
);

DllExport
void
logmnr_data_calc_offset(
    byte*           data_p, 
    ulint*          offset_out
);

DllExport
byte
logmnr_op_type(
    ulint       op_code
);

//根据llog里面字段的信息,还原成对应格式的字符串并附加到dmstr中
DllExport
dmcode_t
logmnr_get_data_from_llog(
    rt_memobj_t*	memobj,
    dmstr_t*		dmstr,
    byte*           data_p, 
    ulint*          offset_out,
    dmbool          mine_flag /*挖掘时以字符串形式返回结果，但是不用加引号*/
);

/*根据当前的sql语句类型，或取对应的undo类型*/
DllExport
usint
logmnr_get_undo_op(
    usint       oracle_op_code
);

DllExport
dmcode_t
logmnr_pub_build_ddl_sql(
    rt_memobj_t*		memobj,
    byte*               llog, 
    dmstr_t*            buf, 
	dmbool				no_delimiter
);

DllExport
dmcode_t
logmnr_pub_build_seq_sql(
    rt_memobj_t*		memobj,
    byte*               llog, 
    dmstr_t*            buf
);

DllExport
dmcode_t
logmnr_pub_build_seq_sql_for_rlog2(
    rt_memobj_t*		memobj,
    byte*               llog, 
    dmstr_t*            buf
);

DllExport
dmcode_t
logmnr_pub_build_sql(
    rt_memobj_t*		memobj,
    byte*				llog, 
    dmstr_t*			buf,
    schar*				sch_name,
    ulint				schema_id,
	ndct_table_t*		table,
    ulint				table_id,
    usint				op_code,
    dmbool				is_undo,
    ulint64*			rowid,
	dmbool				no_delimiter
);

DllExport
dmcode_t
logmnr_pub_build_sql_for_rlog2(
    rt_memobj_t*		memobj,
    byte*				llog, 
    dmstr_t*			buf,
    schar*				sch_name,
    ulint				schema_id,
	ndct_table_t*		table,
    ulint				table_id,
    usint				op_code,
    dmbool				is_undo,
    ulint64*			rowid,
	dmbool				no_delimiter
);

DllExport
void
logmnr_binary_assign_from_lint64(
    nstr_t*         dst,
	lint64          v
);

DllExport
dmcode_t
logmnr_get_data_from_llog_for_rlog2(
    rt_memobj_t*        memobj,
    dmstr_t*            dmstr,
    byte*               data_p, 
    ulint*              offset_out,
    dmbool              mine_flag /*挖掘时以字符串形式返回结果，但是不用加引号*/
);

DllExport
void
logmnr_data_calc_offset_for_rlog2(
    byte*               data_p, 
    ulint*              offset_out
);

DllExport
dmcode_t
logmnr_pub_build_trunc_tab_sql_for_rlog2(
    rt_memobj_t*		memobj,
    byte*               llog, 
    dmstr_t*            buf, 
	dmbool				no_delimiter
);

DllExport
dmcode_t
logmnr_pub_build_ddl_sql_for_rlog2(
    rt_memobj_t*		memobj,
    byte*               llog, 
    dmstr_t*            buf, 
	dmbool				no_delimiter
);

#endif

