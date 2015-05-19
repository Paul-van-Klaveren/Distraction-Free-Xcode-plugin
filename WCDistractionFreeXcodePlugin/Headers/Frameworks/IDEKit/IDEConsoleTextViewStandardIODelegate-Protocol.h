//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IDEConsoleTextView, NSString;

@protocol IDEConsoleTextViewStandardIODelegate <NSObject>
@property(readonly) BOOL tracksInputHistoryForDebugger;
- (void)showNextCommandFromHistory:(IDEConsoleTextView *)arg1;
- (void)showPreviousCommandFromHistory:(IDEConsoleTextView *)arg1 currentStringAfterPrompt:(NSString *)arg2;
- (void)consoleView:(IDEConsoleTextView *)arg1 didEndText:(NSString *)arg2 forDebugger:(BOOL)arg3 trackHistory:(BOOL)arg4;
@end
