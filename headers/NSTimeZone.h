/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreFoundation.framework/Versions/A/CoreFoundation
 */

@interface NSTimeZone : NSObject <NSCopying, NSSecureCoding>

@property (readonly, copy) NSData *data;
@property (readonly, copy) NSString *name;

// Image: /System/Library/Frameworks/CoreFoundation.framework/Versions/A/CoreFoundation

+ (id)abbreviationDictionary;
+ (id)allocWithZone:(struct _NSZone { }*)arg1;
+ (id)defaultTimeZone;
+ (id)knownTimeZoneNames;
+ (id)localTimeZone;
+ (void)resetSystemTimeZone;
+ (void)setAbbreviationDictionary:(id)arg1;
+ (void)setDefaultTimeZone:(id)arg1;
+ (BOOL)supportsSecureCoding;
+ (id)systemTimeZone;
+ (id)timeZoneDataVersion;
+ (id)timeZoneForSecondsFromGMT:(long long)arg1;
+ (id)timeZoneWithAbbreviation:(id)arg1;
+ (id)timeZoneWithName:(id)arg1;
+ (id)timeZoneWithName:(id)arg1 data:(id)arg2;

- (unsigned long long)_cfTypeID;
- (id)abbreviation;
- (id)abbreviationForDate:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)data;
- (double)daylightSavingTimeOffset;
- (double)daylightSavingTimeOffsetForDate:(id)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithName:(id)arg1;
- (id)initWithName:(id)arg1 data:(id)arg2;
- (BOOL)isDaylightSavingTime;
- (BOOL)isDaylightSavingTimeForDate:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToTimeZone:(id)arg1;
- (BOOL)isNSTimeZone__;
- (id)localizedName:(long long)arg1 locale:(id)arg2;
- (id)name;
- (id)nextDaylightSavingTimeTransition;
- (id)nextDaylightSavingTimeTransitionAfterDate:(id)arg1;
- (long long)secondsFromGMT;
- (long long)secondsFromGMTForDate:(id)arg1;

// Image: /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation

// NSTimeZone (NSTimeZone)

+ (BOOL)supportsSecureCoding;

- (Class)classForCoder;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

// NSTimeZone (NSTimeZonePortCoding)

- (id)replacementObjectForPortCoder:(id)arg1;

@end
