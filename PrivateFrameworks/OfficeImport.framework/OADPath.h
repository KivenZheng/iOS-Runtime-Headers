/* Generated by RuntimeBrowser on iPhone OS 4.0
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class NSMutableArray;



@interface OADPath : NSObject 
{
    struct CGSize { 
        float width; 
        float height; 
    } mSize;
    NSMutableArray *mElements;
    NSInteger mFillMode;
    BOOL mStroked;
}


- (void)setSize:(struct CGSize { float x1; float x2; })arg1;
- (void)setFillMode:(NSInteger)arg1;
- (id)init;
- (struct CGSize { float x1; float x2; })size;
- (void)dealloc;
- (BOOL)stroked;
- (void)addElement:(id)arg1;
- (NSInteger)fillMode;
- (void)setStroked:(BOOL)arg1;
- (NSUInteger)elementCount;
- (id)elementAtIndex:(NSUInteger)arg1;

@end
