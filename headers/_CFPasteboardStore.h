/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreFoundation.framework/Versions/A/CoreFoundation
 */

@interface _CFPasteboardStore : NSObject {
    struct { 
        unsigned int val[8]; 
    }  _allowedSandboxExtensionAuditToken;
    int  _allowedSandboxExtensionPID;
    _CFPasteboardCache * _cache;
    struct __CFDictionary { } * _clientInstancesByUUID;
    struct __CFSet { } * _clientInstancesWithCacheInfoForCurrentGeneration;
    NSObject<OS_dispatch_source> * _expirationTimer;
    struct __CFString { } * _name;
    _CFPasteboardClientInstanceID * _owner;
    unsigned char  _ownerHasPendingChanges;
    NSObject<OS_dispatch_queue> * _queue;
    unsigned char  _restrictSandboxExtension;
}

+ (void)_removePasteboardWithName:(struct __CFString { }*)arg1;
+ (struct __CFArray { }*)copyAllPasteboards;
+ (struct __CFString { }*)dumpAllClients;
+ (id)pasteboardStoreWithName:(struct __CFString { }*)arg1 createIfNecessary:(BOOL)arg2;

- (id)_initWithName:(const struct __CFString { }*)arg1;
- (void)_onqueue_beginGenerationWithNewOwner:(const struct __CFUUID { }*)arg1;
- (id)_onqueue_cacheForGeneration:(long long)arg1;
- (void)_onqueue_clearGenerationSpecificData;
- (void)_onqueue_handleExpirationTimer;
- (void)_onqueue_handleNewEntries:(struct __CFArray { }*)arg1 forMessage:(id)arg2 shouldInvalidateClientMetadata:(BOOL*)arg3;
- (void)_onqueue_invalidateCachesWithCurrentGeneration;
- (void)_onqueue_invalidateCurrentGenerationCacheEntries:(const struct __CFArray { }*)arg1 inResponseToMessage:(id)arg2;
- (long long)_onqueue_nextGenerationCount;
- (void)_onqueue_noteMessageSenderNeedsCacheInvalidation:(id)arg1;
- (int)analyzeSandboxExtensionEntry:(id)arg1 destinedForClient:(id)arg2;
- (void)dealloc;
- (id)description;
- (id)filterDataFromEntry:(id)arg1 inResponseToMessage:(id)arg2 error:(int*)arg3;
- (void)flushOwnerChangesIfNecessaryInResponseToMessage:(id)arg1 completionHandler:(id)arg2;
- (void)handleAllowExtensionProcess:(id)arg1;
- (void)handleBeginGeneration:(id)arg1;
- (void)handleCreate:(id)arg1;
- (void)handleDeadClientWithUUID:(struct __CFUUID { }*)arg1 allowPasteboardDeletion:(BOOL)arg2;
- (void)handleGetCounts:(id)arg1;
- (void)handleMakeGenerationLocal:(id)arg1;
- (void)handleNotifyHasEntries:(id)arg1;
- (void)handleRefreshCache:(id)arg1;
- (void)handleRegisterEntries:(id)arg1;
- (void)handleRelease:(id)arg1;
- (void)handleRequestData:(id)arg1;
- (void)handleResolvePromises:(id)arg1;
- (void)handleRestrictExtension:(id)arg1;
- (void)handleSetDataFlags:(id)arg1;
- (void)handleSetExpirationDate:(id)arg1;
- (void)handleUniquePromiseFile:(id)arg1;
- (void)performBarrier:(id)arg1;
- (id)reissueSandboxExtensionFromEntry:(id)arg1 toClient:(id)arg2 error:(int*)arg3;
- (void)requestDataForGeneration:(unsigned long long)arg1 itemIdentifier:(unsigned long long)arg2 flavor:(struct __CFString { }*)arg3 inResponseToMessage:(id)arg4 completionHandler:(id)arg5;
- (void)resolveAllPromisesOwnedByProcessWithIdentifier:(int)arg1 completionHandler:(id)arg2;

@end
