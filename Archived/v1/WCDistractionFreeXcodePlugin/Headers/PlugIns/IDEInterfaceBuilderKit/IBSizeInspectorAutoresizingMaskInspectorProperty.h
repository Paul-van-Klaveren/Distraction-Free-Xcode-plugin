//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <IDEInterfaceBuilderKit/IBAbstractSizeInspectorProperty.h>

@class IBFillView, IBViewResizingDiagram, IDEInspectorKeyPath, NSButton, NSDate, NSImageView, NSTimer, NSTrackingArea, NSView;

@interface IBSizeInspectorAutoresizingMaskInspectorProperty : IBAbstractSizeInspectorProperty
{
    IBFillView *animationStageFrame;
    NSImageView *desktopBackgroundImageView;
    NSView *autosizingControlArea;
    NSButton *minXStrut;
    NSButton *minYStrut;
    NSButton *maxXStrut;
    NSButton *maxYStrut;
    NSButton *widthSpring;
    NSButton *heightSpring;
    IBViewResizingDiagram *resizingDiagram;
    NSDate *animationStart;
    NSDate *animationEnd;
    NSTimer *animationTimer;
    NSTrackingArea *mouseTrackingArea;
    BOOL mouseIsInTrackingArea;
    BOOL inspectorIsActive;
    BOOL applicationIsActive;
    CDUnknownBlockType currentFrameAnimator;
    CDUnknownBlockType previousFrameAnimator;
    struct CGRect initialDiagramObjectFrame;
    struct CGRect initialDiagramContainerFrame;
    struct CGRect finalDiagramContainerFrame;
    IDEInspectorKeyPath *_valueKeyPath;
}

- (void).cxx_destruct;
- (void)resetAutoresizingDemonstrationAnimation:(id)arg1;
- (void)appDidDeactivate:(id)arg1;
- (void)appDidActivate:(id)arg1;
- (void)mouseExited:(id)arg1;
- (void)mouseEntered:(id)arg1;
- (id)viewsToTriggerSizingAnimation;
- (CDUnknownBlockType)frameAnimatorForObjects:(id)arg1;
- (void)animate:(id)arg1;
- (void)updateAnimationProgress:(double)arg1;
- (void)startAnimatingIfNeeded;
- (BOOL)shouldStartOrKeepAnimating:(long long)arg1;
- (void)installTimer;
- (void)abortAnimating;
- (void)applyAutoresizingMask:(id)arg1;
- (void)refreshAutoSizingButtons;
- (unsigned long long)specializeAutoresizingMask:(unsigned long long)arg1 forView:(id)arg2;
- (unsigned long long)normalizeAutoresizingMask:(unsigned long long)arg1 forView:(id)arg2;
- (double)baseline;
- (void)refresh;
- (void)setupRefreshTriggersAndConfigure;
- (void)propertyViewWillUninstallFromContentView;
- (void)propertyViewDidInstallIntoContentView;
- (void)loadView;

@end

