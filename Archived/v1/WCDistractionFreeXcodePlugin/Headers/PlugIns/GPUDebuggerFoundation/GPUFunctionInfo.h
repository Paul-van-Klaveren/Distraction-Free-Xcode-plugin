//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSURL;

@interface GPUFunctionInfo : NSObject
{
    BOOL _isOnlineCompiled;
    NSURL *_sourceURL;
    long long _lineNumber;
}

@property(readonly, nonatomic) BOOL isOnlineCompiled; // @synthesize isOnlineCompiled=_isOnlineCompiled;
@property(readonly, nonatomic) long long lineNumber; // @synthesize lineNumber=_lineNumber;
@property(readonly, nonatomic) NSURL *sourceURL; // @synthesize sourceURL=_sourceURL;
- (void).cxx_destruct;
- (id)initWithSourceURL:(id)arg1 lineNumber:(long long)arg2 onlineCompiled:(BOOL)arg3;

@end

