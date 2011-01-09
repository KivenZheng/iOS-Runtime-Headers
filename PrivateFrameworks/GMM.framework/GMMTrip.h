/* Generated by RuntimeBrowser on iPhone OS 4.0
   Image: /System/Library/PrivateFrameworks/GMM.framework/GMM
 */

@class NSMutableArray;



@interface GMMTrip : PBCodable 
{
    NSMutableArray *_routes;
}

@property(readonly) NSInteger routesCount;
@property(retain) NSMutableArray *routes;


- (void)writeTo:(id)arg1;
- (id)routeAtIndex:(NSUInteger)arg1;
- (void)setRoutes:(id)arg1;
- (id)routes;
- (id)dictionaryRepresentation;
- (id)init;
- (void)dealloc;
- (id)description;
- (id)description;
- (BOOL)readFrom:(id)arg1;
- (NSInteger)routesCount;
- (void)setRoute:(id)arg1 atIndex:(NSUInteger)arg2;
- (void)addRoute:(id)arg1;

@end
