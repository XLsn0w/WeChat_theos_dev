//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@protocol PhoneAuthManagePhoneLogicOperationDelegate <NSObject>

@optional
- (void)confirmCodeRequestedFailedWithErrorMsg:(NSString *)arg1;
- (void)confirmCodeRequestedSuccess;
- (void)confirmCodeVerifyFailedWithErrorMsg:(NSString *)arg1;
- (void)confirmCodeVerifySuccess;
- (void)savePhoneSuccess:(NSString *)arg1 saveFlag:(_Bool)arg2;
@end
