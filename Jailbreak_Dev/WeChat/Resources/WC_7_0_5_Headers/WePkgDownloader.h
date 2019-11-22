//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMObject.h"

@class NSURLSessionDownloadTask, WePkgFileDownloadInfo;

@interface WePkgDownloader : MMObject
{
    WePkgFileDownloadInfo *_downloadInfo;
    id <WePkgDownloaderDelegate> _delegate;
    NSURLSessionDownloadTask *_downloadTask;
}

- (void).cxx_destruct;
- (int)applyBsPatch:(id)arg1 oldFile:(id)arg2 newFile:(id)arg3;
- (void)applyPatchIfNeed:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)cancelDownload;
@property(nonatomic) __weak id <WePkgDownloaderDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) WePkgFileDownloadInfo *downloadInfo; // @synthesize downloadInfo=_downloadInfo;
@property(retain, nonatomic) NSURLSessionDownloadTask *downloadTask; // @synthesize downloadTask=_downloadTask;
- (id)getFilePathIfAlreadyDownloaded;
- (void)handleDownloadEndForUrl:(id)arg1 storeIn:(id)arg2 andResponse:(id)arg3 andError:(id)arg4;
- (id)initWithPkgDownloadInfo:(id)arg1 delegate:(id)arg2;
- (void)startDownload;

@end
