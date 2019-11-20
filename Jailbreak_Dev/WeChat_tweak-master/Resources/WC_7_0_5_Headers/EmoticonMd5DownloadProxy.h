//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "EmoticonDownloadProxy.h"

#import "StoreEmotionBatchEmojiDownLoadCgiDelegate.h"

@class EmoticonCdnDownloadConnection, NSString, StoreEmotionBatchEmojiDownLoadCgi;

@interface EmoticonMd5DownloadProxy : EmoticonDownloadProxy <StoreEmotionBatchEmojiDownLoadCgiDelegate>
{
    NSString *m_md5String;
    _Bool m_isActive;
    StoreEmotionBatchEmojiDownLoadCgi *m_batchEmojiDownloadCgi;
    EmoticonCdnDownloadConnection *m_cdnDownloadProxy;
    _Bool _disableExtern;
}

+ (void)keyReportDownloadWithOutURL;
- (void).cxx_destruct;
- (void)callFailedDelegate;
- (id)createCdnDownloadConnectionWithEmojiInfo:(id)arg1;
@property(nonatomic) _Bool disableExtern; // @synthesize disableExtern=_disableExtern;
- (id)initWithMd5:(id)arg1;
- (_Bool)isActive;
- (void)onBatchEmojiDownLoadEndWithEmojiList:(id)arg1;
- (void)startRequest;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
