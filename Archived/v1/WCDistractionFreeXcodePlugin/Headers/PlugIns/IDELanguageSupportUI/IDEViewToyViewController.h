//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IDEViewController.h"

#import "IDEToyViewController.h"

@class CALayer, CAPluginLayer, DVTObservingToken, DVTStackBacktrace, IDEToy, IDEViewToy, NSDate, NSString, NSView;

@interface IDEViewToyViewController : IDEViewController <IDEToyViewController>
{
    DVTObservingToken *_remoteViewStateObservingToken;
    DVTObservingToken *_remoteViewDescriptionObservingToken;
    NSView *_layerContainerView;
    CAPluginLayer *_pluginLayer;
    CALayer *_snapshotLayer;
    CDStruct_b590ebd7 _delegateRespondsTo;
    NSDate *_resultDisplayDate;
    id <IDEToyViewControllerDelegate> _delegate;
    IDEViewToy *_viewToy;
}

+ (id)keyPathsForValuesAffectingToy;
@property(readonly) IDEViewToy *viewToy; // @synthesize viewToy=_viewToy;
@property(retain, nonatomic) id <IDEToyViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy) NSDate *resultDisplayDate; // @synthesize resultDisplayDate=_resultDisplayDate;
- (void).cxx_destruct;
- (void)primitiveInvalidate;
- (void)viewWillUninstall;
- (void)viewDidInstall;
- (void)updateViewForRemoteViewSize:(struct CGSize)arg1;
- (void)loadView;
- (void)switchToLayer:(id)arg1;
@property(readonly, copy) NSString *titleForDisplay;
- (void)preflightDelegateRespondsToSelectorChecks;
@property(readonly) IDEToy *toy;
- (id)initWithViewToy:(id)arg1;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly) Class superclass;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end

