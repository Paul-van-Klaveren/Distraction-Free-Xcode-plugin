//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <SpriteKit/SKNode.h>

@class NSColor, NSMutableArray, NSString, SKBitmapFont, SKSpriteNode;

@interface SKLabelNode : SKNode
{
    float _fontSize;
    CDStruct_83984b6f _fontColor;
    NSString *_fontName;
    NSString *_text;
    SKBitmapFont *_bmf;
    NSMutableArray *_textSprites;
    NSColor *_labelColor;
    float _labelColorBlend;
    long long _labelBlendMode;
    SKSpriteNode *_textSprite;
    long long _horizontalAlignmentMode;
    long long _verticalAlignmentMode;
    struct CGRect _textRect;
}

+ (id)labelNodeWithFontNamed:(id)arg1;
+ (id)labelNodeWithText:(id)arg1;
+ (id)_labelNodeWithFontTexture:(id)arg1 fontDataString:(id)arg2;
+ (id)_labelNodeWithFontNamed:(id)arg1;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)description;
@property(copy, nonatomic) NSString *text;
- (void)createSpritesForText;
- (void)_scaleFactorChangedFrom:(float)arg1 to:(float)arg2;
- (void)_flippedChangedFrom:(BOOL)arg1 to:(BOOL)arg2;
- (void)createBitmapSpritesForText;
- (struct CGRect)frame;
- (id)nodeAtPoint:(struct CGPoint)arg1 recursive:(BOOL)arg2;
- (id)nodesAtPoint:(struct CGPoint)arg1;
- (id)childrenInRect:(struct CGRect)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)copy;
@property(nonatomic) long long blendMode;
@property(nonatomic) double colorBlendFactor;
@property(retain, nonatomic) NSColor *color;
@property(retain, nonatomic) NSColor *fontColor;
@property(nonatomic) double fontSize;
@property(copy, nonatomic) NSString *fontName;
@property(nonatomic) long long horizontalAlignmentMode;
@property(nonatomic) long long verticalAlignmentMode;
- (id)initWithFontNamed:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (BOOL)isEqualToNode:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)_initialize;
- (id)init;
- (id)_getTextSprites;

@end
