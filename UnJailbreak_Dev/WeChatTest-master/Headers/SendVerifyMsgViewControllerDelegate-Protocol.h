//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class CVerifyContactWrap;

@protocol SendVerifyMsgViewControllerDelegate <NSObject>

@optional
- (void)contactAddContactOk:(CVerifyContactWrap *)arg1;
- (void)contactSendRequestOk:(CVerifyContactWrap *)arg1;
- (void)onSendVerifyMsgCancel;
- (void)onSendVerifyMsgOK;
@end
