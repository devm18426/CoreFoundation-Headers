/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreFoundation.framework/Versions/A/CoreFoundation
 */

@interface NSTimer : NSObject

@property (copy) NSDate *fireDate;
@property (readonly) double timeInterval;
@property double tolerance;
@property (readonly, retain) id userInfo;
@property (getter=isValid, readonly) BOOL valid;

// Image: /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation

// NSTimer (NSTimer)

+ (id)allocWithZone:(struct _NSZone { }*)arg1;
+ (id)scheduledTimerWithTimeInterval:(double)arg1 invocation:(id)arg2 repeats:(BOOL)arg3;
+ (id)scheduledTimerWithTimeInterval:(double)arg1 repeats:(BOOL)arg2 block:(id)arg3;
+ (id)scheduledTimerWithTimeInterval:(double)arg1 target:(id)arg2 selector:(SEL)arg3 userInfo:(id)arg4 repeats:(BOOL)arg5;
+ (id)timerWithFireDate:(id)arg1 target:(id)arg2 selector:(SEL)arg3 userInfo:(id)arg4;
+ (id)timerWithTimeInterval:(double)arg1 invocation:(id)arg2 repeats:(BOOL)arg3;
+ (id)timerWithTimeInterval:(double)arg1 repeats:(BOOL)arg2 block:(id)arg3;
+ (id)timerWithTimeInterval:(double)arg1 target:(id)arg2 selector:(SEL)arg3 userInfo:(id)arg4 repeats:(BOOL)arg5;

- (double)_cffireTime;
- (struct { long long x1; void *x2; int (*x3)(); int (*x4)(); int (*x5)(); })context;
- (struct __CFString { }*)copyDebugDescription;
- (void)fire;
- (id)fireDate;
- (double)fireTime;
- (id)initWithFireDate:(id)arg1 interval:(double)arg2 repeats:(BOOL)arg3 block:(id)arg4;
- (id)initWithFireDate:(id)arg1 interval:(double)arg2 target:(id)arg3 selector:(SEL)arg4 userInfo:(id)arg5 repeats:(BOOL)arg6;
- (double)interval;
- (void)invalidate;
- (BOOL)isValid;
- (long long)order;
- (void)setFireDate:(id)arg1;
- (void)setFireTime:(double)arg1;
- (void)setTolerance:(double)arg1;
- (double)timeInterval;
- (double)tolerance;
- (id)userInfo;

@end
