/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreFoundation.framework/Versions/A/CoreFoundation
 */

@interface NSURL : NSObject <CKXPCSuitableString, NSCopying, NSItemProviderReading, NSItemProviderWriting, NSPasteboardReading, NSPasteboardWriting, NSSecureCoding> {
    NSURL * _baseURL;
    void * _clients;
    void * _reserved;
    NSString * _urlString;
}

@property (readonly, copy) NSURL *URLByDeletingLastPathComponent;
@property (readonly, copy) NSURL *URLByDeletingPathExtension;
@property (readonly, copy) NSURL *URLByResolvingSymlinksInPath;
@property (readonly, copy) NSURL *URLByStandardizingPath;
@property (readonly, copy) NSString *absoluteString;
@property (readonly, copy) NSURL *absoluteURL;
@property (readonly, copy) NSURL *baseURL;
@property (readonly, copy) NSData *dataRepresentation;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSURL *filePathURL;
@property (readonly) const char *fileSystemRepresentation;
@property (getter=isFileURL, readonly) BOOL fileURL;
@property (readonly, copy) NSString *fragment;
@property (readonly) BOOL hasDirectoryPath;
@property (readonly) unsigned long long hash;
@property (readonly, copy) NSString *host;
@property (getter=isiWorkURL, readonly) BOOL iWorkURL;
@property (readonly, copy) NSString *lastPathComponent;
@property (setter=ls_setPreferredLocalizations:, retain) NSArray *ls_preferredLocalizations;
@property (readonly, copy) NSString *parameterString;
@property (readonly, copy) NSString *password;
@property (readonly, copy) NSString *path;
@property (readonly, copy) NSArray *pathComponents;
@property (readonly, copy) NSString *pathExtension;
@property (readonly, copy) NSNumber *port;
@property (readonly, copy) NSString *query;
@property (readonly, copy) NSString *relativePath;
@property (readonly, copy) NSString *relativeString;
@property (readonly, copy) NSString *resourceSpecifier;
@property (readonly, copy) NSString *scheme;
@property (readonly, copy) NSURL *standardizedURL;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *user;
@property (readonly, copy) NSArray *writableTypeIdentifiersForItemProvider;

// Image: /System/Library/Frameworks/CoreFoundation.framework/Versions/A/CoreFoundation

+ (id)__unurl;
+ (id)bookmarkDataWithContentsOfURL:(id)arg1 error:(id*)arg2;
+ (id)resourceValuesForKeys:(id)arg1 fromBookmarkData:(id)arg2;
+ (BOOL)supportsSecureCoding;
+ (BOOL)writeBookmarkData:(id)arg1 toURL:(id)arg2 options:(unsigned long long)arg3 error:(id*)arg4;

- (id)bookmarkDataWithOptions:(unsigned long long)arg1 includingResourceValuesForKeys:(id)arg2 relativeToURL:(id)arg3 error:(id*)arg4;
- (BOOL)checkResourceIsReachableAndReturnError:(id*)arg1;
- (id)filePathURL;
- (id)fileReferenceURL;
- (BOOL)getResourceValue:(out id*)arg1 forKey:(id)arg2 error:(out id*)arg3;
- (BOOL)isFileReferenceURL;
- (void)removeAllCachedResourceValues;
- (void)removeCachedResourceValueForKey:(id)arg1;
- (id)resourceValuesForKeys:(id)arg1 error:(id*)arg2;
- (BOOL)setResourceValue:(id)arg1 forKey:(id)arg2 error:(id*)arg3;
- (BOOL)setResourceValues:(id)arg1 error:(id*)arg2;
- (void)setTemporaryResourceValue:(id)arg1 forKey:(id)arg2;
- (BOOL)startAccessingSecurityScopedResource;
- (void)stopAccessingSecurityScopedResource;

// Image: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit

// NSURL (NSPasteboardSupport)

+ (id)URLFromPasteboard:(id)arg1;
+ (id)readableTypesForPasteboard:(id)arg1;
+ (unsigned long long)readingOptionsForType:(id)arg1 pasteboard:(id)arg2;

- (BOOL)__isAbsolute;
- (id)initWithPasteboardPropertyList:(id)arg1 ofType:(id)arg2;
- (id)pasteboardPropertyListForType:(id)arg1;
- (id)writableTypesForPasteboard:(id)arg1;
- (void)writeToPasteboard:(id)arg1;
- (unsigned long long)writingOptionsForType:(id)arg1 pasteboard:(id)arg2;

