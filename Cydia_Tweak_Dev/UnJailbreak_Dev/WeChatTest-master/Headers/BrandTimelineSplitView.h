//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class CALayer, UILabel;

@interface BrandTimelineSplitView : UIView
{
    UILabel *_tipsLabel;
    CALayer *_leftLine;
    CALayer *_rightLine;
}

@property(retain, nonatomic) CALayer *rightLine; // @synthesize rightLine=_rightLine;
@property(retain, nonatomic) CALayer *leftLine; // @synthesize leftLine=_leftLine;
@property(retain, nonatomic) UILabel *tipsLabel; // @synthesize tipsLabel=_tipsLabel;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)internalInitWithWording:(id)arg1;
- (id)initWithTipsWording:(id)arg1;

@end
