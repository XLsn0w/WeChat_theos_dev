//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface WCUpdateUtil : NSObject
{
}

+ (_Bool)deobfAndUnzipFile:(id)arg1 to:(id)arg2;
+ (id)getDirOfUpdateTmp;
+ (_Bool)unzipFile:(id)arg1 toDir:(id)arg2;
+ (_Bool)isInfoMatchNative:(id)arg1;
+ (id)getMatchedInfoForBundle:(id)arg1;
+ (id)getNativeUUIDs;
+ (id)_getNativeUUIDs;
+ (id)formatUUID:(id)arg1;
+ (id)getRealPath:(id)arg1;
+ (_Bool)canExitOnEnteringBackground;
+ (id)getConfigFilePathForBundle:(id)arg1;
+ (id)getUpdateBundle:(id)arg1;
+ (id)getUpdateResDirPath;
+ (id)getUpdateDataDirPath;
+ (id)getUpdateDataZipFilePath;
+ (id)getDirOfUpdate;

@end

