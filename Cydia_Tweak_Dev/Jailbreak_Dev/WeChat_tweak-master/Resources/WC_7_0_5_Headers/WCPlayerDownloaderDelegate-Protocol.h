//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@protocol WCPlayerDownloaderDelegate <NSObject>
- (void)onDataAvailableWithRange:(struct _NSRange)arg1;
- (void)onDataDownloadFail:(int)arg1;
- (void)onDataDownloadSuccess;

@optional
- (void)onDataDownloadFailWithExpired:(_Bool)arg1;
- (void)onVideoSourceChanged;
@end
