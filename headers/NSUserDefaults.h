/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreFoundation.framework/Versions/A/CoreFoundation
 */

@interface NSUserDefaults : NSObject {
    struct __CFString { } * _container_;
    struct __CFString { } * _identifier_;
    id  _kvo_;
    void * _reserved;
}

// Image: /System/Library/Frameworks/CoreFoundation.framework/Versions/A/CoreFoundation

- (struct __CFString { }*)_container;
- (struct __CFString { }*)_identifier;
- (BOOL)_observingCFPreferences;
- (void)_setContainer:(struct __CFURL { }*)arg1;
- (void)_setIdentifier:(struct __CFString { }*)arg1;

// Image: /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation

// NSUserDefaults (NSKeyValueCoding)

- (void)setValue:(id)arg1 forKey:(id)arg2;
- (id)valueForKey:(id)arg1;

// NSUserDefaults (NSUserDefaults)

+ (id)_copyStandardUserDefaultsIfPresent;
+ (void)resetStandardUserDefaults;
+ (void)setStandardUserDefaults:(id)arg1;
+ (id)standardUserDefaults;

- (id)URLForKey:(id)arg1;
- (void)_didEndKeyValueObserving;
- (id)_initWithSuiteName:(id)arg1 container:(id)arg2;
- (void)_willBeginKeyValueObserving;
- (void)addSuiteNamed:(id)arg1;
- (id)arrayForKey:(id)arg1;
- (BOOL)boolForKey:(id)arg1;
- (id)dataForKey:(id)arg1;
- (void)dealloc;
- (id)dictionaryForKey:(id)arg1;
- (id)dictionaryRepresentation;
- (double)doubleForKey:(id)arg1;
- (void)finalize;
- (float)floatForKey:(id)arg1;
- (id)init;
- (id)initWithSuiteName:(id)arg1;
- (id)initWithUser:(id)arg1;
- (long long)integerForKey:(id)arg1;
- (long long)longForKey:(id)arg1;
- (id)objectForKey:(id)arg1;
- (id)objectForKey:(id)arg1 inDomain:(id)arg2;
- (BOOL)objectIsForcedForKey:(id)arg1;
- (BOOL)objectIsForcedForKey:(id)arg1 inDomain:(id)arg2;
- (id)persistentDomainForName:(id)arg1;
- (id)persistentDomainNames;
- (void)registerDefaults:(id)arg1;
- (void)removeObjectForKey:(id)arg1;
- (void)removeObjectForKey:(id)arg1 inDomain:(id)arg2;
- (void)removePersistentDomainForName:(id)arg1;
- (void)removeSuiteNamed:(id)arg1;
- (void)removeVolatileDomainForName:(id)arg1;
- (id)searchList;
- (void)setBool:(BOOL)arg1 forKey:(id)arg2;
- (void)setDouble:(double)arg1 forKey:(id)arg2;
- (void)setFloat:(float)arg1 forKey:(id)arg2;
- (void)setInteger:(long long)arg1 forKey:(id)arg2;
- (void)setLong:(long long)arg1 forKey:(id)arg2;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (void)setObject:(id)arg1 forKey:(id)arg2 inDomain:(id)arg3;
- (void)setPersistentDomain:(id)arg1 forName:(id)arg2;
- (void)setSearchList:(id)arg1;
- (void)setURL:(id)arg1 forKey:(id)arg2;
- (void)setVolatileDomain:(id)arg1 forName:(id)arg2;
- (id)stringArrayForKey:(id)arg1;
- (id)stringForKey:(id)arg1;
- (BOOL)synchronize;
- (id)volatileDomainForName:(id)arg1;
- (id)volatileDomainNames;

// NSUserDefaults (NSUserDefaults_NSURLExtras)

+ (void)_ensureAndLockPreferredLanguageLock;
+ (void)_web_addDefaultsChangeObserver;
+ (void)_web_defaultsDidChange;
+ (id)_web_preferredLanguageCode;

// Image: /System/Library/PrivateFrameworks/BaseBoard.framework/Versions/A/BaseBoard

// NSUserDefaults (SBDefaultExistance)

- (BOOL)bs_defaultExists:(id)arg1;

// NSUserDefaults (SBDefaultExistanceHelpers)

- (void)bs_setDomain:(id)arg1;

// Image: /System/Library/PrivateFrameworks/C2.framework/Versions/A/C2

// NSUserDefaults (C2Defaults)

+ (id)c2DefaultsDomain;

// Image: /System/Library/PrivateFrameworks/CoreUtils.framework/Versions/A/CoreUtils

// NSUserDefaults (BoxingUtils)

- (BOOL)boolValueSafeForKey:(id)arg1;
- (BOOL)boolValueSafeForKey:(id)arg1 status:(int*)arg2;
- (double)doubleValueSafeForKey:(id)arg1;
- (double)doubleValueSafeForKey:(id)arg1 status:(int*)arg2;
- (long long)int64ValueSafeForKey:(id)arg1;
- (long long)int64ValueSafeForKey:(id)arg1 status:(int*)arg2;
- (id)stringValueSafeForKey:(id)arg1;
- (id)stringValueSafeForKey:(id)arg1 status:(int*)arg2;
- (const char *)utf8ValueSafeForKey:(id)arg1;
- (const char *)utf8ValueSafeForKey:(id)arg1 status:(int*)arg2;

// Image: /System/Library/PrivateFrameworks/IMFoundation.framework/Versions/A/IMFoundation

+ (id)_IMAgentObjectForKey:(id)arg1;
+ (id)_IMAppObjectForKey:(id)arg1;
+ (id)_IMObjectForKey:(id)arg1 inDomain:(id)arg2;
+ (void)_IMSetObject:(id)arg1 forKey:(id)arg2 inDomain:(id)arg3;

// Image: /System/Library/PrivateFrameworks/ViewBridge.framework/Versions/A/ViewBridge

// NSUserDefaults (ViewBridge)

- (void)_setOneArgument:(id)arg1 forKey:(id)arg2;

@end