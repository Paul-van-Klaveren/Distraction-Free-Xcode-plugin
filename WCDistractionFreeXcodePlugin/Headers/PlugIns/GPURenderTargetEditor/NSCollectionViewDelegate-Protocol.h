//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSCollectionView, NSDraggingSession, NSEvent, NSImage, NSIndexSet, NSPasteboard, NSURL;

@protocol NSCollectionViewDelegate <NSObject>

@optional
- (void)collectionView:(NSCollectionView *)arg1 updateDraggingItemsForDrag:(id <NSDraggingInfo>)arg2;
- (void)collectionView:(NSCollectionView *)arg1 draggingSession:(NSDraggingSession *)arg2 endedAtPoint:(struct CGPoint)arg3 dragOperation:(unsigned long long)arg4;
- (void)collectionView:(NSCollectionView *)arg1 draggingSession:(NSDraggingSession *)arg2 willBeginAtPoint:(struct CGPoint)arg3 forItemsAtIndexes:(NSIndexSet *)arg4;
- (id <NSPasteboardWriting>)collectionView:(NSCollectionView *)arg1 pasteboardWriterForItemAtIndex:(unsigned long long)arg2;
- (BOOL)collectionView:(NSCollectionView *)arg1 acceptDrop:(id <NSDraggingInfo>)arg2 index:(long long)arg3 dropOperation:(long long)arg4;
- (unsigned long long)collectionView:(NSCollectionView *)arg1 validateDrop:(id <NSDraggingInfo>)arg2 proposedIndex:(long long *)arg3 dropOperation:(long long *)arg4;
- (NSImage *)collectionView:(NSCollectionView *)arg1 draggingImageForItemsAtIndexes:(NSIndexSet *)arg2 withEvent:(NSEvent *)arg3 offset:(struct CGPoint *)arg4;
- (NSArray *)collectionView:(NSCollectionView *)arg1 namesOfPromisedFilesDroppedAtDestination:(NSURL *)arg2 forDraggedItemsAtIndexes:(NSIndexSet *)arg3;
- (BOOL)collectionView:(NSCollectionView *)arg1 writeItemsAtIndexes:(NSIndexSet *)arg2 toPasteboard:(NSPasteboard *)arg3;
- (BOOL)collectionView:(NSCollectionView *)arg1 canDragItemsAtIndexes:(NSIndexSet *)arg2 withEvent:(NSEvent *)arg3;
@end
