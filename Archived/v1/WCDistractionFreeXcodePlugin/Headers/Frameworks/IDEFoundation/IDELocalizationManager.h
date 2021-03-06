//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "DVTInvalidation.h"

@class DVTObservingToken, DVTStackBacktrace, IDELocalizationManagerContext, IDEWorkspace, NSObject<IDELocalizationController><DVTInvalidation>, NSObject<IDELocalizationWorkProgress>, NSString;

@interface IDELocalizationManager : NSObject <DVTInvalidation>
{
    IDELocalizationManagerContext *_context;
    NSObject<IDELocalizationController><DVTInvalidation> *_controller;
    id <IDEClientTrackingToken> _token;
    DVTObservingToken *_controllerCompleteObserver;
    IDEWorkspace *_workspace;
}

+ (id)keyPathsForValuesAffectingCurrentLocalizationProgress;
+ (void)initialize;
@property(retain) IDEWorkspace *workspace; // @synthesize workspace=_workspace;
@property(retain) DVTObservingToken *controllerCompleteObserver; // @synthesize controllerCompleteObserver=_controllerCompleteObserver;
@property(retain) id <IDEClientTrackingToken> token; // @synthesize token=_token;
@property(retain) NSObject<IDELocalizationController><DVTInvalidation> *controller; // @synthesize controller=_controller;
@property(retain) IDELocalizationManagerContext *context; // @synthesize context=_context;
- (void).cxx_destruct;
- (void)_complete;
@property(readonly) NSObject<IDELocalizationWorkProgress> *currentLocalizationProgress;
- (void)startLocalizationOperation:(id)arg1;
- (void)primitiveInvalidate;
- (id)initWithWorkspace:(id)arg1;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly) Class superclass;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end

