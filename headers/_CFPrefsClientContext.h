/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreFoundation.framework/Versions/A/CoreFoundation
 */

@interface _CFPrefsClientContext : NSObject {
    _Atomic id  _cfprefsd;
    bool  _didDeferKVONotifications;
    NSObject<OS_xpc_object> * _entitlements;
    bool  _hasInFlightKVONotifications;
    bool  _impersonatingAnotherProcess;
    BOOL  _isPlatformBinary;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    struct __CFSet { } * _observedSources;
    struct __CFBoolean { } * _sandboxed;
    struct __CFDictionary { } * _suiteCache;
    bool  _valid;
}

@end
