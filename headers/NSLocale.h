/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreFoundation.framework/Versions/A/CoreFoundation
 */

@interface NSLocale : NSObject <NSCopying, NSSecureCoding>

@property (readonly) long long _calendarDirection;
@property (readonly, copy) NSArray *availableNumberingSystems;
@property (readonly) NSString *languageIdentifier;
@property (readonly, copy) NSString *numberingSystem;

// Image: /System/Library/Frameworks/CoreFoundation.framework/Versions/A/CoreFoundation

+ (id)ISOCountryCodes;
+ (id)ISOCurrencyCodes;
+ (id)ISOLanguageCodes;
+ (id)allocWithZone:(struct _NSZone { }*)arg1;
+ (id)availableLocaleIdentifiers;
+ (id)canonicalLanguageIdentifierFromString:(id)arg1;
+ (id)canonicalLocaleIdentifierFromString:(id)arg1;
+ (unsigned long long)characterDirectionForLanguage:(id)arg1;
+ (id)commonISOCurrencyCodes;
+ (id)componentsFromLocaleIdentifier:(id)arg1;
+ (id)currentLocale;
+ (id)internetServicesRegion;
+ (unsigned long long)lineDirectionForLanguage:(id)arg1;
+ (id)localeIdentifierFromComponents:(id)arg1;
+ (id)localeIdentifierFromWindowsLocaleCode:(unsigned int)arg1;
+ (id)localeWithLocaleIdentifier:(id)arg1;
+ (id)preferredLanguages;
+ (BOOL)supportsSecureCoding;
+ (id)systemLocale;
+ (unsigned int)windowsLocaleCodeFromLocaleIdentifier:(id)arg1;

- (unsigned long long)_cfTypeID;
- (id)_copyDisplayNameForKey:(id)arg1 value:(id)arg2;
- (unsigned char)_nullLocale;
- (id)_prefs;
- (void)_setNullLocale;
- (id)alternateQuotationBeginDelimiter;
- (id)alternateQuotationEndDelimiter;
- (id)calendarIdentifier;
- (id)collationIdentifier;
- (id)collatorIdentifier;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)countryCode;
- (id)currencyCode;
- (id)currencySymbol;
- (id)decimalSeparator;
- (id)displayNameForKey:(id)arg1 value:(id)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)exemplarCharacterSet;
- (id)groupingSeparator;
- (unsigned long long)hash;
- (id)identifier;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithLocaleIdentifier:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)languageCode;
- (id)localeIdentifier;
- (id)localizedStringForAlternateQuotationBeginDelimiter:(id)arg1;
- (id)localizedStringForAlternateQuotationEndDelimiter:(id)arg1;
- (id)localizedStringForCalendarIdentifier:(id)arg1;
- (id)localizedStringForCollationIdentifier:(id)arg1;
- (id)localizedStringForCollatorIdentifier:(id)arg1;
- (id)localizedStringForCountryCode:(id)arg1;
- (id)localizedStringForCurrencyCode:(id)arg1;
- (id)localizedStringForCurrencySymbol:(id)arg1;
- (id)localizedStringForDecimalSeparator:(id)arg1;
- (id)localizedStringForGroupingSeparator:(id)arg1;
- (id)localizedStringForLanguageCode:(id)arg1;
- (id)localizedStringForLocaleIdentifier:(id)arg1;
- (id)localizedStringForQuotationBeginDelimiter:(id)arg1;
- (id)localizedStringForQuotationEndDelimiter:(id)arg1;
- (id)localizedStringForScriptCode:(id)arg1;
- (id)localizedStringForVariantCode:(id)arg1;
- (id)objectForKey:(id)arg1;
- (id)quotationBeginDelimiter;
- (id)quotationEndDelimiter;
- (id)scriptCode;
- (BOOL)usesMetricSystem;
- (id)variantCode;

// Image: /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation

// NSLocale (NSLocale)

+ (id)autoupdatingCurrentLocale;

- (Class)classForCoder;
- (id)debugDescription;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

// NSLocale (NSLocale_CalendarDirection)

- (long long)_calendarDirection;

// NSLocale (NSLocale_LanguageExtras)

+ (id)__effectiveLanguageForBundle:(id)arg1;
+ (id)_deviceLanguage;
+ (id)_preferredMeasurementSystem;
+ (id)_preferredTemperatureUnit;
+ (void)_setPreferredMeasurementSystem:(id)arg1;
+ (void)_setPreferredTemperatureUnit:(id)arg1;
+ (id)mostPreferredLanguageOf:(id)arg1 forUsage:(unsigned long long)arg2 options:(unsigned long long)arg3;
+ (id)mostPreferredLanguageOf:(id)arg1 withPreferredLanguages:(id)arg2 forUsage:(unsigned long long)arg3 options:(unsigned long long)arg4;
+ (id)preferredLocale;
+ (void)registerPreferredLanguage:(id)arg1 usage:(unsigned long long)arg2 confidence:(float)arg3;
+ (void)setPreferredLanguages:(id)arg1;
+ (id)systemLanguages;

