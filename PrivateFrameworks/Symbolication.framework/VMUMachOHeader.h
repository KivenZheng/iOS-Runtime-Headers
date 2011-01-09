/* Generated by RuntimeBrowser on iPhone OS 4.0
   Image: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
 */

@class NSArray, NSString, <VMUMemory>, NSDate;



@interface VMUMachOHeader : VMUHeader 
{
    NSString *_name;
    NSString *_path;
    NSDate *_timestamp;
    <VMUMemory> *_memory;
    unsigned long long _address;
    unsigned long long _linkEditBase;
    NSArray *_loadCommands;
    long long _vmaddrSlide;
    NSUInteger _fileType;
    NSUInteger _flags;
}


- (id)uuid;
- (NSUInteger)flags;
- (void)setName:(id)arg1;
- (void)setTimestamp:(id)arg1;
- (id)path;
- (id)timestamp;
- (id)name;
- (void)dealloc;
- (id)description;
- (NSUInteger)fileType;
- (void)setPath:(id)arg1;
- (id)sections;
- (id)dyLinkerPath;
- (BOOL)isCommpage;
- (BOOL)isProtected;
- (id)loadCommands;
- (id)regions;
- (id)symbolTable;
- (id)dySymbolTable;
- (id)commpage;
- (id)segmentAddresses;
- (long long)vmaddrSlide;
- (BOOL)isFromSharedCache;
- (id)memory;
- (id)segmentNamed:(id)arg1;
- (unsigned long long)linkEditBase;
- (BOOL)isMachO;
- (id)architecture;
- (id)signature;
- (unsigned long long)address;

@end
