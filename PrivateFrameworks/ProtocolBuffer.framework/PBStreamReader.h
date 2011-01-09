/* Generated by RuntimeBrowser on iPhone OS 4.0
   Image: /System/Library/PrivateFrameworks/ProtocolBuffer.framework/ProtocolBuffer
 */

@class NSInputStream;



@interface PBStreamReader : PBDataReader 
{
    NSInputStream *_stream;
}

@property(retain) NSInputStream *stream;

+ (id)readProtoBuffersOfClass:(Class)arg1 fromFile:(id)arg2 error:(id*)arg3;

- (void)setStream:(id)arg1;
- (NSInteger)read:(char *)arg1 maxLength:(NSUInteger)arg2;
- (void)dealloc;
- (id)readBytes:(NSUInteger)arg1;
- (BOOL)seekToOffset:(NSUInteger)arg1;
- (id)initWithStream:(id)arg1;
- (id)stream;
- (id)readProtoBuffer;

@end
