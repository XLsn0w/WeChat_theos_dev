//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface MMWebViewPerformanceTimeRecord : NSObject
{
    _Bool _isNewCategory;
    NSString *_name;
    unsigned long long _timeInMs;
    unsigned long long _sequence;
    NSString *_detail;
}

- (void).cxx_destruct;
- (id)descriptionWithStartTime:(unsigned long long)arg1;
@property(copy, nonatomic) NSString *detail; // @synthesize detail=_detail;
@property(nonatomic) _Bool isNewCategory; // @synthesize isNewCategory=_isNewCategory;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(nonatomic) unsigned long long sequence; // @synthesize sequence=_sequence;
@property(nonatomic) unsigned long long timeInMs; // @synthesize timeInMs=_timeInMs;
- (long long)timeCompare:(id)arg1;

@end
