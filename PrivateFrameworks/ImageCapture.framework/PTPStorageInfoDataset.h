/* Generated by RuntimeBrowser on iPhone OS 4.0
   Image: /System/Library/PrivateFrameworks/ImageCapture.framework/ImageCapture
 */

@class NSString, NSMutableData;



@interface PTPStorageInfoDataset : NSObject 
{
    unsigned short _storageType;
    unsigned short _filesystemType;
    unsigned short _accessCapability;
    unsigned long long _maxCapacity;
    unsigned long long _freeSpaceInBytes;
    NSUInteger _freeSpaceInImages;
    NSString *_storageDescription;
    NSString *_volumeLabel;
    NSMutableData *_content;
    BOOL _dirty;
    BOOL _readOnlyObject;
}


- (unsigned long long)maxCapacity;
- (void)setMaxCapacity:(unsigned long long)arg1;
- (id)content;
- (unsigned long)contentSize;
- (id)init;
- (id)initWithData:(id)arg1;
- (void)dealloc;
- (id)description;
- (id)initWithMutableData:(id)arg1;
- (unsigned short)storageType;
- (void)setStorageType:(unsigned short)arg1;
- (unsigned short)filesystemType;
- (void)setFilesystemType:(unsigned short)arg1;
- (unsigned short)accessCapability;
- (void)setAccessCapability:(unsigned short)arg1;
- (unsigned long long)freeSpaceInBytes;
- (void)setFreeSpaceInBytes:(unsigned long long)arg1;
- (unsigned long)freeSpaceInImages;
- (void)setFreeSpaceInImages:(unsigned long)arg1;
- (id)storageDescription;
- (void)setStorageDescription:(id)arg1;
- (id)volumeLabel;
- (void)setVolumeLabel:(id)arg1;
- (void)updateContent;
- (void)copyContent:(char *)arg1 ofSize:(unsigned long)arg2;
- (void)setContent:(id)arg1;

@end
