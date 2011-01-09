/* Generated by RuntimeBrowser on iPhone OS 4.0
   Image: /System/Library/PrivateFrameworks/DAVKit.framework/DAVKit
 */

@class DAVSession;



@interface DAVTrustInfo : NSObject 
{
    struct __SecTrust { } *_trust;
    DAVSession *_session;
    BOOL _allows;
}


- (id)host;
- (void)dealloc;
- (id)session;
- (id)initWithTrust:(struct __SecTrust { }*)arg1 session:(id)arg2;
- (BOOL)allowsTrust;
- (struct __SecTrust { }*)trust;
- (void)setAllowsTrust:(BOOL)arg1;

@end
