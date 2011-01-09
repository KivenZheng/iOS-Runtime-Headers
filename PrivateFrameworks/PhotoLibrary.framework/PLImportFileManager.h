/* Generated by RuntimeBrowser on iPhone OS 4.0
   Image: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */



@interface PLImportFileManager : NSObject 
{
}

+ (BOOL)isCameraDirectoryFolderName:(id)arg1;
+ (BOOL)isImportDirectoryFolderName:(id)arg1;
+ (id)sharedImportFileManager;

- (id)_dcimDirectory;
- (id)_DCIMFolderNameWithNumber:(NSInteger)arg1;
- (id)nextAvailableFilePathInDirectory:(id)arg1 withExtension:(id)arg2;
- (BOOL)removeUnusedDCIMDirectoryAtPath:(id)arg1;
- (id)newDCIMFolderWithFolderNumber:(NSInteger*)arg1;
- (id)init;
- (void)dealloc;

@end
