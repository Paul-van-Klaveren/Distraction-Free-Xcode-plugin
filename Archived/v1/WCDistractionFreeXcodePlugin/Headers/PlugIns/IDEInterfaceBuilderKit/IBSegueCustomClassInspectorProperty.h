//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <IDEInterfaceBuilderKit/IBAbstractCustomClassInspectorProperty.h>

@class IDEInspectorKeyPath, NSString;

@interface IBSegueCustomClassInspectorProperty : IBAbstractCustomClassInspectorProperty
{
    IDEInspectorKeyPath *_valueKeyPath;
    IDEInspectorKeyPath *_moduleProviderValueKeyPath;
    NSString *_defaultRuntimeClassName;
}

- (void).cxx_destruct;
- (void)setupRefreshTriggersAndConfigure;
- (id)inspectedDocumentMembers;
- (id)externalCustomFormattedClassNameForMember:(id)arg1;
- (id)externalCustomClassModuleProviderForMember:(id)arg1;
- (id)externalCustomClassModuleForMember:(id)arg1;
- (id)externalCustomFormattedClassSymbolForMember:(id)arg1;
- (id)effectiveFormattedClassSymbolForMember:(id)arg1;
- (BOOL)canMemberChangeCustomClassName:(id)arg1;
- (void)setExternalCustomFormattedClassSymbol:(id)arg1 forMember:(id)arg2;
- (id)externalCustomClassNameForMember:(id)arg1;
- (id)runtimeClassNameForMember:(id)arg1;
- (id)effectiveClassModuleProviderForMember:(id)arg1;
- (id)effectiveClassModuleForMember:(id)arg1;
- (id)effectiveUnformattedClassNameForMember:(id)arg1;
- (id)effectiveClassNameForMember:(id)arg1;

@end