// NSURL (NSURL_NSSavePanel)

- (BOOL)_urlForNSOpenSavePanelIsMobileDocumentsURL;

// NSURL (PrivateNSPasteboardSupport)

+ (id)_URLFromPasteboardNSData:(struct __CFData { }*)arg1;
+ (id)_convertedFileReferenceURLDataOrNil:(struct __CFData { }*)arg1;
+ (id)_securityScopedURLFromPasteboard:(id)arg1;

- (id)_absoluteStringConvertingFileReferenceURLIfRequired;

// NSURL (_NSDocumentSecurityScopeHelpers)

- (void)_NSDocument_createSecurityScope;
- (id)_NSDocument_debugDescription;
- (void)_NSDocument_setHasKnownSecurityScope:(BOOL)arg1;
- (long long)_NSDocument_startAccessingKnownSecurityScopedResource;

// Image: /System/Library/Frameworks/CFNetwork.framework/Versions/A/CFNetwork

- (BOOL)_isSafeDirectoryForDownloads:(int)arg1 withToken:(struct { unsigned int x1[8]; })arg2;
- (BOOL)_isSafeFileForBackgroundUpload:(int)arg1 withToken:(struct { unsigned int x1[8]; })arg2;
- (BOOL)_isSafeFileForBackgroundUploadForMe;

// Image: /System/Library/Frameworks/CloudKit.framework/Versions/A/CloudKit

// NSURL (CKSQLiteBinding)

- (void)ck_bindInStatement:(id)arg1 atIndex:(unsigned long long)arg2;

// NSURL (CKUtilsAdditions)

- (id)CKSharingURLSubscheme;

// NSURL (CKXPCSuitableString)

- (id)CKXPCSuitableString;

// NSURL (CopiedFromCloudDocsExtensionBRCShareURL)

- (id)brc_applicationBundleID;
- (id)brc_applicationName;

// Image: /System/Library/Frameworks/CoreServices.framework/Versions/A/Frameworks/LaunchServices.framework/Versions/A/LaunchServices

// NSURL (LSPreferredLocalizations)

- (id)ls_preferredLocalizations;
- (void)ls_setPreferredLocalizations:(id)arg1;

// NSURL (LSURLOverrideAdditions)

- (BOOL)conformsToOverridePatternWithKey:(id)arg1;
- (id)fmfURL;
- (id)fmipURL;
- (id)iCloudEmailPrefsURL;
- (id)iCloudSharingURL;
- (id)iCloudSharingURL_noFragment;
- (id)iTunesStoreURL;
- (id)iWorkApplicationName;
- (id)iWorkDocumentName;
- (BOOL)isiWorkURL;
- (id)keynoteLiveURL;
- (id)keynoteLiveURL_noFragment;
- (id)mapsURL;
- (id)photosURL;

// Image: /System/Library/Frameworks/CoreServices.framework/Versions/A/Frameworks/SharedFileList.framework/Versions/A/SharedFileList

// NSURL (SFLAdditions)

- (id)__sfl__displayName;
- (BOOL)__sfl__isBootVolume;
- (BOOL)__sfl__isBrowsableVolume;
- (BOOL)__sfl__isCDVolume;
- (BOOL)__sfl__isDVDVolume;
- (BOOL)__sfl__isEjectableVolume;
- (BOOL)__sfl__isHFSStandard;
- (BOOL)__sfl__isIPodVolume;
- (BOOL)__sfl__isInternalVolume;
- (BOOL)__sfl__isLocalVolume;
- (BOOL)__sfl__isRemovableVolume;
- (BOOL)__sfl__isVolume;
- (BOOL)__sfl__isVolumeMounted;
- (id)__sfl__volumeURL;
- (BOOL)__sfl_isInTrash;
- (id)__sfl_securityScope;
- (void)__sfl_setSecurityScope:(id)arg1;

// NSURL (SFLBookmarkAdditions)

- (id)__sfl_cachedResourcePropertyForKey:(id)arg1;

// NSURL (SFLSharePointUtil)

- (id)__sfl_fileSecurity;
- (BOOL)__sfl_isWriteable;
- (BOOL)__sfl_supportsPermissions;

