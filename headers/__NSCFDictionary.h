/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreFoundation.framework/Versions/A/CoreFoundation
 */

@interface __NSCFDictionary : NSMutableDictionary {
    unsigned int  _bits;
    void * _callbacks;
    unsigned char  _cfinfo;
    id * _keys;
    unsigned int  _rc;
    id * _values;
}

+ (id)allocWithZone:(struct _NSZone { }*)arg1;
+ (BOOL)automaticallyNotifiesObserversForKey:(id)arg1;

- (BOOL)_isDeallocating;
- (BOOL)_tryRetain;
- (Class)classForCoder;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)count;
- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x1; id *x2; unsigned long long *x3; unsigned long long x4[5]; }*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)keyEnumerator;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)objectForKey:(id)arg1;
- (oneway void)release;
- (void)removeAllObjects;
- (void)removeObjectForKey:(id)arg1;
- (id)retain;
- (unsigned long long)retainCount;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (void)setObservationInfo:(void*)arg1;

@end
