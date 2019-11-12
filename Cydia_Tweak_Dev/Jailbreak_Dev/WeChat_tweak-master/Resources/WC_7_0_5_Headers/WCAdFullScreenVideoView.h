//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMUIView.h"

#import "UIActionSheetDelegate.h"
#import "WCFacadeExt.h"
#import "WCPlayerConfigDelegate.h"

@class NSString, UIButton, UIView, WCMediaItem, WCPlayerConfigControlView, WCPlayerPlayArgs, WCPlayerView;

@interface WCAdFullScreenVideoView : MMUIView <UIActionSheetDelegate, WCFacadeExt, WCPlayerConfigDelegate>
{
    _Bool _isImageReady;
    _Bool _isToolbarVisible;
    _Bool _hasSetHorizontalButtomBarFrame;
    int _currentState;
    id <WCAdFullScreenVideoViewDelegate> _delegate;
    WCPlayerConfigControlView *_controlView;
    WCPlayerView *_playerView;
    WCPlayerPlayArgs *_playerInfo;
    WCMediaItem *_mediaData;
    UIView *_topControllerBar;
    UIButton *_closeCurrentViewBtn;
    UIButton *_moreBtn;
    NSString *_detailWording;
    struct CGRect _originalButtomToolBarFrame;
    struct CGRect _horizontalButtomBarFrame;
}

- (void).cxx_destruct;
- (void)checkAndDownloadImage;
- (void)cleanPlayerView;
@property(retain, nonatomic) UIButton *closeCurrentViewBtn; // @synthesize closeCurrentViewBtn=_closeCurrentViewBtn;
@property(retain, nonatomic) WCPlayerConfigControlView *controlView; // @synthesize controlView=_controlView;
- (void)createAndSetupPlayer;
@property(nonatomic) int currentState; // @synthesize currentState=_currentState;
- (void)dealloc;
@property(nonatomic) __weak id <WCAdFullScreenVideoViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSString *detailWording; // @synthesize detailWording=_detailWording;
- (void)downloadImage;
- (id)generateConfig;
- (id)getImage;
- (double)getMediaCurrentPosition;
- (double)getVideoDuration;
- (_Bool)hasAttachBtn;
@property(nonatomic) _Bool hasSetHorizontalButtomBarFrame; // @synthesize hasSetHorizontalButtomBarFrame=_hasSetHorizontalButtomBarFrame;
@property(nonatomic) struct CGRect horizontalButtomBarFrame; // @synthesize horizontalButtomBarFrame=_horizontalButtomBarFrame;
- (void)initTopbar;
- (id)initWithFrame:(struct CGRect)arg1 mediaData:(id)arg2 detailWording:(id)arg3;
@property(nonatomic) _Bool isImageReady; // @synthesize isImageReady=_isImageReady;
@property(nonatomic) _Bool isToolbarVisible; // @synthesize isToolbarVisible=_isToolbarVisible;
@property(retain, nonatomic) WCMediaItem *mediaData; // @synthesize mediaData=_mediaData;
@property(retain, nonatomic) UIButton *moreBtn; // @synthesize moreBtn=_moreBtn;
- (void)onBackClick;
- (void)onClickSightView;
- (void)onDownloadFail:(id)arg1 downloadType:(int)arg2;
- (void)onDownloadFinish:(id)arg1 downloadType:(int)arg2;
- (void)onMediaItemSizeDidChange:(id)arg1;
- (void)onMoreClick;
- (void)onSightIconProgressEnd;
- (void)onTapAttachButton:(id)arg1;
- (void)onTapSightIconView;
- (void)onToolViewAutoClose;
- (void)onVideoPause;
- (void)onVideoPlay;
@property(nonatomic) struct CGRect originalButtomToolBarFrame; // @synthesize originalButtomToolBarFrame=_originalButtomToolBarFrame;
- (void)pauseVideo;
- (void)playVideo;
@property(retain, nonatomic) WCPlayerPlayArgs *playerInfo; // @synthesize playerInfo=_playerInfo;
@property(retain, nonatomic) WCPlayerView *playerView; // @synthesize playerView=_playerView;
- (double)realSafeAreaInsetsTop;
- (void)reloadSightPreviewImage;
@property(retain, nonatomic) UIView *topControllerBar; // @synthesize topControllerBar=_topControllerBar;
- (void)startWCPlayer;
- (void)switchToolBarVisibility:(_Bool)arg1;
- (void)updateFrame:(struct CGRect)arg1;
- (void)updateToolBar;
- (void)updateTopBarFrame;
- (void)willMoveToSuperview:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