// Image: /System/Library/Frameworks/FileProvider.framework/Versions/A/FileProvider

// NSURL (CopyFile)

+ (void)_fp_createInTempDirectoryWithName:(id)arg1 creationBlock:(id)arg2 completion:(id)arg3;
+ (void)fp_createEmptyTempFileWithName:(id)arg1 completion:(id)arg2;
+ (void)fp_createEmptyTempPackageWithName:(id)arg1 completion:(id)arg2;

- (id)fp_copyToTempFolderWithFilename:(id)arg1 queue:(id)arg2 precomputedItemSize:(unsigned long long)arg3 completion:(id)arg4;
- (id)fp_copyToURL:(id)arg1 queue:(id)arg2 precomputedItemSize:(unsigned long long)arg3 replacePlaceholder:(BOOL)arg4 completion:(id)arg5;
- (BOOL)fp_getSize:(unsigned long long*)arg1 error:(id*)arg2;
- (BOOL)fp_removeFileProviderXattrsWithError:(id*)arg1;

// NSURL (FPAdditions)

+ (id)fp_cloudStorageDirectory;
+ (id)fp_homeDirectory;
+ (id)fp_homeDirectoryForUserID:(unsigned int)arg1;
+ (id)fp_homeDirectoryPathForUserID:(unsigned int)arg1;
+ (id)fp_supportDirectory;
+ (id)fp_tempDirectory;
+ (id)fp_uniqueTempFolderWithError:(id*)arg1;

- (id)_fp_componentsRelativeToRoot:(id)arg1;
- (BOOL)_fp_partOfAppInboxWithURLComponents:(id)arg1;
- (id)fp_addDocumentTrackingWithError:(id*)arg1;
- (BOOL)fp_associateThumbnailFromDocumentAtURL:(id)arg1 error:(id*)arg2;
- (void)fp_attachSecurityScopeFromURL:(id)arg1;
- (BOOL)fp_checkSandboxFileMetadataRead;
- (id)fp_directorySizeWithError:(id*)arg1;
- (id)fp_fpfsRootURL;
- (void)fp_hideExtension:(BOOL)arg1;
- (BOOL)fp_isAppInboxOrDescendants;
- (BOOL)fp_isFolder;
- (BOOL)fp_isInSyncableRoot;
- (BOOL)fp_isInSyncableRootFast;
- (BOOL)fp_isPackage;
- (BOOL)fp_isSymlink;
- (BOOL)fp_isSyncableRoot;
- (id)fp_issueSandboxExtensionOfClass:(const char *)arg1 report:(BOOL)arg2 error:(id*)arg3;
- (BOOL)fp_makeWritableWithError:(id*)arg1;
- (BOOL)fp_matchesAlternateContentsURL:(id)arg1;
- (BOOL)fp_matchesApplicationContainerURL:(id)arg1;
- (BOOL)fp_matchesCloudDocsURL:(id)arg1;
- (BOOL)fp_matchesFPFSURL:(id)arg1;
- (BOOL)fp_matchesFileProviderHeuristics:(unsigned int)arg1;
- (BOOL)fp_matchesFileProviderURL:(id)arg1;
- (id)fp_matchesUbiquitousHeuristics;
- (id)fp_moveToTempFolderWithFilename:(id)arg1 error:(id*)arg2;
- (id)fp_realpathURL;
- (long long)fp_relationshipToItemAtURL:(id)arg1;
- (id)fp_relativePathOf:(id)arg1;
- (id)fp_scopeDescription;
- (id)fp_shortDescription;
- (id)fp_syncableRootURL;

// NSURL (FPFSHelpers)

