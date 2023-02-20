/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreFoundation.framework/Versions/A/CoreFoundation
 */

@interface _CFGeneralPasteboardStore : _CFPasteboardStore <NSXPCListenerDelegate, UAPasteboardClientProtocol> {
    long long  _localOnlyGeneration;
    _CFRemotePasteboardCache * _remotePasteboardCache;
    NSObject<OS_dispatch_queue> * _remotePasteboardNotificationQueue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)generalPasteboard;

- (id)_initWithName:(struct __CFString { }*)arg1;
- (id)_onqueue_cacheForGeneration:(long long)arg1;
- (void)_onqueue_handleNewEntries:(struct __CFArray { }*)arg1 forMessage:(id)arg2 shouldInvalidateClientMetadata:(BOOL*)arg3;
- (long long)_onqueue_nextGenerationCount;
- (void)_onqueue_notifyRemoteGenerationBecameAvailable:(unsigned char)arg1;
- (void)dealloc;
- (void)handleMakeGenerationLocal:(id)arg1;
- (BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (void)notifyRemoteGenerationBecameAvailable:(unsigned char)arg1;
- (void)pasteboardWillBeFetched:(id)arg1;
- (void)remotePasteboardAvailable:(BOOL)arg1;

@end
