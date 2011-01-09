/* Generated by RuntimeBrowser on iPhone OS 4.0
   Image: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
 */

@class NSArray, <VMUMemory>, NSString, NSDictionary;



@interface VMUSymbolOwner : NSObject <NSCopying>
{
    NSString *_name;
    NSDictionary *_signature;
    <VMUMemory> *_textMemory;
    NSArray *_regions;
    NSArray *_symbols;
    NSArray *_sourceInfos;
    NSUInteger _flags;
}

+ (id)symbolOwnerWithName:(id)arg1 signature:(id)arg2 textMemory:(id)arg3 regions:(id)arg4 symbols:(id)arg5 sourceInfos:(id)arg6 flags:(NSUInteger)arg7;

- (BOOL)validate;
- (NSUInteger)flags;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)path;
- (unsigned long long)size;
- (id)name;
- (void)dealloc;
- (id)description;
- (id)sourceInfoForAddress:(unsigned long long)arg1;
- (void)slideToSegmentAddresses:(id)arg1;
- (id)initWithName:(id)arg1 signature:(id)arg2 textMemory:(id)arg3 regions:(id)arg4 symbols:(id)arg5 sourceInfos:(id)arg6 flags:(NSUInteger)arg7;
- (id)symbolForName:(id)arg1;
- (id)symbolsInAddressRange:(struct _VMURange { unsigned long long x1; unsigned long long x2; })arg1;
- (BOOL)isPEF;
- (BOOL)isCommpage;
- (BOOL)isAOut;
- (BOOL)isDylib;
- (BOOL)isDyld;
- (BOOL)isBundle;
- (BOOL)isDsym;
- (BOOL)isEqualToSymbolOwner:(id)arg1;
- (id)symbolForAddress:(unsigned long long)arg1;
- (id)programTextForAddress:(unsigned long long)arg1;
- (id)symbolOwnerByAddingContentsOfOwner:(id)arg1;
- (BOOL)isLazy;
- (BOOL)containsAddress:(unsigned long long)arg1;
- (id)regionForAddress:(unsigned long long)arg1;
- (id)regionsForName:(id)arg1;
- (id)symbolsForName:(id)arg1;
- (BOOL)isProtected;
- (id)programTextForAddressRange:(struct _VMURange { unsigned long long x1; unsigned long long x2; })arg1;
- (id)symbols;
- (id)regions;
- (id)symbolsForMangledName:(id)arg1;
- (id)sourceInfosInAddressRange:(struct _VMURange { unsigned long long x1; unsigned long long x2; })arg1;
- (id)sourceInfos;
- (BOOL)isMachO;
- (id)architecture;
- (id)signature;

@end