- (id)_fp_lookupURLOfChildWithName:(id)arg1 notMatchingFileID:(id)arg2;
- (id)_fp_scanForURLOfChildWithName:(id)arg1 notMatchingFileID:(id)arg2 maximumBounceNumber:(id*)arg3;
- (void)fp_coordinatedDeleteWithHandler:(id)arg1;
- (BOOL)fp_createSubFolder:(id)arg1 completionHandler:(id)arg2;
- (id)fp_defaultMoverBlock;
- (BOOL)fp_deleteAllowingCoodination:(BOOL)arg1 completionHandler:(id)arg2;
- (BOOL)fp_deleteWithCompletionHandler:(id)arg1;
- (id)fp_existingURLOfChildWithName:(id)arg1;
- (id)fp_existingURLOfChildWithName:(id)arg1 notMatchingFileID:(id)arg2 maximumBounceNumber:(id*)arg3 forceFetchingBounceNumber:(BOOL)arg4;
- (BOOL)fp_importUnderFolder:(id)arg1 allowCoordination:(BOOL)arg2 completionHandler:(id)arg3;
- (BOOL)fp_importUnderFolder:(id)arg1 allowCoordination:(BOOL)arg2 usingBlock:(id)arg3 completionHandler:(id)arg4;
- (BOOL)fp_importUnderFolder:(id)arg1 completionHandler:(id)arg2;
- (id)fp_isDatalessWithError:(id*)arg1;
- (BOOL)fp_moveUnderFolder:(id)arg1 withNewName:(id)arg2 allowBounce:(BOOL)arg3 allowCoordination:(BOOL)arg4 completionHandler:(id)arg5;
- (BOOL)fp_moveUnderFolder:(id)arg1 withNewName:(id)arg2 allowBounce:(BOOL)arg3 allowCoordination:(BOOL)arg4 moveHandler:(id)arg5 completionHandler:(id)arg6;
- (BOOL)fp_moveUnderFolder:(id)arg1 withNewName:(id)arg2 coordinationOptions:(unsigned long long)arg3 allowBounce:(BOOL)arg4 allowCoordination:(BOOL)arg5 completionHandler:(id)arg6;
- (BOOL)fp_moveUnderFolder:(id)arg1 withNewName:(id)arg2 coordinationOptions:(unsigned long long)arg3 allowBounce:(BOOL)arg4 allowCoordination:(BOOL)arg5 moveHandler:(id)arg6 completionHandler:(id)arg7;
- (id)fp_physicalURL;
- (BOOL)fp_renameWithNewName:(id)arg1 allowCoordination:(BOOL)arg2 completionHandler:(id)arg3;
- (BOOL)fp_renameWithNewName:(id)arg1 completionHandler:(id)arg2;
- (BOOL)fp_reparentUnderFolder:(id)arg1 allowBouncing:(BOOL)arg2 allowCoordination:(BOOL)arg3 completionHandler:(id)arg4;
- (BOOL)fp_reparentUnderFolder:(id)arg1 allowBouncing:(BOOL)arg2 completionHandler:(id)arg3;
- (BOOL)fp_reparentUnderFolder:(id)arg1 allowCoordination:(BOOL)arg2 completionHandler:(id)arg3;
- (BOOL)fp_reparentUnderFolder:(id)arg1 withNewName:(id)arg2 allowCoordination:(BOOL)arg3 completionHandler:(id)arg4;
- (BOOL)fp_reparentUnderFolder:(id)arg1 withNewName:(id)arg2 completionHandler:(id)arg3;
- (BOOL)fp_trashUnderFolder:(id)arg1 allowCoordination:(BOOL)arg2 completionHandler:(id)arg3;
- (id)fp_withReadWriteAccess:(id)arg1;

// Image: /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation

// NSURL (NSItemProvider)

+ (id)objectWithItemProviderData:(id)arg1 typeIdentifier:(id)arg2 error:(id*)arg3;
+ (id)readableTypeIdentifiersForItemProvider;
+ (id)writableTypeIdentifiersForItemProvider;

- (id)_URLArchive;
- (id)loadDataWithTypeIdentifier:(id)arg1 forItemProviderCompletionHandler:(id)arg2;
- (id)writableTypeIdentifiersForItemProvider;

// NSURL (NSKeyValueObservingCustomization)

+ (BOOL)automaticallyNotifiesObserversForKey:(id)arg1;

// NSURL (NSScriptAppleEventConversion)

+ (id)_scriptingFileWithDescriptor:(id)arg1;

- (int)_scriptingAlternativeValueRankWithDescriptor:(id)arg1;
- (id)_scriptingFileDescriptor;

// NSURL (NSURL)

