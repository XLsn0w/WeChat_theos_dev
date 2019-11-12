//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, WCPayControlData, WCPayControlLogic, WCPayInnerPayResponseStruct;

@protocol IWCPayControlLogicExt <NSObject>

@optional
- (void)OnFinishedLoadingAndGoToFirstViewController:(WCPayControlLogic *)arg1;
- (void)OnFinishedWCPayInnerPayLogic:(WCPayInnerPayResponseStruct *)arg1 CompleteStatus:(int)arg2 ExtraInfo:(NSString *)arg3;
- (void)OnFinishedWCPayLogic:(NSString *)arg1 CompleteStatus:(int)arg2;
- (void)OnGetLocalCachePayCardList:(WCPayControlData *)arg1;
- (void)OnPayCardListChanged:(WCPayControlData *)arg1;
- (void)OnPreFinishedWCPayLogic:(NSString *)arg1 waitUntilDone:(_Bool *)arg2;
- (void)OnRealnameRegistered:(WCPayControlData *)arg1;
@end
