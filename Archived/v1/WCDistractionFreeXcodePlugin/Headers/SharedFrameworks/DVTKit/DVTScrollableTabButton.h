//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <DVTKit/DVTScrollableTabBarViewButton.h>

#import "NSTextFieldDelegate.h"

@class DVTRolloverImageButton, DVTTabBarClippedItemsIndicator, NSArray, NSImage, NSImageView, NSLayoutConstraint, NSString, NSText, NSTextField, NSView, NSWindow;

@interface DVTScrollableTabButton : DVTScrollableTabBarViewButton <NSTextFieldDelegate>
{
    NSString *_title;
    NSTextField *_titleTextField;
    NSImageView *_errorIndicator;
    NSView *_focusRingView;
    NSTextField *_userRenameTabField;
    NSView *_mainContentContainer;
    NSText *_editor;
    NSLayoutConstraint *_mainContentContainerWidthConstraint;
    NSLayoutConstraint *_mainContentContainerLeadingConstraint;
    NSLayoutConstraint *_mainContentContainerTrailingConstraint;
    NSLayoutConstraint *_mainContentContainerHorizontalCenteringConstraint;
    DVTTabBarClippedItemsIndicator *_clippedItemsIndicator;
    NSArray *_clippedItemsIndicatorConstraints;
    NSImage *_tabDragImage;
    NSImage *_miniWindowDragImage;
    struct CGRect _miniWindowStartFrame;
    struct CGRect _miniWindowEndFrame;
    NSWindow *_miniWindowDragWindow;
    NSWindow *_miniWindowTabbedWindow;
    struct CGAffineTransform _originalBrowserTransform;
    BOOL _isRenamingTab;
    BOOL _showingAlertSymbol;
    BOOL _showingCloseButton;
    BOOL _showingClippedItemsIndicator;
    DVTRolloverImageButton *_closeButton;
    SEL _closeAction;
    SEL _becomeFirstResponderAction;
    double _buttonWidthForTitleLayout;
    double _titleCenterOffset;
}

+ (id)titleFont;
+ (double)titleWidthForButtonWidth:(double)arg1;
@property(nonatomic) double titleCenterOffset; // @synthesize titleCenterOffset=_titleCenterOffset;
@property(nonatomic) double buttonWidthForTitleLayout; // @synthesize buttonWidthForTitleLayout=_buttonWidthForTitleLayout;
@property(nonatomic, getter=isShowingClippedItemsIndicator) BOOL showingClippedItemsIndicator; // @synthesize showingClippedItemsIndicator=_showingClippedItemsIndicator;
@property(nonatomic, getter=isShowingCloseButton) BOOL showingCloseButton; // @synthesize showingCloseButton=_showingCloseButton;
@property(nonatomic, getter=isShowingAlertSymbol) BOOL showingAlertSymbol; // @synthesize showingAlertSymbol=_showingAlertSymbol;
@property(nonatomic) SEL becomeFirstResponderAction; // @synthesize becomeFirstResponderAction=_becomeFirstResponderAction;
@property(nonatomic) SEL closeAction; // @synthesize closeAction=_closeAction;
@property(readonly) DVTRolloverImageButton *closeButton; // @synthesize closeButton=_closeButton;
- (void).cxx_destruct;
- (void)stopEditingTabName;
- (BOOL)control:(id)arg1 textView:(id)arg2 doCommandBySelector:(SEL)arg3;
- (void)controlTextDidEndEditing:(id)arg1;
- (void)_stopEditingAndUninstallEditor;
- (void)startEditingTabName;
- (BOOL)resignFirstResponder;
- (BOOL)becomeFirstResponder;
- (void)updateConstraints;
- (void)updateLayer;
- (void)setState:(long long)arg1;
- (void)setTitle:(id)arg1;
- (id)title;
- (void)_growMiniWindowForDetachedTabWithDragController:(id)arg1;
- (void)_customGrowMiniWindowForDetachedTabWithDragController:(id)arg1 newTabbedWindowController:(id)arg2;
- (void)_growMiniWindow:(id)arg1;
- (void)morphingDragImageEnded:(id)arg1;
- (void)morphingDragImage:(id)arg1 wasDroppedAtPointOnScreen:(struct CGPoint)arg2;
- (void)morphingDragImage:(id)arg1 movedToPointOnScreen:(struct CGPoint)arg2;
- (double)_miniWindowDragImageWidth;
- (id)miniWindowDragImage;
- (id)tabDragImage;
- (struct CGSize)maximumDragImageSize;
- (id)_titleStringAttributesForMainWindow:(BOOL)arg1 activeTab:(BOOL)arg2;
- (void)_updateTitleTextField;
- (void)_updateErrorIndicatorImage;
- (void)_updateCloseButtonImages;
- (void)setShowingCloseButton:(BOOL)arg1 animated:(BOOL)arg2;
- (void)_createClippedItemsIndicatorConstraintsIfNecessary;
- (void)_createdClippedItemsIndicatorIfNecessary;
- (void)_closeButtonClicked:(id)arg1;
- (void)destroy;
- (void)_updateAccessibilityAttributes;
- (void)_setUpConstraints;
- (void)_updateTitleContainerConstraints;
- (void)setAlignment:(unsigned long long)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 tabViewItem:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

