/* Generated by RuntimeBrowser on iPhone OS 4.0
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class NSMutableArray, NSMutableDictionary, NSString;



@interface TSUNumberFormatter : NSObject 
{
    struct __CFLocale { } *mLocale;
    struct __CFArray { } *mDecimalFormatters;
    struct __CFArray { } *mCurrencyFormatters;
    struct __CFArray { } *mPercentageFormatters;
    struct __CFArray { } *mScientificFormatters;
    struct __CFNumberFormatter { } *mFractionFormatter;
    NSMutableDictionary *mCurrencyCodeToSymbolMap;
    NSMutableDictionary *mCurrencyCodeToHalfWidthSymbolMap;
    NSString *mCurrencyString;
    NSString *mPercentageString;
    NSString *mScientificString;
    NSString *mDecimalString;
    NSString *mPercentSymbol;
    NSMutableArray *mTransformedDecimalStrings;
    NSMutableArray *mTransformedCurrencyStrings;
    NSMutableArray *mTransformedPercentageStrings;
    NSMutableArray *mTransformedScientificStrings;
    struct __CFString { } *mAdditionalCurrencyCode;
    struct __CFArray { } *mAdditionalCurrencyCodeFormatters;
}

+ (void)initialize;
+ (NSInteger)positionOfMinusSignInNumberFormatSubpattern:(id)arg1;
+ (id)availableCurrencyCodes;
+ (unsigned short)defaultDecimalPlacesForCurrencyCode:(id)arg1;
+ (id)currentLocaleDecimalSeparator;
+ (id)currentLocaleListSeparator;
+ (id)userVisibleCurrencyCodes;
+ (id)defaultFormatStringForValueType:(NSInteger)arg1 negativeStyle:(NSInteger)arg2;
+ (NSInteger)positionOfSymbol:(id)arg1 inNumberFormatSubpattern:(id)arg2;
+ (NSInteger)positionOfCurrencySymbolInNumberFormatSubpattern:(id)arg1;
+ (id)formatString:(id)arg1 transformedForNegativeStyle:(NSInteger)arg2;
+ (void)formatString:(id)arg1 replaceOccurencesOfUnescapedString:(id)arg2 withString:(id)arg3;
+ (id)numberFormatStringSpecialSymbols;
+ (id)displayNameForCurrencyCode:(id)arg1;
+ (id)currentLocaleCurrencyCode;
+ (id)defaultFormatStringForValueType:(NSInteger)arg1;
+ (id)localizedPercentSymbol;
+ (id)formatterForLocale:(struct __CFLocale { }*)arg1;
+ (id)currencySymbolForCurrencyCode:(id)arg1;

- (void)dealloc;
- (BOOL)decimalFromString:(struct __CFString { }*)arg1 value:(double*)arg2 formatString:(const struct __CFString {}**)arg3;
- (BOOL)currencyFromString:(struct __CFString { }*)arg1 additionalCurrencyCode:(struct __CFString { }*)arg2 value:(double*)arg3 formatString:(const struct __CFString {}**)arg4 currencyCode:(const struct __CFString {}**)arg5;
- (BOOL)scientificFromString:(struct __CFString { }*)arg1 value:(double*)arg2 formatString:(const struct __CFString {}**)arg3;
- (BOOL)findCurrencySymbolInString:(struct __CFString { }*)arg1 additionalCurrencyCode:(struct __CFString { }*)arg2 succesTSUlString:(const struct __CFString {}**)arg3;
- (id)halfWidthCurrencySymbolForCurrencyCode:(id)arg1;
- (id)defaultFormatStringForValueType:(NSInteger)arg1 negativeStyle:(NSInteger)arg2;
- (struct __CFArray { }*)p_decimalFormatters;
- (struct __CFArray { }*)p_currencyFormatters;
- (struct __CFArray { }*)p_percentageFormatters;
- (struct __CFArray { }*)p_scientificFormatters;
- (id)initWithLocale:(struct __CFLocale { }*)arg1;
- (void)numberPreferencesChanged:(id)arg1;
- (BOOL)percentageFromString:(struct __CFString { }*)arg1 value:(double*)arg2 formatString:(const struct __CFString {}**)arg3;
- (BOOL)fractionFromString:(struct __CFString { }*)arg1 value:(double*)arg2;
- (BOOL)valueFromString:(struct __CFString { }*)arg1 formatters:(struct __CFArray { }*)arg2 value:(double*)arg3 formatString:(const struct __CFString {}**)arg4 currencyCode:(const struct __CFString {}**)arg5;
- (id)displayNameForCurrencyCode:(id)arg1;
- (id)currentLocaleCurrencyCode;
- (id)defaultFormatStringForValueType:(NSInteger)arg1;
- (id)localizedPercentSymbol;
- (id)currencySymbolForCurrencyCode:(id)arg1;

@end
