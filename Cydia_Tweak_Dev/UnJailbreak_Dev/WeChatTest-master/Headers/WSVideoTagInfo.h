//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSString;

@interface WSVideoTagInfo : NSObject <NSCopying>
{
    unsigned int _actionType;
    unsigned int _category;
    NSString *_tagId;
    NSString *_tagWording;
    NSString *_nsUrl;
    NSString *_title;
    NSString *_subTitle;
}

+ (id)ArrayFromJSON:(id)arg1;
+ (id)FromDictionary:(id)arg1;
@property(retain, nonatomic) NSString *subTitle; // @synthesize subTitle=_subTitle;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) NSString *nsUrl; // @synthesize nsUrl=_nsUrl;
@property(nonatomic) unsigned int category; // @synthesize category=_category;
@property(nonatomic) unsigned int actionType; // @synthesize actionType=_actionType;
@property(retain, nonatomic) NSString *tagWording; // @synthesize tagWording=_tagWording;
@property(retain, nonatomic) NSString *tagId; // @synthesize tagId=_tagId;
- (void).cxx_destruct;
- (id)generateDictionary;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end
