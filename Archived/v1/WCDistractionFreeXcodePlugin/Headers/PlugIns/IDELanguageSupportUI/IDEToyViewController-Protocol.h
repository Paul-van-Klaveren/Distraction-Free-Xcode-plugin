//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "DVTInvalidation.h"
#import "NSObject.h"

@class IDEToy, NSDate, NSString;

@protocol IDEToyViewController <NSObject, DVTInvalidation>
@property(retain, nonatomic) id <IDEToyViewControllerDelegate> delegate;
@property(copy) NSDate *resultDisplayDate;
@property(readonly, copy) NSString *titleForDisplay;
@property(readonly) IDEToy *toy;
@end

