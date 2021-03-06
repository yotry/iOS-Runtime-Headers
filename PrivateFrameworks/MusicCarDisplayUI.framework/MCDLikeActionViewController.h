/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MusicCarDisplayUI.framework/MusicCarDisplayUI
 */

@interface MCDLikeActionViewController : UIViewController {
    MPAVItem * _item;
    MCDLikeActionView * _likeActionView;
}

@property (nonatomic, retain) MPAVItem *item;
@property (nonatomic, retain) MCDLikeActionView *likeActionView;

- (void).cxx_destruct;
- (void)_dismissAlertController;
- (void)_handleDislikePress:(id)arg1;
- (void)_handleLikePress:(id)arg1;
- (void)_handleTouch:(id)arg1;
- (id)initWithItem:(id)arg1;
- (id)item;
- (id)likeActionView;
- (void)loadView;
- (void)setItem:(id)arg1;
- (void)setLikeActionView:(id)arg1;

@end
