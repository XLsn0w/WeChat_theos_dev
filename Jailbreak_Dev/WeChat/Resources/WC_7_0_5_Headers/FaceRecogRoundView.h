//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMUIView.h"

@class CALayer, UIImageView, UIView;

@interface FaceRecogRoundView : MMUIView
{
    struct CGRect _faceRoundFrame;
    CALayer *_shapeLayer;
    UIView *_previewView;
    UIView *_blurBkView;
    UIImageView *_blurView;
}

- (void).cxx_destruct;
- (void)attachPreviewLayer:(id)arg1;
@property(nonatomic) struct CGRect faceRoundFrame; // @synthesize faceRoundFrame=_faceRoundFrame;
- (id)initWithFrame:(struct CGRect)arg1 FaceFrame:(struct CGRect)arg2;
- (void)resetView;
- (void)showLoading:(_Bool)arg1 image:(id)arg2 scale:(double)arg3 completion:(CDUnknownBlockType)arg4;
- (void)showPreReflectLight;

@end
