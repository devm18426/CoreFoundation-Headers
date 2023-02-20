/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreFoundation.framework/Versions/A/CoreFoundation
 */

@interface CFPrefsSearchListSource : CFPrefsSource {
    struct __CFSet { } * _cloudKeys;
    struct __CFArray { } * _cloudPrefixKeys;
    CFPrefsCloudSource * _cloudSetTarget;
    struct __CFString { } * _identifier;
    struct __CFDictionary { } * _keysToSources;
    struct __CFArray { } * _sourceList;
    CFPrefsPlistSource * _standardSetTarget;
    BOOL  initialized;
}

- (struct __CFDictionary { }*)alreadylocked_copyDictionary;
- (struct __CFArray { }*)alreadylocked_copyKeyList;
- (void*)alreadylocked_copyValueForKey:(struct __CFString { }*)arg1;
- (void)alreadylocked_setPrecopiedValues:(const void**)arg1 forKeys:(const struct __CFString {}**)arg2 count:(long long)arg3 from:(id)arg4;
- (struct __CFString { }*)copyOSLogDescription;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)createRequestNewContentMessageForDaemon:(int)arg1;
- (void)dealloc;
- (void)deferredNotifyCausedByLoadingOfChangesFromDictionary:(struct __CFDictionary { }*)arg1 toDictionary:(struct __CFDictionary { }*)arg2;
- (void)deferredNotifyCausedByLocalWriteOfChangesToKey:(struct __CFString { }*)arg1 fromValue:(void*)arg2 toValue:(void*)arg3;
- (id)description;
- (struct __CFString { }*)domainIdentifier;
- (void)fullCloudSynchronizeWithCompletionHandler:(id)arg1;
- (long long)generationCount;
- (void)handleChangeNotificationForDomainIdentifier:(struct __CFString { }*)arg1 isRemote:(BOOL)arg2;
- (void)handleReply:(id)arg1 toRequestNewDataMessage:(id)arg2 onConnection:(id)arg3 retryCount:(int)arg4 error:(BOOL*)arg5;
- (id)initWithIdentifier:(struct __CFString { }*)arg1 containingPreferences:(id)arg2;
- (BOOL)isDirectModeEnabled;
- (void)lock;
- (BOOL)synchronize;
- (void)transitionIntoDirectModeIfNeededWithRetryBlock:(id)arg1;
- (void)unlock;

@end