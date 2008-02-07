/*
 *     Generated by class-dump 3.1.1.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2006 by Steve Nygard.
 */

#import "NSObject.h"

#import "BRMediaCollectionProtocol.h"

@interface BRBaseMediaCollection : NSObject <BRMediaCollection>
{
    id <BRMediaProvider> _provider;
}

+ (id)defaultImageForMediaType:(id)fp8;
- (id)initWithMediaProvider:(id)fp8;
- (void)dealloc;
- (id)provider;
- (id)childCollections;
- (id)parentCollection;
- (id)collectionType;
- (id)collectionID;
- (id)coverArt;
- (BOOL)hasCoverArt;
- (int)count;
- (id)mediaAssets;
- (BOOL)isCompilation;
- (BOOL)isSingleArtistCompilation;
- (id)artist;
- (id)artistForSorting;
- (id)title;
- (id)titleForSorting;
- (long)duration;
- (id)mediaType;
- (BOOL)isLocal;
- (id)coverArtNoDefault;
- (void)willBeDeleted;

@end

