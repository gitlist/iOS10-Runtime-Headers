/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

@class UIImageView, <CAMZoomSliderDelegate>, NSTimer, UIView;

@interface CAMZoomSlider : UISlider  {
    BOOL _minimumAutozooming;
    BOOL _maximumAutozooming;
    BOOL __autozooming;
    <CAMZoomSliderDelegate> *_delegate;
    NSTimer *__visibilityTimer;
    UIImageView *__thumbImageView;
    UIView *__minTrackMaskView;
    UIView *__maxTrackMaskView;
}

@property <CAMZoomSliderDelegate> * delegate;
@property(getter=isMinimumAutozooming) BOOL minimumAutozooming;
@property(getter=isMaximumAutozooming) BOOL maximumAutozooming;
@property(readonly) NSTimer * _visibilityTimer;
@property(getter=_isAutozooming,setter=_setAutozooming:) BOOL _autozooming;
@property(readonly) UIImageView * _thumbImageView;
@property(readonly) UIView * _minTrackMaskView;
@property(readonly) UIView * _maxTrackMaskView;


- (id)_maxTrackMaskView;
- (id)_minTrackMaskView;
- (id)_thumbImageView;
- (void)_setAutozooming:(BOOL)arg1;
- (BOOL)_isAutozooming;
- (id)_visibilityTimer;
- (void)_postHideZoomSliderAnimation;
- (void)_hideZoomSlider:(id)arg1;
- (void)_endAutozooming;
- (void)_beginAutozooming;
- (void)_updateAutozooming;
- (BOOL)isMaximumAutozooming;
- (BOOL)_isMinimumOrMaximumAutozooming;
- (void)_setMaximumAutozooming:(BOOL)arg1;
- (void)_setMinimumAutozooming:(BOOL)arg1;
- (int)locationOfTouch:(id)arg1;
- (void)_commonCAMZoomSliderInitialization;
- (BOOL)visibilityTimerIsValid;
- (BOOL)isMinimumAutozooming;
- (void)makeInvisible;
- (void)makeVisible;
- (void)stopVisibilityTimer;
- (void)startVisibilityTimer;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setDelegate:(id)arg1;
- (void)dealloc;
- (id)delegate;
- (id)createThumbView;
- (void)endTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (BOOL)continueTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (BOOL)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (void)layoutSubviews;
- (BOOL)pointInside:(struct CGPoint { float x1; float x2; })arg1 withEvent:(id)arg2;
- (id)initWithCoder:(id)arg1;

@end