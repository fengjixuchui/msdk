#pragma once
#include <atlbase.h>
#include "util/callapi.h"

#define WXSQLITE3_HAVE_METADATA TRUE
#define MSQLITE_VERSION_NUMBER  3008004

typedef struct sqlite3 sqlite3;
typedef struct sqlite3_context sqlite3_context;
typedef struct sqlite3_stmt sqlite3_stmt;
typedef __int64 sqlite_int64;
typedef sqlite_int64 sqlite3_int64;
typedef struct Mem sqlite3_value;
typedef struct sqlite3_backup sqlite3_backup;
typedef struct sqlite3_blob sqlite3_blob;


typedef int (*sqlite3_callback)(void*,int,char**, char**);


#define DYNFUNC(x,r,n,p,y) r ( __cdecl *n)p;
#define DYNFUNC_FUNC(x,r,n,p,y) DECLARE_FUN(n)






namespace msdk{;
class sqlite : public tImpModuleMid<sqlite>
{
public:
	
	DYNFUNC(return, void *,                sqlite3_aggregate_context,     (sqlite3_context *p, int nBytes), (p, nBytes));
#if MSQLITE_VERSION_NUMBER <= 3006000
	DYNFUNC(return, int,                   sqlite3_aggregate_count,       (sqlite3_context *p), (p));
#endif
#if MSQLITE_VERSION_NUMBER >= 3006011
	DYNFUNC(return, sqlite3_backup*,       sqlite3_backup_init,           (sqlite3 *pDest, const char *zDestName, sqlite3 *pSource, const char *zSourceName), (pDest, zDestName, pSource, zSourceName));
	DYNFUNC(return, int,                   sqlite3_backup_step,           (sqlite3_backup *p, int nPage), (p, nPage));
	DYNFUNC(return, int,                   sqlite3_backup_finish,         (sqlite3_backup *p), (p));
	DYNFUNC(return, int,                   sqlite3_backup_remaining,      (sqlite3_backup *p), (p));
	DYNFUNC(return, int,                   sqlite3_backup_pagecount,      (sqlite3_backup *p), (p));
#endif
	DYNFUNC(return, int,                   sqlite3_bind_blob,             (sqlite3_stmt *pStmt, int i, const void *zData, int nData, void (*xDel)(void*)), (pStmt, i, zData, nData, xDel));
	DYNFUNC(return, int,                   sqlite3_bind_double,           (sqlite3_stmt *pStmt, int i, double rValue), (pStmt, i, rValue));
	DYNFUNC(return, int,                   sqlite3_bind_int,              (sqlite3_stmt *pStmt, int i, int iValue), (pStmt, i, iValue));
	DYNFUNC(return, int,                   sqlite3_bind_int64,            (sqlite3_stmt *pStmt, int i, sqlite_int64 iValue), (pStmt, i, iValue));
	DYNFUNC(return, int,                   sqlite3_bind_null,             (sqlite3_stmt *pStmt, int i), (pStmt, i));
	DYNFUNC(return, int,                   sqlite3_bind_parameter_count,  (sqlite3_stmt *pStmt), (pStmt));
	DYNFUNC(return, int,                   sqlite3_bind_parameter_index,  (sqlite3_stmt *pStmt, const char *zName), (pStmt, zName));
	DYNFUNC(return, const char *,          sqlite3_bind_parameter_name,   (sqlite3_stmt *pStmt, int i), (pStmt, i));
	DYNFUNC(return, int,                   sqlite3_bind_text,             (sqlite3_stmt *pStmt, int i, const char *zData, int nData, void (*xDel)(void*)), (pStmt, i, zData, nData, xDel));
	DYNFUNC(return, int,                   sqlite3_bind_text16,           (sqlite3_stmt *pStmt, int i, const void *zData, int nData, void (*xDel)(void*)), (pStmt, i, zData, nData, xDel));
	DYNFUNC(return, int,                   sqlite3_bind_value,            (sqlite3_stmt *pStmt, int i, const sqlite3_value *pValue), (pStmt, i, pValue));
#if MSQLITE_VERSION_NUMBER >= 3004000
	DYNFUNC(return, int,                   sqlite3_bind_zeroblob,         (sqlite3_stmt *pStmt, int i, int n), (pStmt, i, n));
	DYNFUNC(return, int,                   sqlite3_blob_open,             (sqlite3 *db, const char *zDb, const char *zTable, const char *zColumn, sqlite3_int64 iRow, int flags, sqlite3_blob **ppBlob), (db, zDb, zTable, zColumn, iRow, flags, ppBlob));
	DYNFUNC(return, int,                   sqlite3_blob_close,            (sqlite3_blob *pBlob), (pBlob));
	DYNFUNC(return, int,                   sqlite3_blob_bytes,            (sqlite3_blob *pBlob), (pBlob));
	DYNFUNC(return, int,                   sqlite3_blob_read,             (sqlite3_blob *pBlob, void *z, int n, int iOffset), (pBlob, z, n, iOffset));
#if MSQLITE_VERSION_NUMBER >= 3007004
	DYNFUNC(return, int,                   sqlite3_blob_reopen,           (sqlite3_blob *pBlob, sqlite3_int64 rowid), (pBlob, rowid));
#endif
	DYNFUNC(return, int,                   sqlite3_blob_write,            (sqlite3_blob *pBlob, const void *z, int n, int iOffset), (pBlob, z, n, iOffset));
#endif
	DYNFUNC(return, int,                   sqlite3_busy_handler,          (sqlite3 *db, int (*xBusy)(void*,int), void *pArg), (db, xBusy, pArg));
	DYNFUNC(return, int,                   sqlite3_busy_timeout,          (sqlite3 *db, int ms), (db, ms));
	DYNFUNC(return, int,                   sqlite3_changes,               (sqlite3 *db), (db));
	DYNFUNC(return, int,                   sqlite3_clear_bindings,        (sqlite3_stmt *pStmt), (pStmt));
	DYNFUNC(return, int,                   sqlite3_close,                 (sqlite3 *db), (db));
	DYNFUNC(return, int,                   sqlite3_collation_needed,      (sqlite3 *db, void *pCollNeededArg, void(*xCollNeeded)(void*,sqlite3*,int eTextRep,const char*)), (db, pCollNeededArg, xCollNeeded));
	DYNFUNC(return, int,                   sqlite3_collation_needed16,    (sqlite3 *db, void *pCollNeededArg, void(*xCollNeeded16)(void*,sqlite3*,int eTextRep,const void*)), (db, pCollNeededArg, xCollNeeded16));
	DYNFUNC(return, const void *,          sqlite3_column_blob,           (sqlite3_stmt *pStmt, int iCol), (pStmt, iCol));
	DYNFUNC(return, int,                   sqlite3_column_bytes,          (sqlite3_stmt *pStmt, int iCol), (pStmt, iCol));
	DYNFUNC(return, int,                   sqlite3_column_bytes16,        (sqlite3_stmt *pStmt, int iCol), (pStmt, iCol));
	DYNFUNC(return, int,                   sqlite3_column_count,          (sqlite3_stmt *pStmt), (pStmt));
	DYNFUNC(return, const char *,          sqlite3_column_decltype,       (sqlite3_stmt *pStmt, int i), (pStmt, i));
	DYNFUNC(return, const void *,          sqlite3_column_decltype16,     (sqlite3_stmt *pStmt, int i), (pStmt, i));
	DYNFUNC(return, double,                sqlite3_column_double,         (sqlite3_stmt *pStmt, int iCol), (pStmt, iCol));
	DYNFUNC(return, int,                   sqlite3_column_int,            (sqlite3_stmt *pStmt, int iCol), (pStmt, iCol));
	DYNFUNC(return, sqlite_int64,          sqlite3_column_int64,          (sqlite3_stmt *pStmt, int iCol), (pStmt, iCol));
	DYNFUNC(return, const char *,          sqlite3_column_name,           (sqlite3_stmt *pStmt, int iCol), (pStmt, iCol));
	DYNFUNC(return, const void *,          sqlite3_column_name16,         (sqlite3_stmt *pStmt, int iCol), (pStmt, iCol));
	DYNFUNC(return, const unsigned char *, sqlite3_column_text,           (sqlite3_stmt *pStmt, int iCol), (pStmt, iCol));
	DYNFUNC(return, const void *,          sqlite3_column_text16,         (sqlite3_stmt *pStmt, int iCol), (pStmt, iCol));
	DYNFUNC(return, int,                   sqlite3_column_type,           (sqlite3_stmt *pStmt, int iCol), (pStmt, iCol));
	DYNFUNC(return, void *,                sqlite3_commit_hook,           (sqlite3 *db, int (*xCallback)(void*), void *pArg), (db, xCallback, pArg));
#if MSQLITE_VERSION_NUMBER >= 3006023
	DYNFUNC(return, int,                   sqlite3_compileoption_used,    (const char *zOptName), (zOptName));
	DYNFUNC(return, const char *,          sqlite3_compileoption_get,     (int N), (N));
#endif
	DYNFUNC(return, int,                   sqlite3_complete,              (const char *sql), (sql));
	DYNFUNC(return, int,                   sqlite3_complete16,            (const void *sql), (sql));
	DYNFUNC(return, sqlite3 *,             sqlite3_context_db_handle,     (sqlite3_context* ctx), (ctx));
	DYNFUNC(return, int,                   sqlite3_create_collation,      (sqlite3 *db, const char *zName, int eTextRep, void*v, int(*xCompare)(void*,int,const void*,int,const void*)), (db, zName, eTextRep, v, xCompare));
	DYNFUNC(return, int,                   sqlite3_create_collation16,    (sqlite3 *db, const char *zName, int eTextRep, void*v, int(*xCompare)(void*,int,const void*,int,const void*)), (db, zName, eTextRep, v, xCompare));
	DYNFUNC(return, int,                   sqlite3_create_function,       (sqlite3 *db, const char *zFunctionName, int nArg, int eTextRep, void*v, void (*xFunc)(sqlite3_context*,int,sqlite3_value**), void (*xStep)(sqlite3_context*,int,sqlite3_value**), void (*xFinal)(sqlite3_context*)), (db, zFunctionName, nArg, eTextRep, v, xFunc, xStep, xFinal));
	DYNFUNC(return, int,                   sqlite3_create_function16,     (sqlite3 *db, const void *zFunctionName, int nArg, int eTextRep, void*v, void (*xFunc)(sqlite3_context*,int,sqlite3_value**), void (*xStep)(sqlite3_context*,int,sqlite3_value**), void (*xFinal)(sqlite3_context*)), (db, zFunctionName, nArg, eTextRep, v, xFunc, xStep, xFinal));
#if MSQLITE_VERSION_NUMBER >= 3007003
	DYNFUNC(return, int,                   sqlite3_create_function_v2,    (sqlite3 *db, const char *zFunctionName, int nArg, int eTextRep, void *pApp, void (*xFunc)(sqlite3_context*,int,sqlite3_value**), void (*xStep)(sqlite3_context*,int,sqlite3_value**), void (*xFinal)(sqlite3_context*), void(*xDestroy)(void*)), (db, zFunctionName, nArg, eTextRep, pApp, xFunc, xStep, xFinal, xDestroy));
#endif
#if MSQLITE_VERSION_NUMBER >= 3004001
//	DYNFUNC(return, int,                   sqlite3_create_module,         (sqlite3 *db, const char *zName, const sqlite3_module *p, void *pClientData), (db, zName, p, pClientData));
//	DYNFUNC(return, int,                   sqlite3_create_module_v2,      (sqlite3 *db, const char *zName, const sqlite3_module *p, void *pClientData, void(*xDestroy)(void*)), (db, zName, p, pClientData, xDestroy));
#endif
	DYNFUNC(return, int,                   sqlite3_data_count,            (sqlite3_stmt *pStmt), (pStmt));
#if MSQLITE_VERSION_NUMBER >= 3007010
	DYNFUNC(return, const char *,          sqlite3_db_filename,           (sqlite3 *db, const char *zDbName), (db, zDbName));
#endif
	DYNFUNC(return, sqlite3 *,             sqlite3_db_handle,             (sqlite3_stmt *pStmt), (pStmt));
#if MSQLITE_VERSION_NUMBER >= 3007011
	DYNFUNC(return, int,                   sqlite3_db_readonly,           (sqlite3 *db, const char *zDbName), (db, zDbName));
#endif
#if MSQLITE_VERSION_NUMBER >= 3007010
	DYNFUNC(return, int,                   sqlite3_db_release_memory,     (sqlite3 *db), (db));
#endif
	DYNFUNC(return, int,                   sqlite3_declare_vtab,          (sqlite3 *db, const char *zSQL), (db, zSQL));
	DYNFUNC(return, int,                   sqlite3_enable_load_extension, (sqlite3 *db, int onoff), (db, onoff));
	DYNFUNC(return, int,                   sqlite3_enable_shared_cache,   (int enable), (enable));
	DYNFUNC(return, int,                   sqlite3_errcode,               (sqlite3 *db), (db));
	DYNFUNC(return, const char *,          sqlite3_errmsg,                (sqlite3 *db), (db));
	DYNFUNC(return, const void *,          sqlite3_errmsg16,              (sqlite3 *db), (db));
#if MSQLITE_VERSION_NUMBER >= 3007015
	DYNFUNC(return, const char *,          sqlite3_errstr,                (int rc), (rc));
#endif
	DYNFUNC(return, int,                   sqlite3_exec,                  (sqlite3 *db, const char *sql, sqlite3_callback c, void *v, char **errmsg), (db, sql, c, v, errmsg));
	DYNFUNC(return, int,                   sqlite3_expired,               (sqlite3_stmt *pStmt), (pStmt));
	DYNFUNC(return, int,                   sqlite3_extended_result_codes, (sqlite3 *db, int onoff), (db, onoff));
	DYNFUNC(return, int,                   sqlite3_finalize,              (sqlite3_stmt *pStmt), (pStmt));
	DYNFUNC(;, void,                       sqlite3_free,                  (void *z), (z));
	DYNFUNC(;, void,                       sqlite3_free_table,            (char **result), (result));
	DYNFUNC(return, int,                   sqlite3_get_autocommit,        (sqlite3 *db), (db));
	DYNFUNC(return, void *,                sqlite3_get_auxdata,           (sqlite3_context *pCtx, int iArg), (pCtx, iArg));
	DYNFUNC(return, int,                   sqlite3_get_table,             (sqlite3 *db, const char *sql, char ***resultp, int *nrow, int *ncolumn, char **errmsg), (db, sql, resultp, nrow, ncolumn, errmsg));
	DYNFUNC(return, int,                   sqlite3_global_recover,        (), ());
#if MSQLITE_VERSION_NUMBER >= 3006000
	DYNFUNC(return, int,                   sqlite3_initialize,            (void), ());
#endif
	DYNFUNC(;, void,                       sqlite3_interrupt,             (sqlite3 *db), (db));
	DYNFUNC(return, sqlite_int64,          sqlite3_last_insert_rowid,     (sqlite3 *db), (db));
	DYNFUNC(return, const char *,          sqlite3_libversion,            (void), ());
	DYNFUNC(return, int,                   sqlite3_libversion_number,     (void), ());
	DYNFUNC(return, int,                   sqlite3_limit,                 (sqlite3 *db, int id, int newVal), (db, id, newVal));
	DYNFUNC(return, int,                   sqlite3_load_extension,        (sqlite3 *db, const char *zFile, const char *zProc, char **pzErrMsg), (db, zFile, zProc, pzErrMsg));
	DYNFUNC(return, void*,                 sqlite3_malloc,                (int size), (size));
	DYNFUNC(return, char *,                sqlite3_mprintf,               (const char *zFormat,...), (zFormat,...));
#if MSQLITE_VERSION_NUMBER >= 3006000
	DYNFUNC(return, sqlite3_stmt *,        sqlite3_next_stmt,             (sqlite3 *pDb, sqlite3_stmt *pStmt), (pDb, pStmt));
#endif
	DYNFUNC(return, int,                   sqlite3_open,                  (const char *filename, sqlite3 **ppDb), (filename, ppDb));
	DYNFUNC(return, int,                   sqlite3_open16,                (const void *filename, sqlite3 **ppDb), (filename, ppDb));
	DYNFUNC(return, int,                   sqlite3_open_v2,               (const char *filename, sqlite3 **ppDb, int flags, const char *zVfs), (filename, ppDb, flags, zVfs));
	DYNFUNC(return, int,                   sqlite3_prepare_v2,            (sqlite3 *db, const char *zSql, int nBytes, sqlite3_stmt **ppStmt, const char **pzTail), (db, zSql, nBytes, ppStmt, pzTail));
	DYNFUNC(return, int,                   sqlite3_prepare16_v2,          (sqlite3 *db, const void *zSql, int nBytes, sqlite3_stmt **ppStmt, const void **pzTail), (db, zSql, nBytes, ppStmt, pzTail));
	DYNFUNC(;, void,                       sqlite3_progress_handler,      (sqlite3 *db, int nOps, int (*xProgress)(void*), void *pArg), (db, nOps, xProgress, pArg));
	DYNFUNC(;, void,                       sqlite3_randomness,            (int N, void *P), (N, P));
	DYNFUNC(return, void*,                 sqlite3_realloc,               (void* ptr, int newSize), (ptr, newSize));
	DYNFUNC(return, int,                   sqlite3_reset,                 (sqlite3_stmt *pStmt), (pStmt));
	DYNFUNC(;, void,                       sqlite3_result_blob,           (sqlite3_context *pCtx, const void *z, int n, void (*xDel)(void *)), (pCtx, z, n, xDel));
	DYNFUNC(;, void,                       sqlite3_result_double,         (sqlite3_context *pCtx, double rVal), (pCtx, rVal));
	DYNFUNC(;, void,                       sqlite3_result_error,          (sqlite3_context *pCtx, const char *z, int n), (pCtx, z, n));
	DYNFUNC(;, void,                       sqlite3_result_error16,        (sqlite3_context *pCtx, const void *z, int n), (pCtx, z, n));
	DYNFUNC(;, void,                       sqlite3_result_int,            (sqlite3_context *pCtx, int iVal), (pCtx, iVal));
	DYNFUNC(;, void,                       sqlite3_result_int64,          (sqlite3_context *pCtx, sqlite_int64 iVal), (pCtx, iVal));
	DYNFUNC(;, void,                       sqlite3_result_null,           (sqlite3_context *pCtx), (pCtx));
	DYNFUNC(;, void,                       sqlite3_result_text,           (sqlite3_context *pCtx, const char *z, int n, void (*xDel)(void *)), (pCtx, z, n, xDel));
	DYNFUNC(;, void,                       sqlite3_result_text16,         (sqlite3_context *pCtx, const void *z, int n, void (*xDel)(void *)), (pCtx, z, n, xDel));
	DYNFUNC(;, void,                       sqlite3_result_text16be,       (sqlite3_context *pCtx, const void *z, int n, void (*xDel)(void *)), (pCtx, z, n, xDel));
	DYNFUNC(;, void,                       sqlite3_result_text16le,       (sqlite3_context *pCtx, const void *z, int n, void (*xDel)(void *)), (pCtx, z, n, xDel));
	DYNFUNC(;, void,                       sqlite3_result_value,          (sqlite3_context *pCtx, sqlite3_value *pValue), (pCtx, pValue));
#if MSQLITE_VERSION_NUMBER >= 3004000
	DYNFUNC(;, void,                       sqlite3_result_zeroblob,       (sqlite3_context *pCtx, int n), (pCtx, n));
#endif
	DYNFUNC(return, void *,                sqlite3_rollback_hook,         (sqlite3 *db, void (*xCallback)(void*), void *pArg), (db, xCallback, pArg));
#if MSQLITE_VERSION_NUMBER >= 3007003
//	DYNFUNC(return, int,                   sqlite3_rtree_geometry_callback, (sqlite3 *db, const char *zGeom, int (*xGeom)(sqlite3_rtree_geometry *, int nCoord, double *aCoord, int *pRes), void *pContext), (db, zGeom, xGeom, pContext));
#endif
	DYNFUNC(return, int,                   sqlite3_set_authorizer,        (sqlite3 *db, int (*xAuth)(void*,int,const char*,const char*,const char*,const char*), void *pArg), (db, xAuth, pArg));
	DYNFUNC(;, void,                       sqlite3_set_auxdata,           (sqlite3_context *pCtx, int iArg, void *pAux, void (*xDelete)(void*)), (pCtx, iArg, pAux, xDelete));
#if MSQLITE_VERSION_NUMBER >= 3006000
	DYNFUNC(return, int,                   sqlite3_shutdown,              (void), ());
#endif
	DYNFUNC(return, int,                   sqlite3_sleep,                 (int ms), (ms));
	DYNFUNC(return, char *,                sqlite3_snprintf,              (int n, char *zBuf, const char *zFormat, ...), (n, zBuf, zFormat, ...));
#if MSQLITE_VERSION_NUMBER >= 3006018
	DYNFUNC(return, const char *,          sqlite3_sourceid,              (void), ());
#endif
#if MSQLITE_VERSION_NUMBER >= 3005003
	DYNFUNC(return, const char *,          sqlite3_sql,                   (sqlite3_stmt *pStmt), (pStmt));
#endif
	DYNFUNC(return, int,                   sqlite3_step,                  (sqlite3_stmt *pStmt), (pStmt));
#if MSQLITE_VERSION_NUMBER >= 3007010
	DYNFUNC(return, int,                   sqlite3_stmt_busy,             (sqlite3_stmt* pStmt), (pStmt));
#endif
#if MSQLITE_VERSION_NUMBER >= 3007004
	DYNFUNC(return, int,                   sqlite3_stmt_readonly,         (sqlite3_stmt *pStmt), (pStmt));
#endif
#if MSQLITE_VERSION_NUMBER >= 3007000
	DYNFUNC(return, int,                   sqlite3_stmt_status,           (sqlite3_stmt* pStmt, int op, int resetFlg), (pStmt, op, resetFlg));
#endif
	DYNFUNC(return, int,                   sqlite3_threadsafe,            (void), ());
	DYNFUNC(return, int,                   sqlite3_total_changes,         (sqlite3 *db), (db));
	DYNFUNC(return, void *,                sqlite3_trace,                 (sqlite3 *db, void(*xTrace)(void*,const char*), void *pArg), (db, xTrace, pArg));
	DYNFUNC(return, int,                   sqlite3_transfer_bindings,     (sqlite3_stmt *pFromStmt, sqlite3_stmt *pToStmt), (pFromStmt, pToStmt));
#if MSQLITE_VERSION_NUMBER >= 3007000
	//DYNFUNC(return, int,                   sqlite3_unlock_notify,         (sqlite3 *pBlocked, void (*xNotify)(void **apArg, int nArg), void *pNotifyArg), (pBlocked, xNotify, pNotifyArg));
#endif
	DYNFUNC(return, void *,                sqlite3_update_hook,           (sqlite3 *db, void (*xCallback)(void *, int, char const *, char const *, sqlite_int64), void *pArg), (db, xCallback, pArg));
	DYNFUNC(return, void *,                sqlite3_user_data,             (sqlite3_context *pCtx), (pCtx));
	DYNFUNC(return, const void *,          sqlite3_value_blob,            (sqlite3_value *pVal), (pVal));
	DYNFUNC(return, int,                   sqlite3_value_bytes,           (sqlite3_value *pVal), (pVal));
	DYNFUNC(return, int,                   sqlite3_value_bytes16,         (sqlite3_value *pVal), (pVal));
	DYNFUNC(return, double,                sqlite3_value_double,          (sqlite3_value *pVal), (pVal));
	DYNFUNC(return, int,                   sqlite3_value_int,             (sqlite3_value *pVal), (pVal));
	DYNFUNC(return, sqlite_int64,          sqlite3_value_int64,           (sqlite3_value *pVal), (pVal));
	DYNFUNC(return, const unsigned char *, sqlite3_value_text,            (sqlite3_value *pVal), (pVal));
	DYNFUNC(return, const void *,          sqlite3_value_text16,          (sqlite3_value *pVal), (pVal));
	DYNFUNC(return, const void *,          sqlite3_value_text16be,        (sqlite3_value *pVal), (pVal));
	DYNFUNC(return, const void *,          sqlite3_value_text16le,        (sqlite3_value *pVal), (pVal));
	DYNFUNC(return, int,                   sqlite3_value_type,            (sqlite3_value *pVal), (pVal));
	DYNFUNC(return, char *,                sqlite3_vmprintf,              (const char* p, va_list ap), (p, ap));
#if MSQLITE_VERSION_NUMBER >= 3007000
	DYNFUNC(return, int,                   sqlite3_wal_autocheckpoint,    (sqlite3 *db, int N), (db, N));
	DYNFUNC(return, int,                   sqlite3_wal_checkpoint,        (sqlite3 *db, const char *zDb), (db, zDb));
#if MSQLITE_VERSION_NUMBER >= 3007006
	DYNFUNC(return, int,                   sqlite3_wal_checkpoint_v2,     (sqlite3 *db, const char *zDb, int mode, int* logFrameCount, int* ckptFrameCount), (db, zDb, mode, logFrameCount, ckptFrameCount));
#endif
	DYNFUNC(return, void *,                sqlite3_wal_hook,              (sqlite3 *db, int (*xCallback)(void *, sqlite3 *, const char*, int), void *pArg), (db, xCallback, pArg));
#endif
#if MSQLITE_VERSION_NUMBER >= 3007014
	//#if defined(__WXMSW__)
	DYNFUNC(return, int,                   sqlite3_win32_set_directory,   (DWORD type, LPCWSTR zValue), (type, zValue));
	//#endif
#endif
#if WXSQLITE3_HAVE_METADATA
	DYNFUNC(return, const char *,          sqlite3_column_database_name,  (sqlite3_stmt *pStmt, int iCol), (pStmt, iCol));
	DYNFUNC(return, const void *,          sqlite3_column_database_name16, (sqlite3_stmt *pStmt, int iCol), (pStmt, iCol));
	DYNFUNC(return, const char *,          sqlite3_column_table_name,     (sqlite3_stmt *pStmt, int iCol), (pStmt, iCol));
	DYNFUNC(return, const void *,          sqlite3_column_table_name16,   (sqlite3_stmt *pStmt, int iCol), (pStmt, iCol));
	DYNFUNC(return, const char *,          sqlite3_column_origin_name,    (sqlite3_stmt *pStmt, int iCol), (pStmt, iCol));
	DYNFUNC(return, const void *,          sqlite3_column_origin_name16,  (sqlite3_stmt *pStmt, int iCol), (pStmt, iCol));
	DYNFUNC(return, int,                   sqlite3_table_column_metadata, (sqlite3 *db, const char *zDbName, const char *zTableName, const char *zColumnName, char const **pzDataType, char const **pzCollSeq, int *pNotNull, int *pPrimaryKey, int *pAutoinc), (db, zDbName, zTableName, zColumnName, pzDataType, pzCollSeq, pNotNull, pPrimaryKey, pAutoinc));
#endif

// #if WXSQLITE3_HAVE_CODEC
// 	DYNFUNC(return, int,                   sqlite3_key,                   (sqlite3 *db, const void *pKey, int nKey), (db, pKey, nKey));
// 	DYNFUNC(return, int,                   sqlite3_rekey,                 (sqlite3 *db, const void *pKey, int nKey), (db, pKey, nKey));
// #endif
	
	
	DECLARE_FUN_BEGIN(sqlite, "")
		DYNFUNC_FUNC(return, void *,                sqlite3_aggregate_context,     (sqlite3_context *p, int nBytes), (p, nBytes))
#if MSQLITE_VERSION_NUMBER <= 3006000
		DYNFUNC_FUNC(return, int,                   sqlite3_aggregate_count,       (sqlite3_context *p), (p))
#endif
#if MSQLITE_VERSION_NUMBER >= 3006011
		DYNFUNC_FUNC(return, sqlite3_backup*,       sqlite3_backup_init,           (sqlite3 *pDest, const char *zDestName, sqlite3 *pSource, const char *zSourceName), (pDest, zDestName, pSource, zSourceName))
		DYNFUNC_FUNC(return, int,                   sqlite3_backup_step,           (sqlite3_backup *p, int nPage), (p, nPage))
		DYNFUNC_FUNC(return, int,                   sqlite3_backup_finish,         (sqlite3_backup *p), (p))
		DYNFUNC_FUNC(return, int,                   sqlite3_backup_remaining,      (sqlite3_backup *p), (p))
		DYNFUNC_FUNC(return, int,                   sqlite3_backup_pagecount,      (sqlite3_backup *p), (p))
#endif
		DYNFUNC_FUNC(return, int,                   sqlite3_bind_blob,             (sqlite3_stmt *pStmt, int i, const void *zData, int nData, void (*xDel)(void*)), (pStmt, i, zData, nData, xDel))
		DYNFUNC_FUNC(return, int,                   sqlite3_bind_double,           (sqlite3_stmt *pStmt, int i, double rValue), (pStmt, i, rValue))
		DYNFUNC_FUNC(return, int,                   sqlite3_bind_int,              (sqlite3_stmt *pStmt, int i, int iValue), (pStmt, i, iValue))
		DYNFUNC_FUNC(return, int,                   sqlite3_bind_int64,            (sqlite3_stmt *pStmt, int i, sqlite_int64 iValue), (pStmt, i, iValue))
		DYNFUNC_FUNC(return, int,                   sqlite3_bind_null,             (sqlite3_stmt *pStmt, int i), (pStmt, i))
		DYNFUNC_FUNC(return, int,                   sqlite3_bind_parameter_count,  (sqlite3_stmt *pStmt), (pStmt))
		DYNFUNC_FUNC(return, int,                   sqlite3_bind_parameter_index,  (sqlite3_stmt *pStmt, const char *zName), (pStmt, zName))
		DYNFUNC_FUNC(return, const char *,          sqlite3_bind_parameter_name,   (sqlite3_stmt *pStmt, int i), (pStmt, i))
		DYNFUNC_FUNC(return, int,                   sqlite3_bind_text,             (sqlite3_stmt *pStmt, int i, const char *zData, int nData, void (*xDel)(void*)), (pStmt, i, zData, nData, xDel))
		DYNFUNC_FUNC(return, int,                   sqlite3_bind_text16,           (sqlite3_stmt *pStmt, int i, const void *zData, int nData, void (*xDel)(void*)), (pStmt, i, zData, nData, xDel))
		DYNFUNC_FUNC(return, int,                   sqlite3_bind_value,            (sqlite3_stmt *pStmt, int i, const sqlite3_value *pValue), (pStmt, i, pValue))
#if MSQLITE_VERSION_NUMBER >= 3004000
		DYNFUNC_FUNC(return, int,                   sqlite3_bind_zeroblob,         (sqlite3_stmt *pStmt, int i, int n), (pStmt, i, n))
		DYNFUNC_FUNC(return, int,                   sqlite3_blob_open,             (sqlite3 *db, const char *zDb, const char *zTable, const char *zColumn, sqlite3_int64 iRow, int flags, sqlite3_blob **ppBlob), (db, zDb, zTable, zColumn, iRow, flags, ppBlob))
		DYNFUNC_FUNC(return, int,                   sqlite3_blob_close,            (sqlite3_blob *pBlob), (pBlob))
		DYNFUNC_FUNC(return, int,                   sqlite3_blob_bytes,            (sqlite3_blob *pBlob), (pBlob))
		DYNFUNC_FUNC(return, int,                   sqlite3_blob_read,             (sqlite3_blob *pBlob, void *z, int n, int iOffset), (pBlob, z, n, iOffset))
#if MSQLITE_VERSION_NUMBER >= 3007004
		DYNFUNC_FUNC(return, int,                   sqlite3_blob_reopen,           (sqlite3_blob *pBlob, sqlite3_int64 rowid), (pBlob, rowid))
#endif
		DYNFUNC_FUNC(return, int,                   sqlite3_blob_write,            (sqlite3_blob *pBlob, const void *z, int n, int iOffset), (pBlob, z, n, iOffset))
#endif
		DYNFUNC_FUNC(return, int,                   sqlite3_busy_handler,          (sqlite3 *db, int (*xBusy)(void*,int), void *pArg), (db, xBusy, pArg))
		DYNFUNC_FUNC(return, int,                   sqlite3_busy_timeout,          (sqlite3 *db, int ms), (db, ms))
		DYNFUNC_FUNC(return, int,                   sqlite3_changes,               (sqlite3 *db), (db))
		DYNFUNC_FUNC(return, int,                   sqlite3_clear_bindings,        (sqlite3_stmt *pStmt), (pStmt))
		DYNFUNC_FUNC(return, int,                   sqlite3_close,                 (sqlite3 *db), (db))
		DYNFUNC_FUNC(return, int,                   sqlite3_collation_needed,      (sqlite3 *db, void *pCollNeededArg, void(*xCollNeeded)(void*,sqlite3*,int eTextRep,const char*)), (db, pCollNeededArg, xCollNeeded))
		DYNFUNC_FUNC(return, int,                   sqlite3_collation_needed16,    (sqlite3 *db, void *pCollNeededArg, void(*xCollNeeded16)(void*,sqlite3*,int eTextRep,const void*)), (db, pCollNeededArg, xCollNeeded16))
		DYNFUNC_FUNC(return, const void *,          sqlite3_column_blob,           (sqlite3_stmt *pStmt, int iCol), (pStmt, iCol))
		DYNFUNC_FUNC(return, int,                   sqlite3_column_bytes,          (sqlite3_stmt *pStmt, int iCol), (pStmt, iCol))
		DYNFUNC_FUNC(return, int,                   sqlite3_column_bytes16,        (sqlite3_stmt *pStmt, int iCol), (pStmt, iCol))
		DYNFUNC_FUNC(return, int,                   sqlite3_column_count,          (sqlite3_stmt *pStmt), (pStmt))
		DYNFUNC_FUNC(return, const char *,          sqlite3_column_decltype,       (sqlite3_stmt *pStmt, int i), (pStmt, i))
		DYNFUNC_FUNC(return, const void *,          sqlite3_column_decltype16,     (sqlite3_stmt *pStmt, int i), (pStmt, i))
		DYNFUNC_FUNC(return, double,                sqlite3_column_double,         (sqlite3_stmt *pStmt, int iCol), (pStmt, iCol))
		DYNFUNC_FUNC(return, int,                   sqlite3_column_int,            (sqlite3_stmt *pStmt, int iCol), (pStmt, iCol))
		DYNFUNC_FUNC(return, sqlite_int64,          sqlite3_column_int64,          (sqlite3_stmt *pStmt, int iCol), (pStmt, iCol))
		DYNFUNC_FUNC(return, const char *,          sqlite3_column_name,           (sqlite3_stmt *pStmt, int iCol), (pStmt, iCol))
		DYNFUNC_FUNC(return, const void *,          sqlite3_column_name16,         (sqlite3_stmt *pStmt, int iCol), (pStmt, iCol))
		DYNFUNC_FUNC(return, const unsigned char *, sqlite3_column_text,           (sqlite3_stmt *pStmt, int iCol), (pStmt, iCol))
		DYNFUNC_FUNC(return, const void *,          sqlite3_column_text16,         (sqlite3_stmt *pStmt, int iCol), (pStmt, iCol))
		DYNFUNC_FUNC(return, int,                   sqlite3_column_type,           (sqlite3_stmt *pStmt, int iCol), (pStmt, iCol))
		DYNFUNC_FUNC(return, void *,                sqlite3_commit_hook,           (sqlite3 *db, int (*xCallback)(void*), void *pArg), (db, xCallback, pArg))
#if MSQLITE_VERSION_NUMBER >= 3006023
		DYNFUNC_FUNC(return, int,                   sqlite3_compileoption_used,    (const char *zOptName), (zOptName))
		DYNFUNC_FUNC(return, const char *,          sqlite3_compileoption_get,     (int N), (N))
#endif
		DYNFUNC_FUNC(return, int,                   sqlite3_complete,              (const char *sql), (sql))
		DYNFUNC_FUNC(return, int,                   sqlite3_complete16,            (const void *sql), (sql))
		DYNFUNC_FUNC(return, sqlite3 *,             sqlite3_context_db_handle,     (sqlite3_context* ctx), (ctx))
		DYNFUNC_FUNC(return, int,                   sqlite3_create_collation,      (sqlite3 *db, const char *zName, int eTextRep, void*v, int(*xCompare)(void*,int,const void*,int,const void*)), (db, zName, eTextRep, v, xCompare))
		DYNFUNC_FUNC(return, int,                   sqlite3_create_collation16,    (sqlite3 *db, const char *zName, int eTextRep, void*v, int(*xCompare)(void*,int,const void*,int,const void*)), (db, zName, eTextRep, v, xCompare))
		DYNFUNC_FUNC(return, int,                   sqlite3_create_function,       (sqlite3 *db, const char *zFunctionName, int nArg, int eTextRep, void*v, void (*xFunc)(sqlite3_context*,int,sqlite3_value**), void (*xStep)(sqlite3_context*,int,sqlite3_value**), void (*xFinal)(sqlite3_context*)), (db, zFunctionName, nArg, eTextRep, v, xFunc, xStep, xFinal))
		DYNFUNC_FUNC(return, int,                   sqlite3_create_function16,     (sqlite3 *db, const void *zFunctionName, int nArg, int eTextRep, void*v, void (*xFunc)(sqlite3_context*,int,sqlite3_value**), void (*xStep)(sqlite3_context*,int,sqlite3_value**), void (*xFinal)(sqlite3_context*)), (db, zFunctionName, nArg, eTextRep, v, xFunc, xStep, xFinal))
#if MSQLITE_VERSION_NUMBER >= 3007003
		DYNFUNC_FUNC(return, int,                   sqlite3_create_function_v2,    (sqlite3 *db, const char *zFunctionName, int nArg, int eTextRep, void *pApp, void (*xFunc)(sqlite3_context*,int,sqlite3_value**), void (*xStep)(sqlite3_context*,int,sqlite3_value**), void (*xFinal)(sqlite3_context*), void(*xDestroy)(void*)), (db, zFunctionName, nArg, eTextRep, pApp, xFunc, xStep, xFinal, xDestroy))
#endif
#if MSQLITE_VERSION_NUMBER >= 3004001
//		DYNFUNC_FUNC(return, int,                   sqlite3_create_module,         (sqlite3 *db, const char *zName, const sqlite3_module *p, void *pClientData), (db, zName, p, pClientData))
//		DYNFUNC_FUNC(return, int,                   sqlite3_create_module_v2,      (sqlite3 *db, const char *zName, const sqlite3_module *p, void *pClientData, void(*xDestroy)(void*)), (db, zName, p, pClientData, xDestroy))
#endif
		DYNFUNC_FUNC(return, int,                   sqlite3_data_count,            (sqlite3_stmt *pStmt), (pStmt))
#if MSQLITE_VERSION_NUMBER >= 3007010
		DYNFUNC_FUNC(return, const char *,          sqlite3_db_filename,           (sqlite3 *db, const char *zDbName), (db, zDbName))
#endif
		DYNFUNC_FUNC(return, sqlite3 *,             sqlite3_db_handle,             (sqlite3_stmt *pStmt), (pStmt))
#if MSQLITE_VERSION_NUMBER >= 3007011
		DYNFUNC_FUNC(return, int,                   sqlite3_db_readonly,           (sqlite3 *db, const char *zDbName), (db, zDbName))
#endif
#if MSQLITE_VERSION_NUMBER >= 3007010
		DYNFUNC_FUNC(return, int,                   sqlite3_db_release_memory,     (sqlite3 *db), (db))
#endif
		DYNFUNC_FUNC(return, int,                   sqlite3_declare_vtab,          (sqlite3 *db, const char *zSQL), (db, zSQL))
		DYNFUNC_FUNC(return, int,                   sqlite3_enable_load_extension, (sqlite3 *db, int onoff), (db, onoff))
		DYNFUNC_FUNC(return, int,                   sqlite3_enable_shared_cache,   (int enable), (enable))
		DYNFUNC_FUNC(return, int,                   sqlite3_errcode,               (sqlite3 *db), (db))
		DYNFUNC_FUNC(return, const char *,          sqlite3_errmsg,                (sqlite3 *db), (db))
		DYNFUNC_FUNC(return, const void *,          sqlite3_errmsg16,              (sqlite3 *db), (db))
#if MSQLITE_VERSION_NUMBER >= 3007015
		DYNFUNC_FUNC(return, const char *,          sqlite3_errstr,                (int rc), (rc))
#endif
		DYNFUNC_FUNC(return, int,                   sqlite3_exec,                  (sqlite3 *db, const char *sql, sqlite3_callback c, void *v, char **errmsg), (db, sql, c, v, errmsg))
		DYNFUNC_FUNC(return, int,                   sqlite3_expired,               (sqlite3_stmt *pStmt), (pStmt))
		DYNFUNC_FUNC(return, int,                   sqlite3_extended_result_codes, (sqlite3 *db, int onoff), (db, onoff))
		DYNFUNC_FUNC(return, int,                   sqlite3_finalize,              (sqlite3_stmt *pStmt), (pStmt))
		DYNFUNC_FUNC(;, void,                       sqlite3_free,                  (void *z), (z))
		DYNFUNC_FUNC(;, void,                       sqlite3_free_table,            (char **result), (result))
		DYNFUNC_FUNC(return, int,                   sqlite3_get_autocommit,        (sqlite3 *db), (db))
		DYNFUNC_FUNC(return, void *,                sqlite3_get_auxdata,           (sqlite3_context *pCtx, int iArg), (pCtx, iArg))
		DYNFUNC_FUNC(return, int,                   sqlite3_get_table,             (sqlite3 *db, const char *sql, char ***resultp, int *nrow, int *ncolumn, char **errmsg), (db, sql, resultp, nrow, ncolumn, errmsg))
		DYNFUNC_FUNC(return, int,                   sqlite3_global_recover,        (), ())
#if MSQLITE_VERSION_NUMBER >= 3006000
		DYNFUNC_FUNC(return, int,                   sqlite3_initialize,            (void), ())
#endif
		DYNFUNC_FUNC(;, void,                       sqlite3_interrupt,             (sqlite3 *db), (db))
		DYNFUNC_FUNC(return, sqlite_int64,          sqlite3_last_insert_rowid,     (sqlite3 *db), (db))
		DYNFUNC_FUNC(return, const char *,          sqlite3_libversion,            (void), ())
		DYNFUNC_FUNC(return, int,                   sqlite3_libversion_number,     (void), ())
		DYNFUNC_FUNC(return, int,                   sqlite3_limit,                 (sqlite3 *db, int id, int newVal), (db, id, newVal))
		DYNFUNC_FUNC(return, int,                   sqlite3_load_extension,        (sqlite3 *db, const char *zFile, const char *zProc, char **pzErrMsg), (db, zFile, zProc, pzErrMsg))
		DYNFUNC_FUNC(return, void*,                 sqlite3_malloc,                (int size), (size))
		DYNFUNC_FUNC(return, char *,                sqlite3_mprintf,               (const char *zFormat,...), (zFormat,...))
#if MSQLITE_VERSION_NUMBER >= 3006000
		DYNFUNC_FUNC(return, sqlite3_stmt *,        sqlite3_next_stmt,             (sqlite3 *pDb, sqlite3_stmt *pStmt), (pDb, pStmt))
#endif
		DYNFUNC_FUNC(return, int,                   sqlite3_open,                  (const char *filename, sqlite3 **ppDb), (filename, ppDb))
		DYNFUNC_FUNC(return, int,                   sqlite3_open16,                (const void *filename, sqlite3 **ppDb), (filename, ppDb))
		DYNFUNC_FUNC(return, int,                   sqlite3_open_v2,               (const char *filename, sqlite3 **ppDb, int flags, const char *zVfs), (filename, ppDb, flags, zVfs))
		DYNFUNC_FUNC(return, int,                   sqlite3_prepare_v2,            (sqlite3 *db, const char *zSql, int nBytes, sqlite3_stmt **ppStmt, const char **pzTail), (db, zSql, nBytes, ppStmt, pzTail))
		DYNFUNC_FUNC(return, int,                   sqlite3_prepare16_v2,          (sqlite3 *db, const void *zSql, int nBytes, sqlite3_stmt **ppStmt, const void **pzTail), (db, zSql, nBytes, ppStmt, pzTail))
		DYNFUNC_FUNC(;, void,                       sqlite3_progress_handler,      (sqlite3 *db, int nOps, int (*xProgress)(void*), void *pArg), (db, nOps, xProgress, pArg))
		DYNFUNC_FUNC(;, void,                       sqlite3_randomness,            (int N, void *P), (N, P))
		DYNFUNC_FUNC(return, void*,                 sqlite3_realloc,               (void* ptr, int newSize), (ptr, newSize))
		DYNFUNC_FUNC(return, int,                   sqlite3_reset,                 (sqlite3_stmt *pStmt), (pStmt))
		DYNFUNC_FUNC(;, void,                       sqlite3_result_blob,           (sqlite3_context *pCtx, const void *z, int n, void (*xDel)(void *)), (pCtx, z, n, xDel))
		DYNFUNC_FUNC(;, void,                       sqlite3_result_double,         (sqlite3_context *pCtx, double rVal), (pCtx, rVal))
		DYNFUNC_FUNC(;, void,                       sqlite3_result_error,          (sqlite3_context *pCtx, const char *z, int n), (pCtx, z, n))
		DYNFUNC_FUNC(;, void,                       sqlite3_result_error16,        (sqlite3_context *pCtx, const void *z, int n), (pCtx, z, n))
		DYNFUNC_FUNC(;, void,                       sqlite3_result_int,            (sqlite3_context *pCtx, int iVal), (pCtx, iVal))
		DYNFUNC_FUNC(;, void,                       sqlite3_result_int64,          (sqlite3_context *pCtx, sqlite_int64 iVal), (pCtx, iVal))
		DYNFUNC_FUNC(;, void,                       sqlite3_result_null,           (sqlite3_context *pCtx), (pCtx))
		DYNFUNC_FUNC(;, void,                       sqlite3_result_text,           (sqlite3_context *pCtx, const char *z, int n, void (*xDel)(void *)), (pCtx, z, n, xDel))
		DYNFUNC_FUNC(;, void,                       sqlite3_result_text16,         (sqlite3_context *pCtx, const void *z, int n, void (*xDel)(void *)), (pCtx, z, n, xDel))
		DYNFUNC_FUNC(;, void,                       sqlite3_result_text16be,       (sqlite3_context *pCtx, const void *z, int n, void (*xDel)(void *)), (pCtx, z, n, xDel))
		DYNFUNC_FUNC(;, void,                       sqlite3_result_text16le,       (sqlite3_context *pCtx, const void *z, int n, void (*xDel)(void *)), (pCtx, z, n, xDel))
		DYNFUNC_FUNC(;, void,                       sqlite3_result_value,          (sqlite3_context *pCtx, sqlite3_value *pValue), (pCtx, pValue))
#if MSQLITE_VERSION_NUMBER >= 3004000
		DYNFUNC_FUNC(;, void,                       sqlite3_result_zeroblob,       (sqlite3_context *pCtx, int n), (pCtx, n))
#endif
		DYNFUNC_FUNC(return, void *,                sqlite3_rollback_hook,         (sqlite3 *db, void (*xCallback)(void*), void *pArg), (db, xCallback, pArg))
#if MSQLITE_VERSION_NUMBER >= 3007003
//		DYNFUNC_FUNC(return, int,                   sqlite3_rtree_geometry_callback, (sqlite3 *db, const char *zGeom, int (*xGeom)(sqlite3_rtree_geometry *, int nCoord, double *aCoord, int *pRes), void *pContext), (db, zGeom, xGeom, pContext))
#endif
		DYNFUNC_FUNC(return, int,                   sqlite3_set_authorizer,        (sqlite3 *db, int (*xAuth)(void*,int,const char*,const char*,const char*,const char*), void *pArg), (db, xAuth, pArg))
		DYNFUNC_FUNC(;, void,                       sqlite3_set_auxdata,           (sqlite3_context *pCtx, int iArg, void *pAux, void (*xDelete)(void*)), (pCtx, iArg, pAux, xDelete))
#if MSQLITE_VERSION_NUMBER >= 3006000
		DYNFUNC_FUNC(return, int,                   sqlite3_shutdown,              (void), ())
#endif
		DYNFUNC_FUNC(return, int,                   sqlite3_sleep,                 (int ms), (ms))
		DYNFUNC_FUNC(return, char *,                sqlite3_snprintf,              (int n, char *zBuf, const char *zFormat, ...), (n, zBuf, zFormat, ...))
#if MSQLITE_VERSION_NUMBER >= 3006018
		DYNFUNC_FUNC(return, const char *,          sqlite3_sourceid,              (void), ())
#endif
#if MSQLITE_VERSION_NUMBER >= 3005003
		DYNFUNC_FUNC(return, const char *,          sqlite3_sql,                   (sqlite3_stmt *pStmt), (pStmt))
#endif
		DYNFUNC_FUNC(return, int,                   sqlite3_step,                  (sqlite3_stmt *pStmt), (pStmt))
#if MSQLITE_VERSION_NUMBER >= 3007010
		DYNFUNC_FUNC(return, int,                   sqlite3_stmt_busy,             (sqlite3_stmt* pStmt), (pStmt))
#endif
#if MSQLITE_VERSION_NUMBER >= 3007004
		DYNFUNC_FUNC(return, int,                   sqlite3_stmt_readonly,         (sqlite3_stmt *pStmt), (pStmt))
#endif
#if MSQLITE_VERSION_NUMBER >= 3007000
		DYNFUNC_FUNC(return, int,                   sqlite3_stmt_status,           (sqlite3_stmt* pStmt, int op, int resetFlg), (pStmt, op, resetFlg))
#endif
		DYNFUNC_FUNC(return, int,                   sqlite3_threadsafe,            (void), ())
		DYNFUNC_FUNC(return, int,                   sqlite3_total_changes,         (sqlite3 *db), (db))
		DYNFUNC_FUNC(return, void *,                sqlite3_trace,                 (sqlite3 *db, void(*xTrace)(void*,const char*), void *pArg), (db, xTrace, pArg))
		DYNFUNC_FUNC(return, int,                   sqlite3_transfer_bindings,     (sqlite3_stmt *pStmt, sqlite3_stmt *pStmt), (pStmt, pStmt))
#if MSQLITE_VERSION_NUMBER >= 3007000
//		DYNFUNC_FUNC(return, int,                   sqlite3_unlock_notify,         (sqlite3 *pBlocked, void (*xNotify)(void **apArg, int nArg), void *pNotifyArg), (pBlocked, xNotify, pNotifyArg))
#endif
		DYNFUNC_FUNC(return, void *,                sqlite3_update_hook,           (sqlite3 *db, void (*xCallback)(void *, int, char const *, char const *, sqlite_int64), void *pArg), (db, xCallback, pArg))
		DYNFUNC_FUNC(return, void *,                sqlite3_user_data,             (sqlite3_context *pCtx), (pCtx))
		DYNFUNC_FUNC(return, const void *,          sqlite3_value_blob,            (sqlite3_value *pVal), (pVal))
		DYNFUNC_FUNC(return, int,                   sqlite3_value_bytes,           (sqlite3_value *pVal), (pVal))
		DYNFUNC_FUNC(return, int,                   sqlite3_value_bytes16,         (sqlite3_value *pVal), (pVal))
		DYNFUNC_FUNC(return, double,                sqlite3_value_double,          (sqlite3_value *pVal), (pVal))
		DYNFUNC_FUNC(return, int,                   sqlite3_value_int,             (sqlite3_value *pVal), (pVal))
		DYNFUNC_FUNC(return, sqlite_int64,          sqlite3_value_int64,           (sqlite3_value *pVal), (pVal))
		DYNFUNC_FUNC(return, const unsigned char *, sqlite3_value_text,            (sqlite3_value *pVal), (pVal))
		DYNFUNC_FUNC(return, const void *,          sqlite3_value_text16,          (sqlite3_value *pVal), (pVal))
		DYNFUNC_FUNC(return, const void *,          sqlite3_value_text16be,        (sqlite3_value *pVal), (pVal))
		DYNFUNC_FUNC(return, const void *,          sqlite3_value_text16le,        (sqlite3_value *pVal), (pVal))
		DYNFUNC_FUNC(return, int,                   sqlite3_value_type,            (sqlite3_value *pVal), (pVal))
		DYNFUNC_FUNC(return, char *,                sqlite3_vmprintf,              (const char* p, va_list ap), (p, ap))
#if MSQLITE_VERSION_NUMBER >= 3007000
		DYNFUNC_FUNC(return, int,                   sqlite3_wal_autocheckpoint,    (sqlite3 *db, int N), (db, N))
		DYNFUNC_FUNC(return, int,                   sqlite3_wal_checkpoint,        (sqlite3 *db, const char *zDb), (db, zDb))
#if MSQLITE_VERSION_NUMBER >= 3007006
		DYNFUNC_FUNC(return, int,                   sqlite3_wal_checkpoint_v2,     (sqlite3 *db, const char *zDb, int mode, int* logFrameCount, int* ckptFrameCount), (db, zDb, mode, logFrameCount, ckptFrameCount))
#endif
		DYNFUNC_FUNC(return, void *,                sqlite3_wal_hook,              (sqlite3 *db, int (*xCallback)(void *, sqlite3 *, const char*, int), void *pArg), (db, xCallback, pArg))
#endif
#if MSQLITE_VERSION_NUMBER >= 3007014
		//#if defined(__WXMSW__)
		DYNFUNC_FUNC(return, int,                   sqlite3_win32_set_directory,   (DWORD type, LPCWSTR zValue), (type, zValue))
		//#endif
#endif
#if WXSQLITE3_HAVE_METADATA
		DYNFUNC_FUNC(return, const char *,          sqlite3_column_database_name,  (sqlite3_stmt *pStmt, int iCol), (pStmt, iCol))
		DYNFUNC_FUNC(return, const void *,          sqlite3_column_database_name16, (sqlite3_stmt *pStmt, int iCol), (pStmt, iCol))
		DYNFUNC_FUNC(return, const char *,          sqlite3_column_table_name,     (sqlite3_stmt *pStmt, int iCol), (pStmt, iCol))
		DYNFUNC_FUNC(return, const void *,          sqlite3_column_table_name16,   (sqlite3_stmt *pStmt, int iCol), (pStmt, iCol))
		DYNFUNC_FUNC(return, const char *,          sqlite3_column_origin_name,    (sqlite3_stmt *pStmt, int iCol), (pStmt, iCol))
		DYNFUNC_FUNC(return, const void *,          sqlite3_column_origin_name16,  (sqlite3_stmt *pStmt, int iCol), (pStmt, iCol))
		DYNFUNC_FUNC(return, int,                   sqlite3_table_column_metadata, (sqlite3 *db, const char *zDbName, const char *zTableName, const char *zColumnName, char const **pzDataType, char const **pzCollSeq, int *pNotNull, int *pPrimaryKey, int *pAutoinc), (db, zDbName, zTableName, zColumnName, pzDataType, pzCollSeq, pNotNull, pPrimaryKey, pAutoinc))
#endif

// #if WXSQLITE3_HAVE_CODEC
// 		DYNFUNC_FUNC(return, int,                   sqlite3_key,                   (sqlite3 *db, const void *pKey, int nKey), (db, pKey, nKey))
// 		DYNFUNC_FUNC(return, int,                   sqlite3_rekey,                 (sqlite3 *db, const void *pKey, int nKey), (db, pKey, nKey))
// #endif
	DECLARE_FUN_END()
	
};


};
