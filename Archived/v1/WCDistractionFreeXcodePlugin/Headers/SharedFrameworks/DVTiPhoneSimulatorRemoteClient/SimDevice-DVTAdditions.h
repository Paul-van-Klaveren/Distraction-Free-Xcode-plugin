//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SimDevice.h"

@interface SimDevice (DVTAdditions)
- (id)dvt_launchApplicationWithBundleIdentifier:(id)arg1 andOptions:(id)arg2;
- (id)dvt_launchApplicationWithBundleIdentifier:(id)arg1;
- (id)dvt_spawnExecutableAtPath:(id)arg1 withOptions:(id)arg2 andTerminationHandler:(CDUnknownBlockType)arg3;
- (id)dvt_spawnExecutableAtPath:(id)arg1 withOptions:(id)arg2;
- (id)dvt_applicationIsInstalledWithBundleIdentifier:(id)arg1;
- (id)dvt_uninstallApplicationWithBundleIdentifier:(id)arg1 andOptions:(id)arg2;
- (id)dvt_uninstallApplicationWithBundleIdentifier:(id)arg1;
- (id)dvt_installApplicationAtPath:(id)arg1 withOptions:(id)arg2;
- (id)dvt_installApplicationAtPath:(id)arg1;
- (id)dvt_restoreContentsAndSettingsFrom:(id)arg1;
- (id)dvt_eraseContentsAndSettings;
- (id)dvt_shutdown;
- (id)dvt_bootWithOptions:(id)arg1;
- (id)dvt_boot;
- (id)dvt_notifyOfBootOnQueue:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (id)dvt_registerNotificationHandlerOnQueue:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (id)dvt_registerNotificationHandler:(CDUnknownBlockType)arg1;
@end

