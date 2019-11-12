//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WAJSEventHandler_BaseEvent.h"

#import "WAAuthorizeDelegate.h"
#import "WAJSContextPlugin_userAccountProtocol.h"

@class NSData, NSDictionary, NSString, WAJSContextPlugin_userAccount, WAUserAuthorizeLogic;

@interface WAJSEventHandler_operateWXData : WAJSEventHandler_BaseEvent <WAAuthorizeDelegate, WAJSContextPlugin_userAccountProtocol>
{
    NSString *_appID;
    NSData *_data;
    WAUserAuthorizeLogic *_authLogic;
    _Bool _requestInQueue;
    NSDictionary *_dicInputParam;
    WAJSContextPlugin_userAccount *_userAccountInstance;
}

- (void).cxx_destruct;
- (void)continueShowConfirmView:(id)arg1;
- (void)dealloc;
@property(retain) NSDictionary *dicInputParam; // @synthesize dicInputParam=_dicInputParam;
- (void)endCancel;
- (void)endErrorWithMessage:(id)arg1;
- (void)endErrorWithMessage:(id)arg1 code:(int)arg2;
- (void)endOKWithData:(id)arg1;
- (void)endWithResult:(id)arg1;
- (id)getCurrentViewController;
- (void)handleJSEvent:(id)arg1;
- (void)mainThread_runUserAccountJSEvent:(id)arg1;
- (void)onAuthorizeConfirmAccept:(id)arg1;
- (void)onAuthorizeConfirmDeny:(id)arg1;
- (void)onCgiResponse:(id)arg1 forEvent:(unsigned int)arg2;
- (void)onResponseConfirm:(id)arg1;
- (void)onResponseData:(id)arg1;
- (void)onUserAccountJSEventEnd;
- (void)requestConfirmWithAppID:(id)arg1 data:(id)arg2 scope:(id)arg3;
- (void)requestDataWithAppID:(id)arg1 data:(id)arg2;
@property(nonatomic) __weak WAJSContextPlugin_userAccount *userAccountInstance; // @synthesize userAccountInstance=_userAccountInstance;
- (void)showConfirmView:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
