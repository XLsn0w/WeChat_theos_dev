//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, ReportPayResResp;

@protocol WCPayT2BCPayReportCgiDelegate <NSObject>
- (void)onWCPayT2BCPayReportCgiError:(NSString *)arg1 errorCode:(unsigned int)arg2;
- (void)onWCPayT2BCPayReportCgiResponseOK:(ReportPayResResp *)arg1;
@end
