//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMAssetConfigObject.h"

@interface MMAssetTimeLineConfig : MMAssetConfigObject
{
    _Bool _useHighResolutionImageSize;
}

+ (id)ConfigInstance;
- (double)compressQuality;
- (struct CGSize)imageSizeLimit;
- (_Bool)isRetrivingOriginImage;
@property(nonatomic) _Bool useHighResolutionImageSize; // @synthesize useHighResolutionImageSize=_useHighResolutionImageSize;
- (_Bool)shouldCompressLongImage;

@end
