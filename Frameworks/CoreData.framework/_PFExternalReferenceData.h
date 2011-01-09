/* Generated by RuntimeBrowser on iPhone OS 4.0
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@class NSData;



@interface _PFExternalReferenceData : NSData 
{
    NSData *_originalData;
    void *_bytesPtrForStore;
    NSUInteger _bytesLengthForStore;
    void *_bytesPtrForExternalReference;
    NSUInteger _bytesLengthForExternalReference;
    struct __externalDataFlags { 
        unsigned int _isStoredExternally : 1; 
        unsigned int _hasMappedData : 1; 
        unsigned int _reserved : 28; 
    } _externalDataFlags;
}

+ (BOOL)_updateFileDescriptorsInUseReserveNew:(BOOL)arg1;
+ (BOOL)_reserveMapFileDescriptor;
+ (BOOL)_releaseReservedMapFileDescriptor;

- (BOOL)isEqualToData:(id)arg1;
- (id)mutableCopy;
- (id)copy;
- (NSUInteger)length;
- (BOOL)isEqual:(id)arg1;
- (void)dealloc;
- (void)getBytes:(void*)arg1 length:(NSUInteger)arg2;
- (const void*)bytes;
- (id)description;
- (id)subdataWithRange:(struct _NSRange { NSUInteger x1; NSUInteger x2; })arg1;
- (void)getBytes:(void*)arg1 range:(struct _NSRange { NSUInteger x1; NSUInteger x2; })arg2;
- (void)_setBytesForExternalReference:(const void*)arg1;
- (void)_attemptToMapData;
- (const void*)_retrieveExternalData;
- (void)_writeExternalReferenceToInterimLocation;
- (void)_moveExternalReferenceToPermanentLocation;
- (BOOL)_isEqualHelper:(id)arg1;
- (NSUInteger)_bytesLengthForExternalReference;
- (const void*)_bytesPtrForExternalReference;
- (id)_originalData;
- (NSUInteger)_bytesLengthForStore;
- (id)initWithStoreBytes:(const void*)arg1 length:(NSUInteger)arg2;
- (id)initForExternalLocation:(id)arg1 data:(id)arg2;
- (void)_deleteExternalReferenceFromPermanentLocation;
- (BOOL)hasExternalReferenceContent;
- (const void*)_bytesPtrForStore;

@end
