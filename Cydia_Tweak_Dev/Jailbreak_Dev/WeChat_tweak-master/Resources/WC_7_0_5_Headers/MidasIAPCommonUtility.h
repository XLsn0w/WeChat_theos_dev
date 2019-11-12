//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface MidasIAPCommonUtility : NSObject
{
}

+ (id)bundleSeedID:(int *)arg1;
+ (_Bool)checkGUIDService;
+ (void)clearBackgroundMask;
+ (id)createGUID;
+ (id)filePath:(id)arg1;
+ (void)findService:(id)arg1 tag:(id)arg2 saveUID:(id)arg3 group:(id)arg4;
+ (id)getMacAddress;
+ (id)getScreenShotsImage:(long long)arg1;
+ (struct CGSize)getScreenSizeByOrientation;
+ (struct CGSize)getSizeRatio:(long long)arg1;
+ (id)getSubImage:(id)arg1 orientation:(long long)arg2;
+ (id)getSubview:(id)arg1 byTagId:(unsigned long long)arg2;
+ (struct CGSize)getSystemScreenMetrics:(long long)arg1;
+ (id)getValueFromString:(id)arg1 byKey:(id)arg2;
+ (id)gunzippedData:(id)arg1;
+ (id)gzippedData:(id)arg1;
+ (_Bool)ignoreOrientation;
+ (id)imageNamed:(id)arg1;
+ (_Bool)isDeviceJailBroken;
+ (_Bool)isGzippedData:(id)arg1;
+ (_Bool)isIpValid:(id)arg1;
+ (_Bool)isProductStillNeedReprovide:(id)arg1;
+ (_Bool)isQQInstalled;
+ (_Bool)isSystemVersionAboveiOS7;
+ (_Bool)isWechatInstalled;
+ (void)load;
+ (void)loadClassMannually;
+ (id)localPriceFromLocale:(id)arg1 price:(id)arg2;
+ (id)md5:(id)arg1;
+ (id)midasUserDefaultsForKey:(id)arg1;
+ (id)platform;
+ (void)registerAppUid;
+ (void)registerBugly;
+ (void)registerInitVid;
+ (void)registerUid;
+ (void)registerUserAgent:(id)arg1;
+ (double)rotateAngleFromOrientation:(long long)arg1 toOrientation:(long long)arg2;
+ (void)setBackgroundMask:(id)arg1 alpha:(double)arg2 orientation:(long long)arg3;
+ (void)showAlert:(id)arg1 msg:(id)arg2 cancelBtnTitle:(id)arg3 completion:(CDUnknownBlockType)arg4 onViewController:(id)arg5;
+ (struct CGAffineTransform)transformForOrientation:(long long)arg1;
+ (void)updateMidasUserDefaults:(id)arg1 value:(id)arg2;
+ (id)vendorString;

@end
