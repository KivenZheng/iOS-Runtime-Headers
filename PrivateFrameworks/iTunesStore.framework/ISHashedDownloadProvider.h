/* Generated by RuntimeBrowser on iPhone OS 4.0
   Image: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
 */

@class NSString, NSArray;



@interface ISHashedDownloadProvider : ISDataProvider <NSCopying>
{
    NSInteger _fileDescriptor;
    NSArray *_hashes;
    NSString *_localFilePath;
    struct CC_MD5state_st { 
        NSUInteger A; 
        NSUInteger B; 
        NSUInteger C; 
        NSUInteger D; 
        NSUInteger Nl; 
        NSUInteger Nh; 
        NSUInteger data[16]; 
        NSInteger num; 
    } _md5Context;
    long long _numberOfBytesToHash;
    long long _totalBytesWritten;
    long long _validatedBytes;
}

@property long long validatedBytes;
@property long long streamedBytes;
@property long long numberOfBytesToHash;
@property(retain) NSString *localFilePath;
@property(retain) NSArray *hashes;


- (BOOL)parseData:(id)arg1 returningError:(id*)arg2;
- (long long)streamedBytes;
- (BOOL)_checkHashForByteCount:(long long)arg1;
- (void)_closeFile;
- (BOOL)_openFile;
- (BOOL)_truncateToSize:(long long)arg1;
- (long long)_verifiedBytesByInitializingHashForFileSize:(long long)arg1;
- (BOOL)_writeDataWithHashing:(id)arg1 returningError:(id*)arg2;
- (BOOL)_writeDataWithoutHashing:(id)arg1 returningError:(id*)arg2;
- (long long)validatedBytes;
- (void)setValidatedBytes:(long long)arg1;
- (void)setStreamedBytes:(long long)arg1;
- (long long)numberOfBytesToHash;
- (void)setNumberOfBytesToHash:(long long)arg1;
- (id)localFilePath;
- (void)setLocalFilePath:(id)arg1;
- (id)hashes;
- (void)setHashes:(id)arg1;
- (BOOL)isStream;
- (void)closeStream;
- (void)resetStream;
- (BOOL)canStreamContentLength:(long long)arg1 error:(id*)arg2;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)init;
- (void)dealloc;
- (void)setup;

@end
