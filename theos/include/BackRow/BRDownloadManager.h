/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/BackRow.framework/BackRow
 */


@class NSMutableArray;

@interface BRDownloadManager : NSObject {
@private
	NSMutableArray *_downloads;	// 4 = 0x4
	NSMutableArray *_playableNotifications;	// 8 = 0x8
}
@property(readonly, retain) NSMutableArray *downloads;	// G=0x315a70f9; converted property
+ (id)allDownloads;	// 0x315a7b59
+ (id)displayStringForDownloadEstimatedTimeUntilPlayableForItem:(id)item;	// 0x3163e54d
+ (id)displayStringForDownloadState:(int)downloadState context:(int)context;	// 0x315a7a75
+ (id)displayStringForDownloadStateWithPercentageForItem:(id)item;	// 0x315a7951
+ (id)downloadManagerForMediaType:(id)mediaType;	// 0x31594db1
+ (id)downloadTestManager;	// 0x3163e165
+ (BOOL)downloadsInProgress;	// 0x3163e10d
+ (void)initialize;	// 0x315932dd
+ (void)registerDownloadManager:(id)manager forMediaType:(id)mediaType;	// 0x31594cd9
+ (void)registerDownloadTestManager:(id)manager;	// 0x3163e211
+ (void)removeDownloadManagerForMediaType:(id)mediaType;	// 0x3163e2c1
+ (id)shortDisplayStringForDownloadState:(int)downloadState;	// 0x3163e381
+ (id)shortDisplayStringForDownloadStateWithPercentageForItem:(id)item;	// 0x3163e43d
- (id)init;	// 0x31593331
- (void)_assetPlayable:(id)playable;	// 0x315a7de9
- (void)addDownload:(id)download;	// 0x315a6fb1
- (void)cancelNetworkSpeedTest;	// 0x3163e071
- (void)dealloc;	// 0x3163e089
- (void)deleteDownloadFromITunesQueue:(id)itunesQueue removeFromDisk:(BOOL)disk;	// 0x3163e075
// converted property getter: - (id)downloads;	// 0x315a70f9
- (BOOL)networkDiagnosticsAvailable;	// 0x3163e069
- (void)prioritizeDownload:(id)download;	// 0x315a71ad
- (void)removeDownload:(id)download;	// 0x315b8105
- (void)startNetworkSpeedTestWithUserInput:(id)userInput;	// 0x3163e06d
@end
