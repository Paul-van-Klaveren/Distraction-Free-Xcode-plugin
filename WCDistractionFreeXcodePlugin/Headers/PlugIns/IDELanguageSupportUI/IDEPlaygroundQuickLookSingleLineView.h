//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSView.h"

@class NSTextField;

@interface IDEPlaygroundQuickLookSingleLineView : NSView
{
    NSView *_iconView;
    NSTextField *_label;
}

@property(readonly) NSTextField *label; // @synthesize label=_label;
@property(readonly) NSView *iconView; // @synthesize iconView=_iconView;
- (void).cxx_destruct;
- (id)_createLabel;
- (void)_rebuildUsingQuickLookProvider:(id)arg1;
- (void)_updateUsingQuickLookProvider:(id)arg1;
- (id)_initWithFrame:(struct CGRect)arg1 quickLookProvider:(id)arg2;

@end
