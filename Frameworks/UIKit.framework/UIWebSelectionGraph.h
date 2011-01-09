/* Generated by RuntimeBrowser on iPhone OS 4.0
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSMutableArray;



@interface UIWebSelectionGraph : NSObject 
{
    NSMutableArray *_selectionNodes;
}


- (void)exploreFromNode:(id)arg1 outwards:(BOOL)arg2 maxDepth:(NSInteger)arg3;
- (void)exploreFromNode:(id)arg1;
- (void)clearNodes;
- (id)addNodeFromSelection:(id)arg1;
- (id)init;
- (void)dealloc;

@end
