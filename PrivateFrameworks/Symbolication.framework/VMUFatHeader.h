/* Generated by RuntimeBrowser on iPhone OS 4.0
   Image: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
 */

@class NSDate, NSString, NSArray;



@interface VMUFatHeader : VMUHeader 
{
    NSDate *_timestamp;
    NSString *_path;
    NSArray *_fatArchs;
}

+ (id)fatHeaderWithMemory:(id)arg1 path:(id)arg2 timestamp:(id)arg3;

- (id)path;
- (id)timestamp;
- (void)dealloc;
- (id)fatArchs;
- (id)fatArchMatchingArchitecture:(id)arg1;
- (BOOL)isFat;
- (id)initWithMemory:(id)arg1 path:(id)arg2 timestamp:(id)arg3;

@end
