//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@interface IDEBatchFindScopeRuleRow : NSObject <NSCopying>
{
    id <IDEBatchFindScopeRuleRowDelegate> _delegate;
}

@property(retain) id <IDEBatchFindScopeRuleRowDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)criteriaNodesForMatchingPredicate:(id)arg1;
- (id)predicateForIndexPath:(id)arg1;
- (id)displayValueForPath:(id)arg1;
- (long long)childCountForIndexPath:(id)arg1;
- (void)rowChanged:(id)arg1;
- (void)_delayedChangedDisplayValue:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end
