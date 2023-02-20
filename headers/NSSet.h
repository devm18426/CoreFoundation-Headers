/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreFoundation.framework/Versions/A/CoreFoundation
 */

@interface NSSet : NSObject <NSCopying, NSFastEnumeration, NSMutableCopying, NSSecureCoding>

@property (readonly) unsigned long long count;

// Image: /System/Library/Frameworks/CoreFoundation.framework/Versions/A/CoreFoundation

+ (id)allocWithZone:(struct _NSZone { }*)arg1;
+ (id)newSetWithObjects:(const id*)arg1 count:(unsigned long long)arg2;
+ (id)set;
+ (id)setWithArray:(id)arg1;
+ (id)setWithArray:(id)arg1 copyItems:(BOOL)arg2;
+ (id)setWithArray:(id)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
+ (id)setWithArray:(id)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 copyItems:(BOOL)arg3;
+ (id)setWithObject:(id)arg1;
+ (id)setWithObjects:(id)arg1;
+ (id)setWithObjects:(const id*)arg1 count:(unsigned long long)arg2;
+ (id)setWithOrderedSet:(id)arg1;
+ (id)setWithOrderedSet:(id)arg1 copyItems:(BOOL)arg2;
+ (id)setWithOrderedSet:(id)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
+ (id)setWithOrderedSet:(id)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 copyItems:(BOOL)arg3;
+ (id)setWithSet:(id)arg1;
+ (id)setWithSet:(id)arg1 copyItems:(BOOL)arg2;
+ (BOOL)supportsSecureCoding;

- (void)__applyValues:(int (*)arg1 context:(void*)arg2;
- (BOOL)__getValue:(id*)arg1 forObj:(id)arg2;
- (unsigned long long)_cfTypeID;
- (id)allObjects;
- (id)anyObject;
- (BOOL)containsObject:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)count;
- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x1; id *x2; unsigned long long *x3; unsigned long long x4[5]; }*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3;
- (unsigned long long)countForObject:(id)arg1;
- (id)description;
- (id)descriptionWithLocale:(id)arg1;
- (id)descriptionWithLocale:(id)arg1 indent:(unsigned long long)arg2;
- (void)encodeWithCoder:(id)arg1;
- (void)enumerateObjectsUsingBlock:(id)arg1;
- (void)enumerateObjectsWithOptions:(unsigned long long)arg1 usingBlock:(id)arg2;
- (void)getObjects:(id*)arg1;
- (void)getObjects:(id*)arg1 count:(unsigned long long)arg2;
- (void)getObjects:(id*)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (unsigned long long)hash;
- (id)initWithArray:(id)arg1;
- (id)initWithArray:(id)arg1 copyItems:(BOOL)arg2;
- (id)initWithArray:(id)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (id)initWithArray:(id)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 copyItems:(BOOL)arg3;
- (id)initWithCoder:(id)arg1;
- (id)initWithObject:(id)arg1;
- (id)initWithObjects:(id)arg1;
- (id)initWithObjects:(const id*)arg1 count:(unsigned long long)arg2;
- (id)initWithOrderedSet:(id)arg1;
- (id)initWithOrderedSet:(id)arg1 copyItems:(BOOL)arg2;
- (id)initWithOrderedSet:(id)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (id)initWithOrderedSet:(id)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 copyItems:(BOOL)arg3;
- (id)initWithSet:(id)arg1;
- (id)initWithSet:(id)arg1 copyItems:(BOOL)arg2;
- (BOOL)intersectsOrderedSet:(id)arg1;
- (BOOL)intersectsSet:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToSet:(id)arg1;
- (BOOL)isNSSet__;
- (BOOL)isSubsetOfOrderedSet:(id)arg1;
- (BOOL)isSubsetOfSet:(id)arg1;
- (void)makeObjectsPerformSelector:(SEL)arg1;
- (void)makeObjectsPerformSelector:(SEL)arg1 withObject:(id)arg2;
- (id)member:(id)arg1;
- (id)members:(id)arg1 notFoundMarker:(id)arg2;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)objectEnumerator;
- (id)objectPassingTest:(id)arg1;
- (id)objectWithOptions:(unsigned long long)arg1 passingTest:(id)arg2;
- (id)objectsPassingTest:(id)arg1;
- (id)objectsWithOptions:(unsigned long long)arg1 passingTest:(id)arg2;
- (id)setByAddingObject:(id)arg1;
- (id)setByAddingObjectsFromArray:(id)arg1;
- (id)setByAddingObjectsFromSet:(id)arg1;
- (id)sortedArrayUsingComparator:(id)arg1;
- (id)sortedArrayWithOptions:(unsigned long long)arg1 usingComparator:(id)arg2;

// Image: /System/Library/Frameworks/Accounts.framework/Versions/A/Accounts

