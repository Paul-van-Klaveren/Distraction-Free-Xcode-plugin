//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IDEDistributionMethod;

@interface _IDEDistributionMethodUIWrapper : NSObject
{
    BOOL _selected;
    IDEDistributionMethod *_distributionMethod;
}

+ (id)wrapperForDistributionMethod:(id)arg1;
@property(getter=isSelected) BOOL selected; // @synthesize selected=_selected;
@property(readonly) IDEDistributionMethod *distributionMethod; // @synthesize distributionMethod=_distributionMethod;
- (void).cxx_destruct;
@property(readonly, getter=isGroup) BOOL group;

@end

