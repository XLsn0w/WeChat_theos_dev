//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMSearchBarDisplayController.h"

#import "AppDetailDelegate-Protocol.h"
#import "BadRoomLogicControllerDelegate-Protocol.h"
#import "BannerToastExt-Protocol.h"
#import "ChatBackgroundExt-Protocol.h"
#import "ChatViewModelDelegate-Protocol.h"
#import "FirstUnReadTipViewDelegate-Protocol.h"
#import "IMsgExt-Protocol.h"
#import "IMsgRevokeExt-Protocol.h"
#import "INewSyncExt-Protocol.h"
#import "IVOIPExt-Protocol.h"
#import "IVOIPUILogicMgrExt-Protocol.h"
#import "IdleTimerUtilExt-Protocol.h"
#import "MMInputToolViewDelegate-Protocol.h"
#import "MMMultiSelectToolViewDelegate-Protocol.h"
#import "MMNewTipsMgrExt-Protocol.h"
#import "MMRTCMenuResponderDelegate-Protocol.h"
#import "MMReadMailViewDelegate-Protocol.h"
#import "MMRichTextSelectEventDelegate-Protocol.h"
#import "MMScrollActionSheetDelegate-Protocol.h"
#import "MessageNodeViewDelegate-Protocol.h"
#import "MsgDelegate-Protocol.h"
#import "MsgImgFullScreenViewControllerDelegate-Protocol.h"
#import "MsgImgFullScreenWindowDelegate-Protocol.h"
#import "MsgSearchHelperDelegate-Protocol.h"
#import "MultiSelectContactsViewControllerDelegate-Protocol.h"
#import "ShareMessageConfirmLogicHelperDelegate-Protocol.h"
#import "StreamVoiceInputViewControllerDelegate-Protocol.h"
#import "TipsViewDelegate-Protocol.h"
#import "TrackRoomTipsViewDelegate-Protocol.h"
#import "TypingControllerDelgate-Protocol.h"
#import "UIAlertViewDelegate-Protocol.h"
#import "UIDocumentInteractionControllerDelegate-Protocol.h"
#import "UINavigationControllerDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"
#import "UIViewControllerPreviewingDelegate-Protocol.h"
#import "WCActionSheetDelegate-Protocol.h"
#import "WCCanvasPageViewControllerDelegate-Protocol.h"
#import "WCNetworkMediaPlayerDelegate-Protocol.h"
#import "WXGChatLogDelMsgNotification-Protocol.h"
#import "WXGImportMessageNotification-Protocol.h"
#import "contactInfoDelegate-Protocol.h"
#import "tableViewDelegate-Protocol.h"

@class BadRoomLogicController, BaseChatViewModel, CMessageWrap, FirstUnReadTipView, MMDropManager, MMInputToolView, MMLoadingView, MMMultiSelectToolView, MMRichTextCoverView, MMScrollActionSheet, MMTableView, MMTimer, MMUIWindow, MsgImgFullScreenWindow, MsgSearchHelper, MultiTalkTipsView, NSMutableArray, NSString, ReaderReporter, RichTextView, ShareMessageConfirmLogicHelper, StreamVoiceInputViewController, TipsView, TrackRoomTipsView, UIActivityIndicatorView, UIBarButtonItem, UIImageView, UIView, UIWindow;
@protocol BaseMsgContentDelgate, BaseMsgContentInBackgroundThreadDelgate, UIViewControllerPreviewing;

