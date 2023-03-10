/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreFoundation.framework/Versions/A/CoreFoundation
 */

@interface CFPrefsSource : NSObject {
    _CFXPreferences * _containingPreferences;
    struct __CFDictionary { } * _dict;
    _Atomic long long  _generationCount;
    BOOL  _isSearchList;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    __CFPrefsWeakObservers * _observers;
    _Atomic unsigned int  lastKnownShmemState;
    _Atomic _Atomic unsigned int * shmemEntry;
}

- (void)_notifyObserversOfChangeFromValuesForKeys:(id)arg1 toValuesForKeys:(id)arg2;
- (int)alreadylocked_addPreferencesObserver:(id)arg1;
- (void)alreadylocked_clearCache;
- (struct __CFDictionary { }*)alreadylocked_copyDictionary;
- (struct __CFArray { }*)alreadylocked_copyKeyList;
- (void*)alreadylocked_copyValueForKey:(struct __CFString { }*)arg1;
- (id)alreadylocked_createObserverUpdateMessageWithOperation:(int)arg1 forRole:(int*)arg2;
- (long long)alreadylocked_generationCount;
- (int)alreadylocked_removePreferencesObserver:(id)arg1;
- (void)alreadylocked_setPrecopiedValues:(const void**)arg1 forKeys:(const struct __CFString {}**)arg2 count:(long long)arg3 from:(id)arg4;
- (int)alreadylocked_updateObservingRemoteChanges;
- (struct __CFString { }*)container;
- (struct __CFDictionary { }*)copyDictionary;
- (struct __CFArray { }*)copyKeyList;
- (struct __CFString { }*)copyOSLogDescription;
- (void*)copyValueForKey:(struct __CFString { }*)arg1;
- (id)createRequestNewContentMessageForDaemon:(int)arg1;
- (void)dealloc;
- (id)description;
- (struct __CFString { }*)domainIdentifier;
- (void)fullCloudSynchronizeWithCompletionHandler:(id)arg1;
- (long long)generationCount;
- (void)handleReply:(id)arg1 toRequestNewDataMessage:(id)arg2 onConnection:(id)arg3 retryCount:(int)arg4 error:(BOOL*)arg5;
- (id)initWithContainingPreferences:(id)arg1;
- (BOOL)isByHost;
- (BOOL)isDirectModeEnabled;
- (BOOL)isVolatile;
- (void)lock;
- (BOOL)managed;
- (void)mergeIntoDictionary:(struct __CFDictionary { }*)arg1 sourceDictionary:(struct __CFDictionary { }*)arg2 cloudKeyEvaluator:(id)arg3;
- (void)setAccessRestricted:(BOOL)arg1;
- (void)setConfigurationPath:(struct __CFString { }*)arg1;
- (void)setDaemonCacheEnabled:(BOOL)arg1;
- (void)setFileProtectionClass:(int)arg1;
- (void)setValue:(void*)arg1 forKey:(struct __CFString { }*)arg2 from:(id)arg3;
- (void)setValues:(const void**)arg1 forKeys:(const struct __CFString {}**)arg2 count:(long long)arg3 copyValues:(BOOL)arg4 from:(id)arg5;
- (void)setValues:(const void**)arg1 forKeys:(const struct __CFString {}**)arg2 count:(long long)arg3 copyValues:(BOOL)arg4 removeValuesForKeys:(const struct __CFString {}**)arg5 count:(long long)arg6 from:(id)arg7;
- (BOOL)synchronize;
- (void)transitionIntoDirectModeIfNeededWithRetryBlock:(id)arg1;
- (void)unlock;
- (struct __CFString { }*)userIdentifier;

@end
