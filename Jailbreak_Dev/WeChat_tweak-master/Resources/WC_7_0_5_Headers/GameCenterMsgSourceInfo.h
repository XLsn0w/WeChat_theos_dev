//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class GameJumpInfo, NSString;

@interface GameCenterMsgSourceInfo : NSObject
{
    _Bool _sourceClickable;
    NSString *_sourceName;
    GameJumpInfo *_sourceJumpInfo;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool sourceClickable; // @synthesize sourceClickable=_sourceClickable;
@property(retain, nonatomic) GameJumpInfo *sourceJumpInfo; // @synthesize sourceJumpInfo=_sourceJumpInfo;
@property(retain, nonatomic) NSString *sourceName; // @synthesize sourceName=_sourceName;

@end
