/* Generated by RuntimeBrowser on iPhone OS 4.0
   Image: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
 */



@interface VMUSymbolOwnerCache : NSObject 
{
}

+ (void)initialize;
+ (void)flush;
+ (void)shrinkCacheToSize:(unsigned long long)arg1;
+ (NSUInteger)memoryLimit;
+ (void)setMemoryLimit:(NSUInteger)arg1;
+ (id)symbolOwnerForSignature:(id)arg1;
+ (void)addSymbolOwner:(id)arg1;
+ (void)removeSignature:(id)arg1;
+ (id)symbolOwners;


@end