// NSSet (ACTrackingSet)

+ (id)setWithTrackedSet:(id)arg1;

- (id)initWithTrackedSet:(id)arg1;

// NSSet (Accounts)

- (id)ac_map:(id)arg1;
- (id)ac_mapNullable:(id)arg1;

// Image: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit

// NSSet (NSCollectionViewAdditions)

+ (id)setWithCollectionViewIndexPath:(id)arg1;
+ (id)setWithCollectionViewIndexPaths:(id)arg1;

- (void)enumerateIndexPathsWithOptions:(unsigned long long)arg1 usingBlock:(id)arg2;

// Image: /System/Library/Frameworks/CloudKit.framework/Versions/A/CloudKit

// NSSet (CKContainerAssignment)

- (void)CKAssignToContainerWithID:(id)arg1;

// Image: /System/Library/Frameworks/CoreWLAN.framework/Versions/A/CoreWLAN

// NSSet (CWChannel)

- (id)channelsWithChannelProperties:(unsigned long long)arg1;

// NSSet (CWNetwork)

- (id)ibssNetworks;
- (id)infrastructureNetworks;
- (id)mergedNetworks;
- (id)networksWithChannels:(id)arg1;
- (id)networksWithNoiseMinimum:(long long)arg1 maximum:(long long)arg2;
- (id)networksWithPHYMode:(unsigned long long)arg1;
- (id)networksWithRSSIMinimum:(long long)arg1 maximum:(long long)arg2;
- (id)networksWithSSID:(id)arg1;
- (id)networksWithSecurityType:(unsigned long long)arg1;

// Image: /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation

// NSSet (NSKeyValueCoding)

- (id)_avgForKeyPath:(id)arg1;
- (id)_countForKeyPath:(id)arg1;
- (id)_distinctUnionOfArraysForKeyPath:(id)arg1;
- (id)_distinctUnionOfObjectsForKeyPath:(id)arg1;
- (id)_distinctUnionOfSetsForKeyPath:(id)arg1;
- (id)_maxForKeyPath:(id)arg1;
- (id)_minForKeyPath:(id)arg1;
- (id)_sumForKeyPath:(id)arg1;
- (void)setValue:(id)arg1 forKey:(id)arg2;
- (id)valueForKey:(id)arg1;
- (id)valueForKeyPath:(id)arg1;

// NSSet (NSKeyValueObserverRegistration)

- (void)addObserver:(id)arg1 forKeyPath:(id)arg2 options:(unsigned long long)arg3 context:(void*)arg4;
- (void)removeObserver:(id)arg1 forKeyPath:(id)arg2;
- (void)removeObserver:(id)arg1 forKeyPath:(id)arg2 context:(void*)arg3;

// NSSet (NSKeyValueSorting)

- (id)sortedArrayUsingDescriptors:(id)arg1;

// NSSet (NSPredicateSupport)

- (id)filteredSetUsingPredicate:(id)arg1;

// NSSet (NSSet)

+ (BOOL)supportsSecureCoding;

- (Class)classForCoder;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

// NSSet (NSSetPortCoding)

- (id)replacementObjectForPortCoder:(id)arg1;

// Image: /System/Library/Frameworks/QuartzCore.framework/Versions/A/QuartzCore

// NSSet (CAMLWriter)

- (id)CAMLType;
- (void)encodeWithCAMLWriter:(id)arg1;

// Image: /System/Library/PrivateFrameworks/AXCoreUtilities.framework/Versions/A/AXCoreUtilities

// NSSet (AXExtras)

- (id)ax_filteredSetUsingBlock:(id)arg1;
- (id)ax_flatMappedSetUsingBlock:(id)arg1;
- (id)ax_mappedSetUsingBlock:(id)arg1;

// Image: /System/Library/PrivateFrameworks/AccessibilitySharedSupport.framework/Versions/A/AccessibilitySharedSupport

// NSSet (AXSSDatabaseManager)

- (id)ax_makeObjectsRespondToSelector:(SEL)arg1;

// Image: /System/Library/PrivateFrameworks/BaseBoard.framework/Versions/A/BaseBoard

// NSSet (BaseBoard)

- (id)bs_compactMap:(id)arg1;
- (BOOL)bs_containsObjectPassingTest:(id)arg1;
- (void)bs_each:(id)arg1;
- (id)bs_filter:(id)arg1;
- (id)bs_firstObjectPassingTest:(id)arg1;
- (id)bs_map:(id)arg1;
- (id)bs_reduce:(id)arg1 block:(id)arg2;

// Image: /System/Library/PrivateFrameworks/IMFoundation.framework/Versions/A/IMFoundation

- (id)__imDeepCopy;
- (void)__imForEach:(id)arg1;
- (id)__imSetByApplyingBlock:(id)arg1;

@end
