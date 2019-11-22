//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class MMBadgeView, MMCPLabel, MMGroupView, MMHeadImageView, MainFrameCellData, UIImageView, UILabel;

@interface MainFrameItemView : UIView
{
    MainFrameCellData *m_cellData;
    MMHeadImageView *m_frameHeadView;
    MMBadgeView *m_unreadCountView;
    MMCPLabel *m_nameLabel;
    MMCPLabel *m_descPostfix;
    UIImageView *m_namePostIconView;
    UILabel *m_timeLabel;
    UILabel *m_greenLabel;
    UIImageView *m_statusView;
    MMCPLabel *m_messageLabel;
    UIImageView *m_chatNotPushView;
    UIImageView *m_trackRoomTipsView;
    UIImageView *m_multiTalkIconView;
    UIImageView *m_multiTalkingView;
    UIImageView *m_starView;
    UIImageView *m_strongNotifactionIconView;
    MMGroupView *m_groupView;
}

- (void).cxx_destruct;
- (id)getLabelNameColor;
- (void)initDescLabel;
- (void)initGroupView;
- (void)initNameLabel;
- (void)initNamePostIconView;
- (void)initSubview;
- (id)initWithCellData:(id)arg1 frame:(struct CGRect)arg2;
- (_Bool)isShowPluginStatus;
- (void)layoutSubviews;
@property(retain, nonatomic) MainFrameCellData *m_cellData; // @synthesize m_cellData;
@property(retain, nonatomic) MMHeadImageView *m_frameHeadView; // @synthesize m_frameHeadView;
@property(retain, nonatomic) MMCPLabel *m_messageLabel; // @synthesize m_messageLabel;
@property(retain, nonatomic) MMCPLabel *m_nameLabel; // @synthesize m_nameLabel;
@property(retain, nonatomic) UIImageView *m_statusView; // @synthesize m_statusView;
@property(retain, nonatomic) UILabel *m_timeLabel; // @synthesize m_timeLabel;
- (void)quoteMessageLable:(id)arg1 prefixText:(id)arg2;
- (void)quoteMessageLable:(id)arg1 prefixText:(id)arg2 hasStar:(_Bool)arg3;
- (void)removeQuoteMessageLabel;
- (void)setLabelHighlighted:(_Bool)arg1;
- (void)updateBackgroundColor;
- (void)updateGroupView;
- (void)updateHeadView;
- (void)updateMessageForBrandHolder;
- (void)updateMessageForChatRoom;
- (void)updateMessageForSingle;
- (void)updateMessageLabel;
- (void)updateNameLabel;
- (void)updateNoneVoiceGreenLabelAndMsgLabel;
- (void)updateStarView;
- (void)updateStatusView;
- (void)updateTimeForTimer;
- (void)updateTimeLabel;
- (void)updateUnreadCountView;
- (void)updateWithCellData:(id)arg1;

@end
