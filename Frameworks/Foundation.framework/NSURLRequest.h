/* Generated by RuntimeBrowser on iPhone OS 4.0
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@class NSURLRequestInternal;



@interface NSURLRequest : NSObject <NSCoding, NSCopying, NSMutableCopying>
{
    NSURLRequestInternal *_internal;
}

+ (id)requestWithURL:(id)arg1 cachePolicy:(NSUInteger)arg2 timeoutInterval:(double)arg3;
+ (id)requestWithURL:(id)arg1;
+ (void)setDefaultTimeoutInterval:(double)arg1;
+ (double)defaultTimeoutInterval;
+ (void)setAllowsAnyHTTPSCertificate:(BOOL)arg1 forHost:(id)arg2;
+ (void)setAllowsSpecificHTTPSCertificate:(id)arg1 forHost:(id)arg2;
+ (id)allowsSpecificHTTPSCertificateForHost:(id)arg1;
+ (BOOL)allowsAnyHTTPSCertificateForHost:(id)arg1;

- (id)initWithURL:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (NSUInteger)hash;
- (id)URL;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (BOOL)isEqual:(id)arg1;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (id)description;
- (void)_removePropertyForKey:(id)arg1;
- (NSUInteger)networkServiceType;
- (id)valueForHTTPHeaderField:(id)arg1;
- (id)HTTPContentType;
- (id)HTTPExtraCookies;
- (id)HTTPReferrer;
- (id)HTTPUserAgent;
- (BOOL)HTTPShouldUsePipelining;
- (void)_setProperty:(id)arg1 forKey:(id)arg2;
- (id)_copyReplacingURLWithURL:(id)arg1;
- (id)_initWithCFURLRequest:(struct _CFURLRequest { }*)arg1;
- (struct _CFURLRequest { }*)_CFURLRequest;
- (BOOL)_URLHasScheme:(id)arg1;
- (id)initWithURL:(id)arg1 cachePolicy:(NSUInteger)arg2 timeoutInterval:(double)arg3;
- (NSUInteger)cachePolicy;
- (double)timeoutInterval;
- (id)mainDocumentURL;
- (BOOL)HTTPShouldHandleCookies;
- (id)allHTTPHeaderFields;
- (id)contentDispositionEncodingFallbackArray;
- (id)HTTPBody;
- (id)HTTPBodyStream;
- (id)HTTPMethod;
- (id)_propertyForKey:(id)arg1;
- (id)_web_HTTPReferrer;
- (id)_web_HTTPContentType;
- (BOOL)_web_isConditionalRequest;

@end