// Image: /System/Library/PrivateFrameworks/InternationalSupport.framework/Versions/A/InternationalSupport

// NSLocale (InternationalSupportExtensions)

+ (id)_ICUdisplayNameForLanguage:(id)arg1 capitalization:(struct ULocaleDisplayNames { }*)arg2;
+ (id)_addLikelySubtagsForLocaleIdentifier:(id)arg1;
+ (id)_availableRegionsOfType:(int)arg1;
+ (id)_containingRegionOfType:(int)arg1 forRegion:(id)arg2;
+ (id)_displayNameForLanguage:(id)arg1 displayLanguage:(id)arg2 context:(long long)arg3;
+ (id)_displayNameForNormalizedLanguage:(id)arg1 context:(long long)arg2 displayLanguage:(id)arg3;
+ (id)_displayNameForRegion:(id)arg1 displayLanguage:(id)arg2 context:(long long)arg3 short:(BOOL)arg4;
+ (id)_generateMinimizedLanguages;
+ (id)_globalPreferredLanguages;
+ (id)_languageNameOverrides;
+ (id)_languagesForRegion:(id)arg1 subdivision:(id)arg2 withThreshold:(long long)arg3;
+ (id)_languagesToExemplarStrings;
+ (id)_minimizeSubtagsForLocaleIdentifier:(id)arg1;
+ (id)_minimizedLanguages;
+ (id)_normalizedLanguageIdentifierFromString:(id)arg1;
+ (id)_parentLocaleIdentifierForIdentifier:(id)arg1;
+ (id)_regionLanguageDataForRegionCode:(id)arg1 subdivisionCode:(id)arg2;
+ (id)_supportedKeyboardLanguages;
+ (id)availableContinents;
+ (id)availableSpokenLanguages;
+ (id)baseLanguageFromLanguage:(id)arg1;
+ (id)baseSystemLanguages;
+ (id)containingContinentOfRegion:(id)arg1;
+ (id)containingRegionOfRegion:(id)arg1;
+ (id)deviceLanguage;
+ (id)deviceLanguages;
+ (id)displayNameForLanguage:(id)arg1 displayLanguage:(id)arg2 context:(long long)arg3;
+ (id)displayNameForRegion:(id)arg1 displayLanguage:(id)arg2 context:(long long)arg3 short:(BOOL)arg4;
+ (id)exemplarForLanguage:(id)arg1;
+ (id)exemplarRegionForLanguage:(id)arg1;
+ (id)languageFromLanguage:(id)arg1 byReplacingRegion:(id)arg2;
+ (id)languagesByAddingRelatedLanguagesToLanguages:(id)arg1;
+ (id)languagesForRegion:(id)arg1 subdivision:(id)arg2 withThreshold:(long long)arg3 filter:(long long)arg4;
+ (id)matchedLanguagesFromAvailableLanguages:(id)arg1 forPreferredLanguages:(id)arg2;
+ (id)minimizedLanguagesFromLanguages:(id)arg1;
+ (id)relatedLanguagesForLanguage:(id)arg1;
+ (id)scriptCodeFromLanguage:(id)arg1;
+ (id)spokenLanguagesForLanguage:(id)arg1;
+ (id)spokenLanguagesForLanguages:(id)arg1 includeLanguagesForRegion:(BOOL)arg2;
+ (id)supportedLanguages;
+ (id)supportedRegions;

- (id)availableNumberingSystems;
- (id)countryCodeTopLevelDomainsUsingPunycode:(BOOL)arg1;
- (id)displayNameForLanguage:(id)arg1 displayLanguage:(id)arg2 context:(long long)arg3;
- (id)displayNameForRegion:(id)arg1 displayLanguage:(id)arg2 context:(long long)arg3 short:(BOOL)arg4;
- (BOOL)isEquivalentTo:(id)arg1;
- (id)languageIdentifier;
- (id)localizedStringForLanguage:(id)arg1 context:(long long)arg2;
- (id)localizedStringForNumberingSystem:(id)arg1 short:(BOOL)arg2;
- (id)localizedStringForRegion:(id)arg1 context:(long long)arg2 short:(BOOL)arg3;
- (id)numberingSystem;

// Image: /System/Library/PrivateFrameworks/TextInput.framework/Versions/A/TextInput

// NSLocale (TIExtras)

+ (id)localeForBundleLanguage:(id)arg1;

@end
