/* Generated by RuntimeBrowser on iPhone OS 4.0
   Image: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */



@interface ITDBGeniusDatabase : NSObject 
{

  /* Error parsing encoded ivar type info: ^{CPSqliteDatabase=^{__CFString}^{CPSqliteConnection}^?^?^?^v^?^?^?B^vi{$_798="checkVersion"b1"checkedJournalPermissions"b1"propertiesDisabled"b1"threadSafety"b1"shouldNotify"b1"shouldYield"b1"notifyRegisterAttempted"b1"notifyRegisterSucceeded"b1"postedRequest"b1"receivedRequest"b1}{_opaque_pthread_mutex_t="__sig"l"__opaque"[40c]}i^?^?^?^?^vi^{__CFString}} */
    struct CPSqliteDatabase { struct __CFString {} *x1; struct CPSqliteConnection {} *x2; int (*x3)(); int (*x4)(); int (*x5)(); void *x6; int (*x7)(); int (*x8)(); int (*x9)(); /* Warning: Unrecognized filer type: 'B' using 'void*' */ void*x10; void *x11; NSInteger x12; struct $_798 { 
            unsigned int checkVersion : 1; 
            unsigned int checkedJournalPermissions : 1; 
            unsigned int propertiesDisabled : 1; 
            unsigned int threadSafety : 1; 
            unsigned int shouldNotify : 1; 
            unsigned int shouldYield : 1; 
            unsigned int notifyRegisterAttempted : 1; 
            unsigned int notifyRegisterSucceeded : 1; 
            unsigned int postedRequest : 1; 
            unsigned int receivedRequest : 1; 
        } x13; struct _opaque_pthread_mutex_t { 
            long __sig; 
            BOOL __opaque[40]; 
        } x14; NSInteger x15; int (*x16)(); int (*x17)(); int (*x18)(); int (*x19)(); void *x20; NSInteger x21; struct __CFString {} *x22; } *_db;

    struct CPSqliteConnection { struct CPSqliteDatabase {} *x1; struct sqlite3 {} *x2; struct __CFDictionary {} *x3; void *x4; int (*x5)(); int (*x6)(); void *x7; NSUInteger x8; } *_dbrc;
    NSInteger _transactionCount;
    double _connectionFailedTime;
    unsigned int _hasGeniusSchema : 1;
    unsigned int _hasGeniusSchemaCached : 1;
}

+ (id)geniusDatabaseFilePath;
+ (id)fallbackGeniusDatabaseFilePath;
+ (id)sharedGeniusDatabase;

- (struct CPSqliteDatabase { struct __CFString {} *x1; struct CPSqliteConnection {} *x2; int (*x3)(); int (*x4)(); int (*x5)(); void *x6; int (*x7)(); int (*x8)(); int (*x9)(); /* Warning: Unrecognized filer type: 'B' using 'void*' */ void*x10; void *x11; NSInteger x12; struct $_798 { unsigned int x_13_1_1 : 1; unsigned int x_13_1_2 : 1; unsigned int x_13_1_3 : 1; unsigned int x_13_1_4 : 1; unsigned int x_13_1_5 : 1; unsigned int x_13_1_6 : 1; unsigned int x_13_1_7 : 1; unsigned int x_13_1_8 : 1; unsigned int x_13_1_9 : 1; unsigned int x_13_1_10 : 1; } x13; struct _opaque_pthread_mutex_t { long x_14_1_1; BOOL x_14_1_2[40]; } x14; NSInteger x15; int (*x16)(); int (*x17)(); int (*x18)(); int (*x19)(); void *x20; NSInteger x21; struct __CFString {} *x22; }*)_loadedDatabaseAtPath:(id)arg1;
     /* Encoded args for previous method: ^{CPSqliteDatabase=^{__CFString}^{CPSqliteConnection}^?^?^?^v^?^?^?B^vi{$_798=b1b1b1b1b1b1b1b1b1b1}{_opaque_pthread_mutex_t=l[40c]}i^?^?^?^?^vi^{__CFString}}12@0:4@8 */

- (void)beginTransaction;
- (void)endTransaction;
- (void)_connect;
- (NSUInteger)_getCountOfResultsInTable:(id)arg1 where:(id)arg2 limit:(NSUInteger)arg3;
- (BOOL)_schemaHasDefinedTable:(id)arg1;
- (NSUInteger)_getInt32ValueInTable:(id)arg1 column:(id)arg2 where:(id)arg3 limit:(NSUInteger)arg4;
- (unsigned long long)_getInt64ValueInTable:(id)arg1 column:(id)arg2 where:(id)arg3 limit:(NSUInteger)arg4;
- (BOOL)_copyBlobData:(id*)arg1 blobAllocType:(NSInteger)arg2 table:(id)arg3 blobColumn:(id)arg4 where:(id)arg5 limit:(NSUInteger)arg6 sqliteStatement:(struct CPSqliteStatement { struct CPSqliteConnection {} *x1; struct sqlite3_stmt {} *x2; }*)arg7;
- (id)_copyBlobDataAndBytesInTable:(id)arg1 blobColumn:(id)arg2 where:(id)arg3 limit:(NSUInteger)arg4 sqliteStatement:(struct CPSqliteStatement { struct CPSqliteConnection {} *x1; struct sqlite3_stmt {} *x2; }*)arg5;
- (BOOL)_readBlobIntoData:(id)arg1 table:(id)arg2 blobColumn:(id)arg3 where:(id)arg4 limit:(NSUInteger)arg5 sqliteStatement:(struct CPSqliteStatement { struct CPSqliteConnection {} *x1; struct sqlite3_stmt {} *x2; }*)arg6;
- (BOOL)_readBlobForRowID:(unsigned long long)arg1 intoData:(id)arg2 table:(const char *)arg3 blobColumn:(const char *)arg4;
- (BOOL)hasDatabase;
- (id)copyGeniusConfigrationDataAndBytes;
- (NSUInteger)geniusConfigurationVersion;
- (id)copyGeniusMetadataDataAndBytesForGlobalID:(unsigned long long)arg1;
- (id)copyGeniusSimilaritiesDataAndBytesForGlobalID:(unsigned long long)arg1;
- (BOOL)getGeniusConfigrationDataAndBytesIntoData:(id)arg1;
- (struct CPSqliteStatement { struct CPSqliteConnection {} *x1; struct sqlite3_stmt {} *x2; }*)_cachedStatementForReading:(id)arg1;
- (BOOL)getGeniusMetadataDataAndBytesForGlobalID:(unsigned long long)arg1 intoData:(id)arg2;
- (BOOL)getGeniusSimilaritiesDataAndBytesForGlobalID:(unsigned long long)arg1 intoData:(id)arg2;
- (BOOL)hasGeniusDataAvailable;
- (BOOL)hasGeniusCapableiTunes;
- (BOOL)hasGeniusFeatureEnabled;
- (NSUInteger)defaultTrackCount;
- (NSUInteger)defaultMinTrackCount;
- (id)init;

@end
