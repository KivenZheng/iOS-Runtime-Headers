/* Generated by RuntimeBrowser on iPhone OS 4.0
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSString, NSMutableString;



@interface EMNumberFormatter : NSObject 
{
    struct __CFNumberFormatter { } *mGenericFormatter;
    struct __CFNumberFormatter { } *mBigNumberFormatter;
    struct __CFNumberFormatter { } *mSmallNumberFormatter;
    struct __CFDateFormatter { } *mDateFormatter;
    struct __CFNumberFormatter { } *mCurrencyFormatter;
    NSString *excelFormatString;
    NSMutableString *icuFormatString;

  /* Error parsing encoded ivar type info: B */
    /* Warning: Unrecognized filer type: 'B' using 'void*' */ void*mIsNegativeRed;

    unsigned short mCurrencySymbol;
    NSInteger formatType;
}

+ (void)initFormatterCache;
+ (void)releaseFormatterCache;
+ (id)formatterForFormat:(id)arg1;

- (void)dealloc;
- (id)initWithExcelFormatString:(id)arg1;
- (id)initWithDefaultFormatString;
- (struct __CFNumberFormatter { }*)_genericFormatter;
- (struct __CFNumberFormatter { }*)_bigNumberFormatter;
- (struct __CFNumberFormatter { }*)_smallNumberFormatter;
- (struct __CFNumberFormatter { }*)_genericFormatterForDouble;
- (struct __CFNumberFormatter { }*)_genericFormatterForPercent;
- (struct __CFDateFormatter { }*)_dateFormatter;
- (struct __CFNumberFormatter { }*)_currencyFormatter;
- (void)convertDateFormat;
- (void)convertCurrencyFormat;
- (id)formatPercent:(double)arg1;
- (id)icuFormatString;
- (void)convertGenericNumberFormat;
- (void)preprocessIcuString;
- (id)formatDefault:(double)arg1;
- (NSInteger)formatType;
- (/* Warning: Unrecognized filer type: 'B' using 'void*' */ void*)isNegativeRed;
     /* Encoded args for previous method: B8@0:4 */

- (id)formatDate:(id)arg1;
- (id)formatPhoneNumber:(double)arg1;
- (id)formatCurrency:(double)arg1;
- (id)formatFraction:(double)arg1;
- (id)formatDoubleValue:(double)arg1;

@end
