//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary;

@interface WCCSSStyleExecuter : NSObject
{
    NSMutableDictionary *_dicStyleRule;
}

- (void).cxx_destruct;
- (void)applyRuleWithTarget:(id)arg1 value:(id)arg2 PropertySetter:(CDUnknownBlockType)arg3;
@property(retain, nonatomic) NSMutableDictionary *dicStyleRule; // @synthesize dicStyleRule=_dicStyleRule;
- (void)executeWithTarget:(id)arg1 cssStyles:(id)arg2;
- (id)init;

@end
