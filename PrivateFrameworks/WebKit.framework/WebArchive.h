/* Generated by RuntimeBrowser on iPhone OS 4.0
   Image: /System/Library/PrivateFrameworks/WebKit.framework/WebKit
 */

@class WebArchivePrivate;



@interface WebArchive : NSObject <NSCoding, NSCopying>
{
    WebArchivePrivate *_private;
}


- (id)mainResource;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)data;
- (id)initWithData:(id)arg1;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (id)subresources;
- (id)_initWithCoreLegacyWebArchive:(struct PassRefPtr<WebCore::LegacyWebArchive> { struct LegacyWebArchive {} *x1; })arg1;
- (struct LegacyWebArchive { NSInteger x1; struct RefPtr<WebCore::ArchiveResource> { struct ArchiveResource {} *x_2_1_1; } x2; struct Vector<WTF::RefPtr<WebCore::ArchiveResource>,0ul> { NSUInteger x_3_1_1; struct VectorBuffer<WTF::RefPtr<WebCore::ArchiveResource>,0ul> { struct RefPtr<WebCore::ArchiveResource> {} *x_2_2_1; NSUInteger x_2_2_2; } x_3_1_2; } x3; struct Vector<WTF::RefPtr<WebCore::Archive>,0ul> { NSUInteger x_4_1_1; struct VectorBuffer<WTF::RefPtr<WebCore::Archive>,0ul> { struct RefPtr<WebCore::Archive> {} *x_2_2_1; NSUInteger x_2_2_2; } x_4_1_2; } x4; }*)_coreLegacyWebArchive;
- (id)initWithMainResource:(id)arg1 subresources:(id)arg2 subframeArchives:(id)arg3;
- (id)subframeArchives;

@end