@interface BaseMsgContentViewController : MMSearchBarDisplayController <MsgSearchHelperDelegate, MsgImgFullScreenWindowDelegate, BannerToastExt, IdleTimerUtilExt, BadRoomLogicControllerDelegate, MsgImgFullScreenViewControllerDelegate, WCCanvasPageViewControllerDelegate, ChatBackgroundExt, UIViewControllerPreviewingDelegate, StreamVoiceInputViewControllerDelegate, WXGImportMessageNotification, WXGChatLogDelMsgNotification, INewSyncExt, MMNewTipsMgrExt, UITableViewDelegate, UITableViewDataSource, WCActionSheetDelegate, UIAlertViewDelegate, UINavigationControllerDelegate, UIDocumentInteractionControllerDelegate, tableViewDelegate, TypingControllerDelgate, MessageNodeViewDelegate, ChatViewModelDelegate, contactInfoDelegate, MsgDelegate, MMInputToolViewDelegate, ShareMessageConfirmLogicHelperDelegate, MMReadMailViewDelegate, IVOIPExt, AppDetailDelegate, TipsViewDelegate, TrackRoomTipsViewDelegate, IMsgExt, IMsgRevokeExt, IVOIPUILogicMgrExt, MMMultiSelectToolViewDelegate, MultiSelectContactsViewControllerDelegate, MMScrollActionSheetDelegate, FirstUnReadTipViewDelegate, WCNetworkMediaPlayerDelegate, MMRichTextSelectEventDelegate, MMRTCMenuResponderDelegate>
{
    NSMutableArray *m_arrMessageNodeData;
    unsigned int m_uLastTime;
    unsigned int m_uLastMoreMsgTime;
    _Bool m_bKeyboardShow;
    _Bool m_bToolViewHidden;
    unsigned long long m_moreMsgIndex;
    _Bool m_bReadtToLoadMoreMsg;
    id <BaseMsgContentDelgate> m_delegate;
    id <BaseMsgContentInBackgroundThreadDelgate> m_backgroundThreadDelegate;
    Class m_delegateClass;
    MMTimer *m_LockerTimer;
    MMTableView *m_tableView;
    UIActivityIndicatorView *m_activityView;
    UIView *m_headerView;
    MMInputToolView *_inputToolView;
    UIView *m_backgroundView;
    NSMutableArray *m_arrDeleteRows;
    UIView *m_deleteContainView;
    _Bool m_bViewDidAppear;
    TrackRoomTipsView *m_trackTipsView;
    MultiTalkTipsView *m_multiTalkTipsView;
    _Bool m_bViewUnloaded;
    struct CGPoint m_pTableViewOffset;
    long long m_keyboardHeight;
    NSString *m_text;
    int m_inputMode;
    int m_positionMode;
    int m_contentMode;
    double m_fKeyboardAnimationDuration;
    MsgSearchHelper *m_oMsgSearchHelper;
    int m_iInitTableViewContentOffset;
    _Bool m_bNeedAdjustTableViewContentOffset;
    unsigned int m_uiSearchResultNodeViewHeight;
    long long m_uiInterfaceOrientation;
    MMLoadingView *m_loadingView;
    ShareMessageConfirmLogicHelper *_shareMessageConfirmLogicHelper;
    MMMultiSelectToolView *_multiSelectView;
    NSMutableArray *m_arrSelectMsgLocalID;
    UIView *m_msgReceivingTipsView;
    unsigned int m_uiSelectSearchMsgID;
    TipsView *m_chatAddFriend;
    TipsView *m_recommandFriend;
    TipsView *m_securityBanner;
    _Bool m_bChatAddFriendShow;
    _Bool m_bSecurityBannerShow;
    _Bool m_bShouldShowKeyboardAnimation;
    _Bool m_bNeedToUpdateTitle;
    _Bool m_bIsRevokeAdding;
    int m_msgCounerDurOneSync;
    _Bool m_bHightlightedSearchedMsgNode;
    struct CGPoint m_decelerateTarget;
    CMessageWrap *m_firstUnReadMsg;
    FirstUnReadTipView *m_jumpFirstUnReadBtn;
    unsigned long long m_unreadCount;
    MMScrollActionSheet *m_scrollActionSheet;
    MMUIWindow *m_fullScreenWindow;
    BaseChatViewModel *m_fullScreenNodeData;
    _Bool m_isMsgReceiveTipsJacking;
    unsigned int m_openTrackScene;
    struct timeval m_menuHideTime;
    _Bool m_shouldScrollToBottomAfterRotate;
    _Bool m_resignInputToolViewFirstResponder;
    _Bool m_scrollingTableToBottom;
    struct _NSRange m_scrollingInvisibleRange;
    _Bool m_needLayoutOnMenuHide;
    _Bool m_needScrollOnMenuHide;
    unsigned long long m_lastSectionCount;
    _Bool m_scrollingToFirstUnRead;
    double m_initialOffset;
    CMessageWrap *m_lastMsgInNewArray;
    UIView *m_footerView;
    UIActivityIndicatorView *m_footerActivityView;
    _Bool m_needLoadMoreWhenScrollToFistUnRead;
    _Bool m_needHideFirstUnReadBtn;
    _Bool m_bMovingToMainFrameTab;
    double m_bannerHeight;
    _Bool m_isPeekPreview;
    MsgImgFullScreenWindow *m_imgFullScreenWnd;
    UIView *m_snapshotView;
    unsigned int m_uiEnterRoomTime;
    unsigned int m_uiEnterRoomUnreadCount;
    _Bool m_bCloseForViewDetail;
    UIImageView *m_showNewView;
    unsigned int _startTime;
    id <UIViewControllerPreviewing> _previewingContext;
    StreamVoiceInputViewController *m_streamVoiceInputViewController;
    UIWindow *m_coverWindow;
    UIView *m_topBarView;
    UIBarButtonItem *m_voiceStreamCacheLeftBtnItem;
    UIBarButtonItem *m_voiceStreamCacheRightBtnItem;
    NSString *m_voiceStreamTitle;
    NSString *m_voiceStreamSavedText;
    _Bool m_bHasAppear;
    MMDropManager *m_dropManager;
    ReaderReporter *m_readerReporter;
    _Bool _m_bIsInMainFrame;
    int m_searchScene;
    NSMutableArray *m_shareContacts;
    BadRoomLogicController *_m_badRoomLogicController;
    MMRichTextCoverView *_richTextCoverView;
    RichTextView *_richTextView;
}

