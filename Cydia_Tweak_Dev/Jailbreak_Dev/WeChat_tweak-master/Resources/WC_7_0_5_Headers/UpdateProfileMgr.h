//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMService.h"

#import "IContactMgrExt.h"
#import "INewSyncExt.h"
#import "MMKernelExt.h"
#import "MMService.h"
#import "PBMessageObserverDelegate.h"

@class NSRecursiveLock, NSString;

@interface UpdateProfileMgr : MMService <INewSyncExt, MMService, MMKernelExt, PBMessageObserverDelegate, IContactMgrExt>
{
    NSRecursiveLock *m_lock;
    long long m_profileUpdateEvent;
}

+ (id)getOplog:(id)arg1;
+ (_Bool)hasSetWxPasswd;
+ (_Bool)isModifyExtInfo:(id)arg1;
+ (_Bool)isUserInfoNotReady;
+ (void)modifySetting:(id)arg1;
+ (_Bool)modifyUserInfo:(id)arg1;
- (void).cxx_destruct;
- (void)HandleModUsrInfo:(id)arg1;
- (void)HandleModUsrInfoExt:(id)arg1;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)checkAndTransferCallKitSwitch;
- (void)dealloc;
- (void)handleModUserInfo:(id)arg1 withSetting:(id)arg2;
- (void)handleModUserInfoExt:(id)arg1 withSetting:(id)arg2;
- (id)init;
- (void)onAuthOK;
- (void)onModifySelfContact:(id)arg1;
- (void)onNewSyncModUserInfo:(id)arg1;
- (void)onNewSyncModUserInfoExt:(id)arg1;
- (void)onServiceClearData;
- (void)onServiceInit;
- (void)setIsNeedUpdateAfterAuth:(_Bool)arg1;
- (void)updateUserProfile;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
