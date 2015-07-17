/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
 */

@interface AXThreadTimerTask : NSObject {
    id /* block */ _block;
    BOOL active;
    BOOL cancel;
    BOOL finished;
}

@property (getter=isActive, nonatomic) BOOL active;
@property (nonatomic, copy) id /* block */ block;
@property (getter=isCancelled, nonatomic) BOOL cancel;
@property (getter=isFinished, nonatomic) BOOL finished;

- (id /* block */)block;
- (void)dealloc;
- (BOOL)isActive;
- (BOOL)isCancelled;
- (BOOL)isFinished;
- (void)run;
- (void)runAfterDelay:(float)arg1;
- (void)setActive:(BOOL)arg1;
- (void)setBlock:(id /* block */)arg1;
- (void)setCancel:(BOOL)arg1;
- (void)setFinished:(BOOL)arg1;

@end