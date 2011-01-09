/* Generated by RuntimeBrowser on iPhone OS 4.0
   Image: /System/Library/PrivateFrameworks/GMM.framework/GMM
 */

@class NSString;



@interface GMMDocumentInfo : PBCodable 
{
    NSString *_author;
    NSString *_attributionUrl;
}

@property(readonly) BOOL hasAuthor;
@property(readonly) BOOL hasAttributionUrl;
@property(retain) NSString *attributionUrl;
@property(retain) NSString *author;


- (void)writeTo:(id)arg1;
- (id)attributionUrl;
- (id)dictionaryRepresentation;
- (id)init;
- (void)dealloc;
- (id)description;
- (BOOL)readFrom:(id)arg1;
- (void)setAuthor:(id)arg1;
- (id)author;
- (BOOL)hasAuthor;
- (BOOL)hasAttributionUrl;
- (void)setAttributionUrl:(id)arg1;

@end
