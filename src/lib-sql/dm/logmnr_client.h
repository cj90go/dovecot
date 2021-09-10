/***********************************************************************
file:
    logmnr.h
Notes:
    LOMMNR FOR JNI
History
    Date        Who         RefDoc                  Memo
    2014-07-10  WSY&WJX        LOMMNR FOR JNI    Created
*******************************************************/
#ifndef LOGMNR_H
#define LOGMNR_H

#include "dm.h"
#include "dmerr.h"
#include "hash.h"
#include "dmstr.h"

///////attr define///////
#define LOGMNR_ATTR_PARALLEL_NUM        10001
#define LOGMNR_ATTR_BUFFER_NUM          10002
#define LOGMNR_ATTR_CONTENT_NUM         10003
#define LOGMNR_ATTR_CHAR_CODE			10004

#define LOGMNR_CVT_NONE					0
#define LOGMNR_CVT_L2U					1
#define LOGMNR_CVT_U2L					2

typedef struct logmnr_content_struct logmnr_content_t;

//get data函数所填充的结构体
#define logmnr_content_MAGIC		66981236
struct logmnr_content_struct{
	ulint64		scn;
	ulint64		start_scn;
	ulint64		commit_scn;
	schar		timestamp[30];
	schar		start_timestamp[30];
	schar       commit_timestamp[30];
	ulint64		xidusn;
	ulint64		xidslt;
	ulint64		xidsqn;
	schar 		xid[19]; // 2 + 2 * 8 + 1
	ulint64		pxidusn;
	ulint64		pxidslt;
	ulint64		pxidsqn;
	schar*		pxid;
	schar*		tx_name;
	schar		operation[20];
	ulint		operation_code;
	ulint		roll_back;
	sysname_t	seg_owner;
	schar*		seg_name;
	sysname_t	table_name;
	ulint		seg_type;
	schar*		seg_type_name;
	schar*		table_space;
	schar 		row_id[21];
	sysname_t	username;
	schar*		os_username;
	schar*    	machine_name;
	ulint64		audit_sessionid;
	ulint64		session;
	ulint64		serial;
	schar*    	session_info;
	ulint64		thread;
	ulint		sequence;
	ulint		rbasqn;
	ulint		rbablk;
	ulint		rbabyte;
	ulint64		ubafil;
	ulint64		ubablk;
	ulint64		ubarec;
	ulint64		ubasqn;
	ulint		abs_file;
	ulint		rel_file;
	ulint		data_blk;
	ulint		data_obj;
	ulint		data_objv;
	ulint		data_objd;
	schar*    	sql_redo;
	schar*	  	sql_undo;
	schar       rs_id[33];
	ulint		ssn;
	ulint		csf;
	schar*  	info;
	ulint		status;
	ulint64		redo_value;
	ulint64		undo_value;
	ulint64		safe_resume_scn;
	ulint64		cscn;
	schar*  	object_id;
	schar*  	edition_name;
	schar*   	client_id;

	//附加列，为填充事务相关信息使用
	ulint		seq;
	ulint64		trxid;

	MAGIC_DECLARE
}; 

#define logmnr_col_item_MAGIC   76876640
typedef struct logmnr_col_item_struct logmnr_col_item_t;
struct logmnr_col_item_struct
{
	usint		colid; //列id号
	sysname_t	name;  //列名
	ulint		type;  //列类型

    MAGIC_DECLARE
};

#define logmnr_client_dict_item_MAGIC   76876641
typedef struct logmnr_client_dict_item_struct logmnr_client_dict_item_t;
struct logmnr_client_dict_item_struct
{
    ulint				obj_id;	            //对象id号
    sysname_t			obj_name;           //对象名
	ulint				obj_type;			//对象类型：表、模式或用户

	//只有表的时候会用到下面几个属性
	usint				n_col_space;
	usint				cols_num;	//列数
	logmnr_col_item_t**	cols_arr;	//列信息

	ulint				n_fixed;		//当前连接有多少个线程占有该对象
	byte				valid_flag;		//表示对象是否有效

    hash_node_t     hash;

    DM_LIST_NODE_T(logmnr_client_dict_item_t) 
                    link;

    MAGIC_DECLARE
};

DllExport
dmcode_t
logmnr_client_init();

DllExport
dmcode_t
logmnr_client_create_connect( 
	schar*			ip,
	usint			port,
	schar*			uname,
	schar*			pwd,
	void**			conn
);

DllExport
dmcode_t
logmnr_client_set_attr( 
    void*           conn,
    ulint           attr,
    void*           val,
    ulint           val_len
);

DllExport
dmcode_t
logmnr_client_get_attr( 
    void*           conn,
    ulint           attr,
    void*           buf,
	ulint			buf_len,
    ulint*          val_len
);

DllExport
dmcode_t
logmnr_client_add_logfile( 
	void*		conn,
	schar* 		logfilename,
	ulint		options
);

DllExport
dmcode_t
logmnr_client_remove_logfile( 
	void*		conn,
	schar*		logfilename
);

DllExport
dmcode_t
logmnr_client_start( 
	void*		conn,
	lint64		trxid,
	schar*		starttime,
	schar*		endtime
);

DllExport
dmcode_t
logmnr_client_get_data(
	void*					conn,
	lint					row_num,
	logmnr_content_t***		data,
	lint*			  		real_num
);

DllExport
dmcode_t
logmnr_client_end(
	void*		conn,
	ulint		options 
);

DllExport
dmcode_t
logmnr_client_close_connect(
	void*		conn
);

DllExport
dmcode_t
logmnr_client_deinit();

dmcode_t
logmnr_client_build_sql(
    rt_memobj_t*	memobj,
    byte*           llog, 
    dmstr_t*		buf,
    schar*			sch_name,
    ulint           schema_id,
	logmnr_client_dict_item_t*
					table,
    ulint           table_id,
    usint           op_code,
    dmbool          is_undo,
    ulint64*        rowid,
	dmbool			no_delimiter,
	lint			cvt_mode
);

dmcode_t
logmnr_client_build_sql_for_rlog2(
    rt_memobj_t*				memobj,
    byte*						llog, 
    dmstr_t*					buf,
    schar*						sch_name,
    ulint						schema_id,
	logmnr_client_dict_item_t*	table,
    ulint						table_id,
    usint						op_code,
    dmbool						is_undo,
    ulint64*					rowid,
	dmbool						no_delimiter,
	lint						cvt_mode
);

#endif


