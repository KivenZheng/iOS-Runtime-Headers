/* Generated by RuntimeBrowser on iPhone OS 4.0
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class SFUZipEntry;



@interface OCPZipPackagePart : OCPPackagePart 
{
    SFUZipEntry *mEntry;
}


- (id)data;
- (void)dealloc;
- (id)initWithArchive:(id)arg1 location:(id)arg2 package:(id)arg3;
- (void)copyToFile:(id)arg1;
- (struct _xmlTextReader { }*)xmlReader;
- (struct _xmlDoc { void *x1; NSInteger x2; char *x3; struct _xmlNode {} *x4; struct _xmlNode {} *x5; struct _xmlNode {} *x6; struct _xmlNode {} *x7; struct _xmlNode {} *x8; struct _xmlDoc {} *x9; NSInteger x10; NSInteger x11; struct _xmlDtd {} *x12; struct _xmlDtd {} *x13; struct _xmlNs {} *x14; char *x15; char *x16; void *x17; void *x18; char *x19; NSInteger x20; struct _xmlDict {} *x21; void *x22; NSInteger x23; NSInteger x24; }*)xmlDocument;

@end