+ (id)URLByResolvingAliasFileAtURL:(id)arg1 options:(unsigned long long)arg2 error:(id*)arg3;
+ (id)URLByResolvingBookmarkData:(id)arg1 options:(unsigned long long)arg2 relativeToURL:(id)arg3 bookmarkDataIsStale:(BOOL*)arg4 error:(id*)arg5;
+ (id)URLWithDataRepresentation:(id)arg1 relativeToURL:(id)arg2;
+ (id)URLWithString:(id)arg1;
+ (id)URLWithString:(id)arg1 relativeToURL:(id)arg2;
+ (id)absoluteURLWithDataRepresentation:(id)arg1 relativeToURL:(id)arg2;
+ (id)allocWithZone:(struct _NSZone { }*)arg1;
+ (id)fileURLWithFileSystemRepresentation:(const char *)arg1 isDirectory:(BOOL)arg2 relativeToURL:(id)arg3;
+ (id)fileURLWithPath:(id)arg1;
+ (id)fileURLWithPath:(id)arg1 isDirectory:(BOOL)arg2;
+ (id)fileURLWithPath:(id)arg1 isDirectory:(BOOL)arg2 relativeToURL:(id)arg3;
+ (id)fileURLWithPath:(id)arg1 relativeToURL:(id)arg2;

- (void)URLHandle:(id)arg1 resourceDataDidBecomeAvailable:(id)arg2;
- (void)URLHandle:(id)arg1 resourceDidFailLoadingWithReason:(id)arg2;
- (void)URLHandleResourceDidBeginLoading:(id)arg1;
- (void)URLHandleResourceDidCancelLoading:(id)arg1;
- (void)URLHandleResourceDidFinishLoading:(id)arg1;
- (id)URLHandleUsingCache:(BOOL)arg1;
- (unsigned long long)_cfTypeID;
- (struct __CFURL { }*)_cfurl;
- (struct __CFDictionary { }*)_clientsCreatingIfNecessary:(BOOL)arg1;
- (void)_freeClients;
- (BOOL)_isAbsolute;
- (BOOL)_isDeallocating;
- (BOOL)_tryRetain;
- (id)absoluteString;
- (id)absoluteURL;
- (id)baseURL;
- (void)connection:(id)arg1 didFailWithError:(id)arg2;
- (void)connection:(id)arg1 didReceiveData:(id)arg2;
- (void)connectionDidFinishLoading:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dataRepresentation;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (const char *)fileSystemRepresentation;
- (id)fragment;
- (BOOL)getFileSystemRepresentation:(char *)arg1 maxLength:(unsigned long long)arg2;
- (BOOL)hasDirectoryPath;
- (unsigned long long)hash;
- (id)host;
- (id)init;
- (id)initAbsoluteURLWithDataRepresentation:(id)arg1 relativeToURL:(id)arg2;
- (id)initByResolvingAliasFileAtURL:(id)arg1 options:(unsigned long long)arg2 error:(id*)arg3;
- (id)initByResolvingBookmarkData:(id)arg1 options:(unsigned long long)arg2 relativeToURL:(id)arg3 bookmarkDataIsStale:(BOOL*)arg4 error:(id*)arg5;
- (id)initFileURLWithFileSystemRepresentation:(const char *)arg1 isDirectory:(BOOL)arg2 relativeToURL:(id)arg3;
- (id)initFileURLWithPath:(id)arg1;
- (id)initFileURLWithPath:(id)arg1 isDirectory:(BOOL)arg2;
- (id)initFileURLWithPath:(id)arg1 isDirectory:(BOOL)arg2 relativeToURL:(id)arg3;
- (id)initFileURLWithPath:(id)arg1 relativeToURL:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithDataRepresentation:(id)arg1 relativeToURL:(id)arg2;
- (id)initWithScheme:(id)arg1 host:(id)arg2 path:(id)arg3;
- (id)initWithString:(id)arg1;
- (id)initWithString:(id)arg1 relativeToURL:(id)arg2;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isFileURL;
- (BOOL)isKindOfClass:(Class)arg1;
- (BOOL)isMemberOfClass:(Class)arg1;
- (void)loadResourceDataNotifyingClient:(id)arg1 usingCache:(BOOL)arg2;
- (id)parameterString;
- (id)password;
- (id)path;
- (id)port;
- (id)propertyForKey:(id)arg1;
- (id)query;
- (id)relativePath;
- (id)relativeString;
- (oneway void)release;
- (id)resourceDataUsingCache:(BOOL)arg1;
- (id)resourceSpecifier;
- (id)retain;
- (unsigned long long)retainCount;
- (id)scheme;
- (BOOL)setProperty:(id)arg1 forKey:(id)arg2;
- (BOOL)setResourceData:(id)arg1;
- (id)standardizedURL;
- (id)user;

