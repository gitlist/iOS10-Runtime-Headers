/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIInputViewAnimationStyleDirectional : UIInputViewAnimationStyle  {
    int _outDirection;
}

@property int outDirection;

+ (id)animationStyleAnimated:(bool)arg1 duration:(double)arg2 outDirection:(int)arg3;

- (bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)endPlacementForInputViewSet:(id)arg1;
- (id)startPlacementForInputViewSet:(id)arg1 currentPlacement:(id)arg2;
- (int)outDirection;
- (bool)canDismissWithScrollView;
- (id)controllerForStartPlacement:(id)arg1 endPlacement:(id)arg2;
- (void)setOutDirection:(int)arg1;

@end