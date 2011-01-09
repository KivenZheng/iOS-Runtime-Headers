/* Generated by RuntimeBrowser on iPhone OS 4.0
   Image: /System/Library/Frameworks/GameKit.framework/GameKit
 */

@class NSString, UIColor, UIImage;



@interface GKInviteHeaderView : UIView 
{
    UIColor *_tintColor;
    UIImage *_gameIcon;
    NSString *_gameTitle;
    NSInteger _minPlayers;
    NSInteger _maxPlayers;
    NSString *_playersString;
    BOOL _showsPlayerString;
}

@property BOOL showsPlayerString;
@property(retain) NSString *playersString;
@property NSInteger maxPlayers;
@property NSInteger minPlayers;
@property(retain) UIColor *tintColor;


- (void)drawRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setTintColor:(id)arg1;
- (id)tintColor;
- (void)dealloc;
- (BOOL)showsPlayerString;
- (void)setShowsPlayerString:(BOOL)arg1;
- (id)playersString;
- (void)setPlayersString:(id)arg1;
- (void)setMaxPlayers:(NSInteger)arg1;
- (void)setMinPlayers:(NSInteger)arg1;
- (NSInteger)maxPlayers;
- (NSInteger)minPlayers;

@end
