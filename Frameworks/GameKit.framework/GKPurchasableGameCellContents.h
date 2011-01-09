/* Generated by RuntimeBrowser on iPhone OS 4.0
   Image: /System/Library/Frameworks/GameKit.framework/GameKit
 */

@class GKGame;



@interface GKPurchasableGameCellContents : GKThreeLineCellContents 
{
    GKGame *_game;
}

@property(retain) GKGame *game;


- (void)prepareForReuse;
- (id)image;
- (id)init;
- (void)dealloc;
- (id)starsBackgroundImage;
- (id)starsForegroundImage;
- (void)drawLinesInRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)game;
- (void)setGame:(id)arg1;

@end
