//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class EditVideoAttr, EditVideoBGMSelectedMusicInfo, EditVideoInitialView, NSString, UIImage, UIViewController;

@protocol EditVideoInitialViewDelegate <NSObject>
- (UIViewController *)currentViewController;
- (NSString *)getAssetUrl;
- (CDStruct_e83c9415)getEditedVideoTimeRange;
- (struct CGSize)getImageRatioSize;
- (float)getOutputTime;
- (UIImage *)getThumbImage;
- (EditVideoAttr *)getVideoAttr;
- (_Bool)isExceedTimelineTimeLimit;
- (void)onChooseVideoBGMDone:(EditVideoBGMSelectedMusicInfo *)arg1;
- (void)onClickEditVideoCancelButton;
- (void)onClickEditVideoDoneButton;
- (void)onCropCancel;
- (void)onCropDone:(CDStruct_e83c9415)arg1;
- (void)onCropTimeChange:(CDStruct_e83c9415)arg1;
- (void)onOriginSoundChange:(_Bool)arg1;
- (void)onSeekTime:(double)arg1;
- (void)onStartEditVideo:(EditVideoInitialView *)arg1;
@end
