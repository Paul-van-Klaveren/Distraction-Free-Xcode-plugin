//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSMutableSet.h"

#import "IBMutableCollection.h"

@class NSString;

@interface NSMutableSet (IBMutableSetAdditions) <IBMutableCollection>
+ (id)ib_setWithCollection:(id)arg1;
- (void)ib_removeObjectsInCollection:(id)arg1;
- (void)ib_addObjectIfNonNil:(id)arg1;
- (void)ib_appendObjects:(id)arg1;
- (id)ib_popAnyObject;
- (id)ib_objectsOfClass:(Class)arg1;
- (void)ib_addObjectsFromCollection:(id)arg1;
- (void)ib_removeObjectsPassingTest:(CDUnknownBlockType)arg1;
- (void)ib_removeObjectsFromCollection:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

