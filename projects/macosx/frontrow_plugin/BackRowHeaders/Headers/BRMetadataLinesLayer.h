/*
 *     Generated by class-dump 3.1.1.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2006 by Steve Nygard.
 */

#import <BackRow/BRLayer.h>

@class NSArray;

@interface BRMetadataLinesLayer : BRLayer
{
    NSArray *_lineLayers;
    float _lineHeight;
}

- (id)init;
- (void)dealloc;
- (void)setMetadataValues:(id)fp8 withLabels:(id)fp12 frameWidth:(float)fp16 maxHeight:(float)fp20;

@end

