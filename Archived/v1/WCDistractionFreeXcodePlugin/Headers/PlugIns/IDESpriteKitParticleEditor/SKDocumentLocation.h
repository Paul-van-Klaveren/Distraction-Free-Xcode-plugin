//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "DVTDocumentLocation.h"

@class SKNode;

@interface SKDocumentLocation : DVTDocumentLocation
{
    SKNode *_node;
}

@property(readonly) __weak SKNode *node; // @synthesize node=_node;
- (void).cxx_destruct;
- (id)description;
- (id)initWithDocumentURL:(id)arg1 withNode:(id)arg2;

@end