// NSURL (NSURLExtras)

+ (id)_web_URLWithComponents:(struct { id x1; id x2; id x3; id x4; long long x5; id x6; id x7; id x8; })arg1;
+ (id)_web_URLWithString:(id)arg1 relativeToURL:(id)arg2;

- (struct { id x1; id x2; id x3; id x4; long long x5; id x6; id x7; id x8; })_web_URLComponents;
- (BOOL)_web_isJavaScriptURL;
- (id)_web_scriptIfJavaScriptURL;
- (id)_web_suggestedFilenameWithMIMEType:(id)arg1;

// NSURL (NSURLExtrasInternal)

+ (id)_URLWithData:(id)arg1 relativeToURL:(id)arg2;
+ (id)_URLWithDataAsString:(id)arg1 relativeToURL:(id)arg2;

- (id)_URLByEscapingSpacesAndControlChars;
- (id)_hostString;
- (id)_web_URLByRemovingLastPathComponent_nowarn;
- (id)_web_URLByRemovingUserAndPath_nowarn;
- (id)_web_URLByRemovingUserAndQueryAndFragment_nowarn;

// NSURL (NSURLPathUtilities)

+ (id)fileURLWithPathComponents:(id)arg1;

- (id)URLByAppendingPathComponent:(id)arg1;
- (id)URLByAppendingPathComponent:(id)arg1 isDirectory:(BOOL)arg2;
- (id)URLByAppendingPathExtension:(id)arg1;
- (id)URLByDeletingLastPathComponent;
- (id)URLByDeletingPathExtension;
- (id)URLByResolvingSymlinksInPath;
- (id)URLByStandardizingPath;
- (id)lastPathComponent;
- (id)pathComponents;
- (id)pathExtension;

// NSURL (NSURLPrivate)

+ (id)_fileURLWithPath:(id)arg1 cachingResourceValuesForKeys:(id)arg2 error:(id*)arg3;

- (id)_initFileURLWithPath:(id)arg1 cachingResourceValuesForKeys:(id)arg2 error:(id*)arg3;

// NSURL (NSURLPromisedItems)

- (id)_fixedUpSideFaultError:(id)arg1;
- (void)_performWithPhysicalURL:(id)arg1;
- (long long)_promiseExtensionConsume;
- (void)_promiseExtensionRelease:(long long)arg1;
- (id)_valueFromFaultDictionary:(id)arg1 forKey:(id)arg2;
- (BOOL)checkPromisedItemIsReachableAndReturnError:(id*)arg1;
- (BOOL)getPromisedItemResourceValue:(out id*)arg1 forKey:(id)arg2 error:(out id*)arg3;
- (id)promisedItemResourceValuesForKeys:(id)arg1 error:(id*)arg2;

// Image: /System/Library/Frameworks/QuartzCore.framework/Versions/A/QuartzCore

// NSURL (CAMLWriter)

- (id)CAMLType;
- (void)encodeWithCAMLWriter:(id)arg1;

// Image: /System/Library/Frameworks/UniformTypeIdentifiers.framework/Versions/A/UniformTypeIdentifiers

// NSURL (UTAdditions)

- (id)URLByAppendingPathComponent:(id)arg1 conformingToType:(id)arg2;
- (id)URLByAppendingPathExtensionForType:(id)arg1;

// Image: /System/Library/PrivateFrameworks/AppContainer.framework/Versions/A/AppContainer

// NSURL (ASBContainer)

- (BOOL)isInContainer:(id)arg1;

// Image: /System/Library/PrivateFrameworks/BackgroundTaskManagement.framework/Versions/A/BackgroundTaskManagement

// NSURL (BTMAdditions)

- (id)__btm_innerAppURL;
- (BOOL)__btm_isApplication;
- (BOOL)__btm_isBundle;
- (BOOL)__btm_isInTrash;
- (id)__btm_localizedName;
- (id)__btm_outerAppURL;

// Image: /System/Library/PrivateFrameworks/GenerationalStorage.framework/Versions/A/GenerationalStorage

// NSURL (GSAdditions)

- (void)gs_chmod:(unsigned short)arg1;

// NSURL (GSExtensions)

