/* Generated by RuntimeBrowser on iPhone OS 4.0
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class GQDBezierPath;



@interface GQDRLineEnd : NSObject <GQDNameMappable>
{
    GQDBezierPath *mPath;
    struct CGPoint { 
        float x; 
        float y; 
    } mEndPoint;
    BOOL mIsFilled;
    double mScale;
}

+ (const struct StateSpec { int (**x1)(); char *x2; NSInteger x3; NSInteger x4; struct Action {} *x5; int (*x6)(); int (*x7)(); int (*x8)(); struct ActionFinder {} *x9; }*)stateForReading;

- (struct CGPath { }*)path;
- (void)dealloc;
- (double)scale;
- (BOOL)isFilled;
- (char *)pathStr;
- (struct CGPoint { float x1; float x2; })endPoint;
- (NSInteger)readAttributesFromReader:(struct _xmlTextReader { }*)arg1;

@end
