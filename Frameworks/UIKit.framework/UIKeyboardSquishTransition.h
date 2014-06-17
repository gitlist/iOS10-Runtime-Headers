/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIKeyboardSquishTransition : UIKeyboardKeyplaneTransition  {
    double _widthRatio;
    double _offsetX;
    bool_transitionNeedsUpdate;
}


- (void)removeAllAnimations;
- (void)updateTransitionIfNeeded;
- (void)_updateTransition;
- (void)rebuildFromStartKeyplane:(id)arg1 startView:(id)arg2 toEndKeyplane:(id)arg3 endView:(id)arg4;
- (void)updateWithProgress:(double)arg1;

@end