- (id)gs_URLByUpdatingPathExtensionWithPathOrURL:(id)arg1;
- (id)gs_issueExtension:(const char *)arg1 error:(id*)arg2;
- (id)gs_issueReadExtensionIfNeededForAuditToken:(struct { unsigned int x1[8]; })arg1;

// Image: /System/Library/PrivateFrameworks/GeoServices.framework/Versions/A/GeoServices

// NSURL (GEOExtras)

+ (id)_geo_URLWithString:(id)arg1 tokenSubstitutions:(id)arg2;

// Image: /System/Library/PrivateFrameworks/HelpData.framework/Versions/A/HelpData

// NSURL (Additions)

- (id)queryValueForKey:(id)arg1;

// Image: /System/Library/PrivateFrameworks/IMFoundation.framework/Versions/A/IMFoundation

- (id)__imURLByAppendingQueryString:(id)arg1;

// Image: /System/Library/PrivateFrameworks/IconFoundation.framework/Versions/A/IconFoundation

// NSURL (IconFoundationAdditions)

- (id)_IF_attributeModifiedDate;
- (id)_IF_contentModifiedDate;
- (id)_IF_extendedAttributeForName:(id)arg1;
- (BOOL)_IF_getFolderInfo:(inout struct FolderInfo { struct Rect { short x_1_1_1; short x_1_1_2; short x_1_1_3; short x_1_1_4; } x1; unsigned short x2; struct Point { short x_3_1_1; short x_3_1_2; } x3; unsigned short x4; }*)arg1 extendedFolderInfo:(inout struct ExtendedFolderInfo { struct Point { short x_1_1_1; short x_1_1_2; } x1; int x2; unsigned short x3; short x4; int x5; }*)arg2;
- (BOOL)_IF_isDirectory;
- (id)_IF_modifiedDate;
- (BOOL)_IF_setExtendedAttribute:(id)arg1 forName:(id)arg2 error:(id*)arg3;
- (BOOL)_IF_setFolderInfo:(struct FolderInfo { struct Rect { short x_1_1_1; short x_1_1_2; short x_1_1_3; short x_1_1_4; } x1; unsigned short x2; struct Point { short x_3_1_1; short x_3_1_2; } x3; unsigned short x4; }*)arg1 extendedFolderInfo:(struct ExtendedFolderInfo { struct Point { short x_1_1_1; short x_1_1_2; } x1; int x2; unsigned short x3; short x4; int x5; }*)arg2;

// Image: /System/Library/PrivateFrameworks/IconServices.framework/Versions/A/IconServices

// NSURL (DataContainerIconAdditions)

- (id)_IS_dataContainerIconDecoration;
- (id)_IS_dataContainerIconResource;
- (BOOL)_IS_isDataContainer;

// NSURL (IconServicesInternalAdditions)

+ (BOOL)__is__isNetBoot;
+ (unsigned int)__is__volumeTypeCodeFromURLProperties:(id)arg1;
+ (id)_is_unregisteredPersonlityFileExtensions;
+ (id)_is_urlResourceKeys;

- (unsigned int)__is__volumeTypeCode;
- (id)__is_canonicalURL;
- (unsigned int)__is_packageTypeCode;
- (id)__is_resourceValuesForKeys:(id)arg1 error:(id*)arg2;

// NSURL (UTIAdditions)

+ (id)__is_coreTypesURL;

- (BOOL)__has_ResourceFork;
- (BOOL)__is__conformsToUTI:(id)arg1;
- (long long)__is__fileSize;
- (BOOL)__is__getFSRef:(struct FSRef { unsigned char x1[80]; }*)arg1;
- (BOOL)__is__isAliasFile;
- (BOOL)__is__isDirectory;
- (BOOL)__is__isPackage;
- (BOOL)__is__isSymLink;
- (BOOL)__is__isVolume;
- (unsigned char)__is_accessFlags;
- (BOOL)__is_fileExists;
- (BOOL)__is_hasFileExtension:(id)arg1;
- (BOOL)__is_isAppExtension;
- (BOOL)__is_isApplication;
- (BOOL)__is_isBootVolume;
- (BOOL)__is_isBundleWithUnregisteredPersonality;
- (BOOL)__is_isOnBootVolume;
- (BOOL)__is_locked;
- (unsigned int)__is_readOSType;
- (id)__is_typeIdentifier;
- (id)__is_volumeURL;

@end
