/* Generated by RuntimeBrowser on iPhone OS 4.0
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class OCDSummary, <OCDReader>, <OCDWriter>;



@interface OCDDocument : NSObject 
{
    <OCDReader> *mReader;
    <OCDWriter> *mWriter;
    OCDSummary *mSummary;
}


- (id)init;
- (void)dealloc;
- (/* Warning: Unrecognized filer type: 'B' using 'void*' */ void*)isFromBinaryFile;
     /* Encoded args for previous method: B8@0:4 */

- (/* Warning: Unrecognized filer type: 'B' using 'void*' */ void*)isToBinaryFile;
     /* Encoded args for previous method: B8@0:4 */

- (id)writer;
- (void)setWriter:(id)arg1;
- (id)reader;
- (void)setReader:(id)arg1;
- (id)summary;

@end
