//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WXPBGeneratedMessage.h"

@class CommentReplyList, NSString;

@interface BizComment : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSString *content; // @dynamic content;
@property(nonatomic) unsigned int createTime; // @dynamic createTime;
@property(nonatomic) unsigned int isElected; // @dynamic isElected;
@property(nonatomic) unsigned int isFromFriend; // @dynamic isFromFriend;
@property(nonatomic) unsigned int isFromMe; // @dynamic isFromMe;
@property(nonatomic) unsigned int isTop; // @dynamic isTop;
@property(nonatomic) unsigned int likeId; // @dynamic likeId;
@property(nonatomic) unsigned int likeNum; // @dynamic likeNum;
@property(nonatomic) unsigned int likeStatus; // @dynamic likeStatus;
@property(retain, nonatomic) NSString *logoUrl; // @dynamic logoUrl;
@property(retain, nonatomic) NSString *nickName; // @dynamic nickName;
@property(retain, nonatomic) NSString *openid; // @dynamic openid;
@property(nonatomic) unsigned int personalCommentId; // @dynamic personalCommentId;
@property(retain, nonatomic) CommentReplyList *reply; // @dynamic reply;
@property(nonatomic) unsigned int userCommentId; // @dynamic userCommentId;

@end
