//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSEvent, XCSUIBotSummaryStackedBarGraphColumn, XCSUIStackedBarChartViewController;

@protocol XCSUIStackedBarChartViewControllerDelegate <NSObject>
- (void)stackedBarChartViewController:(XCSUIStackedBarChartViewController *)arg1 userClickedOnGraphColumn:(XCSUIBotSummaryStackedBarGraphColumn *)arg2 event:(NSEvent *)arg3;
- (void)stackedBarChartViewController:(XCSUIStackedBarChartViewController *)arg1 userMousedOverGraphColumn:(XCSUIBotSummaryStackedBarGraphColumn *)arg2 event:(NSEvent *)arg3;
- (void)stackedBarChartViewController:(XCSUIStackedBarChartViewController *)arg1 userMouseExitedGraph:(id)arg2 event:(NSEvent *)arg3;
@end