@property(retain, nonatomic) RichTextView *richTextView; // @synthesize richTextView=_richTextView;
@property(retain, nonatomic) MMRichTextCoverView *richTextCoverView; // @synthesize richTextCoverView=_richTextCoverView;
@property(retain, nonatomic) BadRoomLogicController *m_badRoomLogicController; // @synthesize m_badRoomLogicController=_m_badRoomLogicController;
@property(nonatomic) _Bool m_bIsInMainFrame; // @synthesize m_bIsInMainFrame=_m_bIsInMainFrame;
@property(nonatomic) int m_searchScene; // @synthesize m_searchScene;
@property(retain, nonatomic) NSMutableArray *m_shareContacts; // @synthesize m_shareContacts;
@property(retain, nonatomic) UIView *m_msgReceivingTipsView; // @synthesize m_msgReceivingTipsView;
@property(retain, nonatomic) MMTimer *m_LockerTimer; // @synthesize m_LockerTimer;
@property(retain, nonatomic) MMInputToolView *toolView; // @synthesize toolView=_inputToolView;
@property(nonatomic) __weak id <BaseMsgContentInBackgroundThreadDelgate> m_backgroundThreadDelegate; // @synthesize m_backgroundThreadDelegate;
@property(nonatomic) __weak id <BaseMsgContentDelgate> m_delegate; // @synthesize m_delegate;
- (void).cxx_destruct;
- (void)onNotifyToShowTips:(id)arg1;
- (void)onRichTextViewExit;
- (id)getForwardingMenuActionTarget:(SEL)arg1;
- (void)forwardMenuClickEventWithAction:(SEL)arg1;
- (id)getTextMsgCellViewForCoverView;
- (void)onDoubleClick;
- (void)exitSelectState;
- (void)onRemoveTextSelectView;
- (void)onTouchBeginMsg:(id)arg1 Touch:(id)arg2;
- (id)getCurrentViewController;
- (id)getScrollView;
- (id)getTableView;
- (void)copyViewDidScroll:(double)arg1;
- (void)tagWeAppLink:(id)arg1 messageWrap:(id)arg2;
- (void)onDeleteMessageFinish;
- (void)onImportMessageSuccess;
- (void)reloadViewInteral;
- (void)showSightDraftBoxView;
- (void)showAttachmentView;
- (void)traitCollectionDidChange:(id)arg1;
- (void)previewingContext:(id)arg1 commitViewController:(id)arg2;
- (id)previewingContext:(id)arg1 viewControllerForLocation:(struct CGPoint)arg2;
- (id)previewActionItems;
- (_Bool)isPeekPreview;
- (void)setIsPeekPreview:(_Bool)arg1;
- (void)onIdleTimerUtilVoipQuit;
- (struct CGRect)getVisibleRectInScreen:(id)arg1;
- (struct CGRect)getInnerVisibleRectInScreen:(struct CGRect)arg1;
- (long long)getMessageNodePosition:(id)arg1;
- (void)onJumpToViewDetail:(id)arg1;
- (void)onMsgImgPreviewDataRequired:(id)arg1;
- (void)onSightViewDetail:(id)arg1 vc:(id)arg2;
- (void)onPlayAttachVideo:(id)arg1 vc:(id)arg2;
- (void)onImgMsgLocate:(id)arg1 vc:(id)arg2;
- (void)onCurrentPageMsgReMoved:(id)arg1;
- (void)onMsgImgWindowWillHideToMsg:(id)arg1;
- (void)onSyncEnd;
- (void)onNewSyncFinish;
- (void)onNewSyncStart;
- (void)showReceiveMsgTips;
- (void)stopReceiveMsg;
- (void)startReceiveMsgWithTips:(id)arg1;
- (double)getInvisibleHeight;
- (_Bool)isContactSizeOverScreen;
- (void)endSearchAndDisplay;
- (void)scrollActionSheet:(id)arg1 didSelecteItem:(id)arg2;
- (void)OnMultiMsgMoreOperation:(id)arg1;
- (void)ShowMultiSelectMoreOperation:(id)arg1;
- (void)OnMultiEmailMessage:(id)arg1;
- (void)OnMultiForwardMessage;
- (void)OnMultiDeleteMessage:(id)arg1;
- (void)OnMultiFavAddMessage;
- (void)showAlertTooMany;
- (void)onMoreOperateWithMsgId:(id)arg1;
- (void)onVideoVoipViewDidAppear:(id)arg1;
- (void)didRotateFromInterfaceOrientation:(long long)arg1;
- (void)willAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (void)rotate:(long long)arg1 duration:(double)arg2;
- (void)onTrackRoomTipsViewClick;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)hideMultiTalkTips;
- (void)hideTrackRoomTips;
- (void)showMultiTalkTips;
- (void)showTrackRoomTips;
- (void)updateBanner;
- (_Bool)shouldHideOrginInputToolView;
- (double)getCustomizedAreaWidth;
- (void)loadingAfterForwardMessageOK;
- (void)stopLoadingAndAndShowErrorWithText:(id)arg1;
- (void)stopLoadingAndShowOkWithText:(id)arg1;
- (void)stopLoading;
- (void)showLoadingViewWithText:(id)arg1;
- (void)showLoadingView;
- (void)updateChatRoomData:(id)arg1;
- (id)GetCurrentViewController;
- (_Bool)isHiddenInputChangeButton;
- (_Bool)canShowEnterpriseBrandEntry;
- (_Bool)canShowLocation;
- (_Bool)canShowFavEntry;
- (void)initAllowNameCardFollowRedEnvelope;
- (void)initAllowWxTalkFollowSight;
- (void)initAllowMultiTalk;
- (void)initAllowWxTalk;
- (_Bool)isAllowWxTalk;
- (void)initAllowVoiceInput;
- (_Bool)isAllowVoiceInput;
- (void)initAllowVoip;
- (_Bool)isAllowVoip;
- (void)OnMsgDownloadVideoCommonFail:(id)arg1 MsgWrap:(id)arg2;
- (void)OnMsgDownloadVideoExpiredFail:(id)arg1 MsgWrap:(id)arg2;
- (void)OnMsgDownloadAppAttachCommonFail:(id)arg1 MsgWrap:(id)arg2;
- (void)OnMsgDownloadAppAttachExpiredFail:(id)arg1 MsgWrap:(id)arg2;
- (void)OnMsgDownloadThumbFail:(id)arg1 MsgWrap:(id)arg2;
- (void)OnMsgDownloadThumbOK:(id)arg1 MsgWrap:(id)arg2;
- (id)documentInteractionControllerViewControllerForPreview:(id)arg1;
- (void)OnAppDataPreview:(id)arg1 MsgWrap:(id)arg2;
- (long long)preferredInterfaceOrientationForPresentation;
- (void)PreviewAppNode:(id)arg1 MsgWrap:(id)arg2 Pop:(_Bool)arg3;
- (void)updateToolViewOrigin;
- (void)adjustViewAndNavBarRect;
- (void)adjustDeleteViewRect;
- (void)hideToolViewAnimated:(_Bool)arg1;
- (void)onDeleteAllMsg;
- (void)ReloadView;
- (void)Reset;
- (id)init;
- (void)dealloc;
- (void)resetToolView;
- (void)voiceoverStatusChanged;
- (void)viewDidLoad;
- (void)OnSendMessageCancel:(id)arg1;
- (void)OnSendMessageFail:(id)arg1 WithError:(int)arg2;
- (void)OnSendMessageOK:(id)arg1;
- (void)MenuControllerWillHide:(id)arg1;
- (void)MenuControllerWillShow:(id)arg1;
- (void)lockerTimesup;
- (void)beginLockerTimer;
- (void)stopLockerTimesup;
- (void)onTipViewClick:(id)arg1;
- (id)getLastContentMessageNodeFromArray:(id)arg1;
- (id)getFirstContentMessageNodeFromArray:(id)arg1;
- (void)scrollToFirstUnReadMessage:(id)arg1;
- (unsigned long long)getFirstUnReadMessageIndex;
- (unsigned long long)getFirstUnReadSplitNodeIndex;
- (void)onScrollToFirstUnReadMsg;
- (void)tryAddUnReadSplitNode;
- (void)updateFirstUnReadButtonOnShowBanner:(double)arg1;
- (void)animateHideFirstUnReadButton;
- (void)animateShowFirstUnReadButton;
- (void)tryShowFirstUnReadButtonAnimated;
- (void)onTrySHowFirstUnReadButton;
- (double)getVisibleHeight;
- (double)getTableViewVisibleHeightWithOrientation:(long long)arg1;
- (void)viewWillBePresented:(_Bool)arg1;
- (void)viewWillBeDismissed:(_Bool)arg1;
- (void)willShow;
- (void)viewDidBeDismissed:(_Bool)arg1;
- (void)viewDidBePresented:(_Bool)arg1;
- (void)viewWillPresent:(_Bool)arg1;
- (void)viewWillBePushed:(_Bool)arg1;
- (void)viewWillBePoped:(_Bool)arg1;
- (void)viewWillPop:(_Bool)arg1;
- (void)removeVoipAndPhoneTip;
- (void)removeVoiceTip;
- (void)viewDidBePushed:(_Bool)arg1;
- (_Bool)willMoveToMainFrame;
- (void)tryMoveToMainFrame;
- (void)viewDidPop:(_Bool)arg1;
- (void)viewDidBePoped:(_Bool)arg1;
- (void)onViewDisappear;
- (void)willDisshow;
- (void)willAppear;
- (void)statEnterMsgChat;
- (void)didExitRoom;
- (void)willEnterRoom;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidPush:(_Bool)arg1;
- (void)viewWillPush:(_Bool)arg1;
- (id)tagForCurrentPage;
- (id)tagForActivePage;
- (void)viewDidAppear:(_Bool)arg1;
- (_Bool)isUseDefaultChatBkgImage;
- (void)onChatBackgroundChanged:(id)arg1;
- (_Bool)shouldInteractivePop;
- (void)willDismissAndShow;
- (void)viewWillAppear:(_Bool)arg1;
- (void)trySetInputToolviewFirstResponder;
- (void)fixInputToolViewKeyboard;
- (void)SetVoiceEnabled:(_Bool)arg1;
- (id)GetContact;
- (void)updateMessageNodeStatus:(id)arg1;
- (void)onDeleteMessage:(id)arg1;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)handleDeleteAllMessage;
- (void)deleteAllMessage;
- (void)handleAfterDeleteAllMessage;
- (void)onHideMultiSelectView;
- (void)onFinishMultiSelect:(id)arg1;
- (void)onReturn:(id)arg1;
- (void)onEditMessage:(id)arg1;
- (void)updateDeleteCount;
- (void)sendShortVideoMsg:(id)arg1 thumbImg:(id)arg2 statInfo:(id)arg3 editVideoAttr:(id)arg4;
- (void)sendShortVideoMsg:(id)arg1 thumbImg:(id)arg2 statInfo:(id)arg3;
- (void)onSightPictureTaken:(id)arg1 imageData:(id)arg2 withFrontCamera:(_Bool)arg3 editImageAttr:(id)arg4;
- (void)onShortVideoTaken:(id)arg1 thumbImg:(id)arg2 sentImmediately:(_Bool)arg3 isMuted:(_Bool)arg4 editVideoAttr:(id)arg5;
- (id)chatUserNameForSightStatistics;
- (void)onTextDeleteAll;
- (_Bool)hasCardPkgEntry;
- (_Bool)hasGroupPayEntry;
- (_Bool)hasRedEnvelopesEntry;
- (_Bool)hasTransferMoneyEntry;
- (id)getMsgSendOpEntry;
- (_Bool)hasServiceEntry;
- (id)getServiceAppList;
- (id)getAttachmentViewServiceAppList;
- (void)openServiceApp:(id)arg1;
- (void)redEnvelopesLogic;
- (void)transferMoneyLogic;
- (void)openServiceAppListController;
- (void)onOpenMyCardPkgViewController;
- (void)openMyFavoritesListController;
- (_Bool)canShowFileBrowser;
- (_Bool)canShowSight;
- (void)onOpenTrackRoom:(unsigned int)arg1;
- (_Bool)shouldShowOpenTrackRoom;
- (void)onSendTextMsg:(id)arg1;
- (void)editStreamVoiceTxtDone;
- (void)editStreamVoiceTxtReturn;
- (void)showStreamVoiceInputMaskView:(_Bool)arg1;
- (void)streamVoiceInputFullScreenExit;
- (void)streamVoiceInputFullScreenEnter;
- (void)streamVoiceInputFullScreenWillEnter;
- (void)streamVoiceInputBoardDidHide;
- (void)streamVoiceInputBoardWillHideWithText:(id)arg1;
- (void)streamVoiceInputBoardDidShow;
- (void)streamVoiceInputViewHeightChanged;
- (void)onStreamVoiceInputButtonClick;
- (void)onGroupPayButtonClick;
- (void)onSelectLocation;
- (void)onVideoVoipInvite;
- (void)onVoipInvite;
- (void)doJoinExistMultiTalk;
- (void)onMultiTalkButtonClick;
- (void)onShareCard;
- (void)SendEmoticonMesssageToolView:(id)arg1;
- (void)openCameraController;
- (void)openFileBrowser;
- (void)openMediaBrowser;
- (void)CancelRecording;
- (void)StopRecording;
- (_Bool)StartRecording;
- (void)TextDidChanged:(id)arg1 selectedRange:(struct _NSRange)arg2;
- (void)willShowMenuController:(id)arg1;
- (_Bool)shouldHideToolViewOnKeyboardHide;
- (void)onToolViewDidMoveToWindow;
- (void)reloadMessagesInternal;
- (void)onPositionModeChangeTo:(int)arg1 Animated:(_Bool)arg2;
- (void)HasCustomInputToolViewAndDontNeedShowToolView:(_Bool *)arg1;
- (void)ToolViewPositionDidChanged:(_Bool)arg1 animated:(_Bool)arg2;
- (void)adjustTableViewRect;
- (void)updateTableContentOffsetAnimated:(_Bool)arg1 OffsetDelta:(double)arg2;
- (void)scrollTableToBottomAnimated:(_Bool)arg1 init:(_Bool)arg2;
- (void)updateTableLayoutAnimateDuration:(double)arg1 Orientation:(long long)arg2;
- (void)SendEmojiArtMessageToolView:(id)arg1;
- (void)SendTextMessageToolView:(id)arg1;
- (void)AsyncSendMessage:(id)arg1;
- (id)getCurrentChatName;
- (void)sendCaptruedImage:(id)arg1;
- (void)pasteImage:(id)arg1;
- (_Bool)shouldInitWXEmoticonView;
- (void)onTouchDown;
- (void)touchesEnded_TableView:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan_TableView:(id)arg1 withEvent:(id)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)onPan:(id)arg1;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewWillBeginDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)tableView:(id)arg1 didEndDisplayingCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (_Bool)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)indexPathForCellKey:(id)arg1;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)didFinishedLoading:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)makeCell:(id)arg1 indexPath:(id)arg2;
- (void)viewDidLayoutSubviews;
- (void)initView;
- (void)adjustTableViewOffset;
- (void)reloadBackgroundView;
- (void)initSearchBar;
- (void)resetMsgSearchHelper;
- (void)initMsgSearchHelper:(int)arg1;
- (double)getSearchBarHeight;
- (_Bool)showTrackExitAlert;
- (void)onBackButtonClicked:(id)arg1;
- (void)initNavigationView;
- (void)updateRightBar;
- (id)getLeftBarButton;
- (id)getRightBarButton;
- (void)openHomePage:(id)arg1;
- (void)openVoiceCall;
- (void)openVideoCall;
- (id)getVoipBarButton;
- (id)getHomePageBarButton;
- (void)initMultiSelectToolView;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldBeRequiredToFailByGestureRecognizer:(id)arg2;
- (_Bool)isViewControllerAnimated;
- (_Bool)ShouldShowKeyboardAnimation;
- (void)initToolView;
- (void)initToolEmoticonView;
- (void)initTableView;
- (void)reloadTableHeaderView:(_Bool)arg1;
- (void)startVoiceAnimatingAtNodeId:(unsigned int)arg1;
- (void)initTableHeaderView;
- (void)updateOpBtnState:(_Bool)arg1;
- (void)MoreMsgBtnUpdate:(unsigned int)arg1 unReadCount:(unsigned int)arg2;
- (void)initData;
- (void)initDeepLinkConfig;
- (void)onLoadDownMoreMessage:(id)arg1;
- (_Bool)canBecomeFirstResponder;
- (void)setTableFooterView:(_Bool)arg1;
- (void)onLoadFirstUnreadMsg:(id)arg1;
- (void)onLoadFirstScreenMsg:(_Bool)arg1;
- (void)onLoadMessageFail;
- (void)onLoadMoreMessage;
- (void)initHistroyMessageNodeData;
- (void)addMessageNode:(id)arg1 layout:(_Bool)arg2 addMoreMsg:(_Bool)arg3;
- (void)OnRevokeMsg:(id)arg1 MsgWrap:(id)arg2 ResultCode:(unsigned int)arg3 ResultMsg:(id)arg4 EducationMsg:(id)arg5;
- (void)OnMsgRevoked:(id)arg1 n64MsgId:(long long)arg2;
- (id)addSplitNode:(id)arg1 addMoreMsg:(_Bool)arg2;
- (void)addTimeNode:(id)arg1 layout:(_Bool)arg2 addMoreMsg:(_Bool)arg3;
- (id)getMessageChatContactByMessageWrap:(id)arg1;
- (_Bool)isShowHeadImage:(id)arg1;
- (void)contactInfoReturn;
- (void)newMessageFromContactInfo:(id)arg1;
- (void)addToContactsFromContactInfo:(id)arg1;
- (void)scheduleOnMsg:(id)arg1;
- (void)showAlertWithTitle:(id)arg1;
- (void)onClickTextFloatPreView:(id)arg1;
- (void)switchEarMode;
- (void)jumpToUserProfile:(id)arg1 Displayname:(id)arg2 Scence:(unsigned int)arg3 fromBanner:(_Bool)arg4;
- (void)jumpToUserProfile:(id)arg1 Displayname:(id)arg2 Scence:(unsigned int)arg3;
- (void)onMassSendSendAgain:(id)arg1;
- (void)onForwardMessageOK;
- (void)onHideKeyboard;
- (void)onScrollToBottom;
- (void)tagLink:(id)arg1 messageWrap:(id)arg2;
- (void)deleteMail:(id)arg1;
- (void)longPressOnHeadImageForDebug:(id)arg1;
- (void)longPressOnHeadImage:(id)arg1;
- (_Bool)canLongPressOnHeadImage:(id)arg1;
- (_Bool)isMsgSelected:(id)arg1;
- (void)deleteNode:(id)arg1;
- (_Bool)isMsgCanRevoke:(id)arg1;
- (_Bool)isMsgLastSend:(id)arg1;
- (id)getLastSentMsg;
- (_Bool)isChatStatusNotifyOpen;
- (void)shareMsgToOpenSDKByNodeView:(id)arg1;
- (void)onClickPlayMusicBtn:(id)arg1 isPlay:(_Bool)arg2;
- (void)onClickFavMenu:(id)arg1;
- (void)onClickVoiceTranslate:(id)arg1;
- (void)onClickTranslateMsg:(id)arg1 translateInfo:(id)arg2;
- (void)revokeMsgByNodeView:(id)arg1;
- (void)StartDownloadShortVideo:(id)arg1;
- (void)StartDownloadVideo:(id)arg1 DownloadMode:(unsigned long long)arg2;
- (void)StartDownloadVideo:(id)arg1;
- (void)StartUploadVideo:(id)arg1;
- (void)StopDownloadVideo:(id)arg1;
- (void)StopUploadVideo:(id)arg1;
- (struct CGRect)getInputToolViewFrame;
- (struct CGRect)getNodeRectInScreen:(unsigned int)arg1;
- (id)GetMessageNodeDataArray;
- (id)GetMessagesWrapArray;
- (void)ShowVolumeTips;
- (void)ShowEarTips;
- (void)ShowEarBackTips;
- (void)StopPlayingNodeView:(unsigned int)arg1;
- (void)StartPlayingNodeView:(unsigned int)arg1;
- (void)EndPlaying:(id)arg1;
- (void)OnEndPlaying:(id)arg1;
- (void)showPlayVoiceTipsIfNeed;
- (void)BeginPlaying:(id)arg1 FromTouch:(_Bool)arg2;
- (void)SetMsgPlayed:(id)arg1;
- (void)setSecurityTipShow:(_Bool)arg1;
- (void)setAddFriendTipShow:(_Bool)arg1 contact:(id)arg2;
- (void)showAddFriendTip:(_Bool)arg1;
- (double)getSecurityBannerTipHeight;
- (double)getAddFriendTipHeight;
- (double)getTipsHeight;
- (void)checkShowSecurityBannerTip:(_Bool)arg1;
- (void)checkShowRecommandFriendTip:(_Bool)arg1;
- (void)checkTips:(_Bool)arg1;
- (void)onReceiveSecurityBannerMsg:(id)arg1 withData:(id)arg2;
- (void)onShareVideoToTimeline:(_Bool)arg1;
- (void)onShareVideoToFriend:(id)arg1;
- (void)onClickFavVideoMenu;
- (void)onClosePlayerForViewDetail:(id)arg1;
- (void)jumpToDetail:(id)arg1;
- (void)onClosePlayer;
- (_Bool)stopAtLastVideoFrameWhenPlayEnd;
- (void)JumpToViewStreamVideo:(id)arg1;
- (void)onMultiSelectContactReturn:(id)arg1;
- (id)contactShareMsgFromUser:(id)arg1 toUser:(id)arg2 sharedContact:(id)arg3;
- (void)clickNewAASysMsg:(id)arg1 withMsgLocalID:(unsigned int)arg2;
- (void)clickEditRevokeContentSysMsg:(id)arg1;
- (void)clickLinkToDealWithSysXml:(id)arg1 fromScene:(id)arg2;
- (void)clickWeAppReceiveSessionMsg;
- (void)clickReceiveBrandMsg;
- (void)clickShieldBrandMsg;
- (void)clickLinkToExpose;
- (void)onExposeTemplateMsg:(id)arg1;
- (void)onPerformIconAction:(id)arg1;
- (void)onPerformExposeAction:(id)arg1;
- (void)showExposeViewController;
- (void)onPerformAction:(id)arg1;
- (void)onTipsViewClose:(id)arg1;
- (void)onTipsViewClick:(id)arg1;
- (void)showEarModeTips;
- (void)readerViewClickedWithMsg:(id)arg1;
- (void)headerImageClickedWithMsg:(id)arg1;
- (void)headerImageClicked:(id)arg1;
- (void)PlayVideo:(id)arg1 soundable:(_Bool)arg2;
- (void)tapAppNodeView:(id)arg1;
- (void)tapFriendCard_NodeView:(id)arg1 WithContact:(id)arg2 WithMsg:(id)arg3;
- (void)tapPushMail_NodeView:(id)arg1 withPushMailWrap:(id)arg2;
- (void)tapImage_NodeView:(id)arg1 needEditImage:(_Bool)arg2;
- (void)tapImage_NodeView:(id)arg1;
- (void)tapLocation_NodeView:(id)arg1;
- (void)tapVideoStatus_NodeView:(id)arg1 DownloadMode:(unsigned long long)arg2;
- (void)tapVideoStatus_NodeView:(id)arg1;
- (void)tapStatus_NodeView:(id)arg1;
- (void)hasTapReaderNodeView;
- (id)getViewController;
- (void)updateTypingTitle:(id)arg1;
- (void)PreviewImage:(id)arg1 soundable:(_Bool)arg2 snapshotView:(id)arg3 needEdit:(_Bool)arg4;
- (void)PreviewImage:(id)arg1 soundable:(_Bool)arg2 snapshotView:(id)arg3;
- (void)PreviewImage:(id)arg1 needEdit:(_Bool)arg2;
- (void)PreviewImage:(id)arg1;
- (id)chatContactForMessageWrap:(id)arg1;
- (void)unHighLightSelectSearchCell;
- (void)highLightSelectSearchCell;
- (void)unHighLightSearchKeyWordInSelectCell;
- (void)highLightSearchKeyWordInSelectCell;
- (void)didSelectSearchResultForMessageWrap:(id)arg1 indexPath:(id)arg2;
- (void)didSelectSearchResultForMessageWrap:(id)arg1;
- (void)locateToMsg:(id)arg1;
- (id)QueryMsgText:(id)arg1 FromID:(unsigned int)arg2 FromCreateTime:(unsigned int)arg3 Limit:(int)arg4 LeftCount:(unsigned int *)arg5;
- (id)getChatContact;
- (void)msgSearchBarSearchByIndex:(long long)arg1;
- (void)msgSearchBarSearchByVideo;
- (void)msgSearchBarSearchByPicture;
- (void)msgSearchBarSearchByTime;
- (void)msgSearchBarSearchByName;
- (void)msgSearchBarDoSearch;
- (void)msgSearchBarCancel;
- (id)getParentTableView;
- (void)deleteNode:(id)arg1 withDB:(_Bool)arg2 animated:(_Bool)arg3;
- (void)openChatInfo:(id)arg1;
- (void)tryScrollToBottomAnimated:(_Bool)arg1;
- (_Bool)isScrollToBottom;
- (void)ScrollToTopAnimated:(_Bool)arg1;
- (void)ScrollToBottomAnimated:(_Bool)arg1;
- (void)ScrollToBottomAnimatedAndLoadMoreNode;
- (void)updateTitleView:(id)arg1;
- (void)viewDidTransitionToNewSize;
- (id)getTitleLableViewWithMaxWidth:(double)arg1 title:(id)arg2;
- (id)getTitleLableViewWithMaxWidth:(double)arg1 title:(id)arg2 fontSize:(double)arg3;
- (void)locateTableViewWithLocalID:(unsigned int)arg1;
- (unsigned long long)getMsgContentSizeHeight:(unsigned int)arg1;
- (unsigned long long)getCurContentSizeHeight;
- (unsigned long long)getLastNodePreContentSizeHeight;
- (id)findNodeViewByLocalId:(unsigned int)arg1;
- (id)findNodeDataByLocalId:(unsigned int)arg1;
- (void)reloadNodeWithMessageWrap:(id)arg1;
- (void)removeObjectsFromMessageNodeDatas:(id)arg1;
- (void)removeAllObjectsFromMessageNodeDatas;
- (unsigned long long)findNodeIndexByLocalId:(unsigned int)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

