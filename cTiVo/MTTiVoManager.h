//
//  MTNetworkTivos.h
//  myTivo
//
//  Created by Scott Buchanan on 12/6/12.
//  Copyright (c) 2012 Scott Buchanan. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "NSString+HTML.h"
#import "MTDownloadTableCellView.h"
#import "MTTiVoShow.h"
#import "MTProgramTableView.h"
#import "MTTiVo.h"
#import "MTSubscription.h"
#import <SystemConfiguration/SystemConfiguration.h>
#import "MTFormat.h"


@interface MTTiVoManager : NSObject <NSNetServiceBrowserDelegate, NSNetServiceDelegate, NSURLConnectionDataDelegate, NSURLConnectionDelegate, NSTextFieldDelegate>  {
    
    NSNetService *tivoService ;
    NSNetServiceBrowser *tivoBrowser;
    NSMutableData *listingData;
//	NSMutableDictionary *tiVoShowsDictionary;
	NSMutableArray *updatingTiVoShows;
	
	NSURLConnection *programListURLConnection, *downloadURLConnection;
	NSTask *decryptingTask, *encodingTask;
    NSMutableDictionary *programDownloading, *programDecrypting, *programEncoding;
	NSFileHandle *downloadFile, *stdOutFileHandle;
	double dataDownloaded, referenceFileSize;
	NSNetService *tivoConnectingTo;
	NSOpenPanel *myOpenPanel;
    double percentComplete;
    MTDownloadTableCellView *downloadTableCell, *decryptTableCell, *encodeTableCell;
	int numEncoders;//Want to limit launches to two encoders.
	NSArray *factoryFormatList;
    
    BOOL volatile updatingVideoList;
	
	NSOperationQueue *queue;
    
}

//Shared Data

@property (nonatomic, retain) NSMutableArray *tiVoList, *tiVoShows, *downloadQueue, *formatList;
@property (nonatomic, retain) NSMutableArray *subscribedShows;
@property (nonatomic, retain) NSString *downloadDirectory;
@property (readonly) NSString *defaultDownloadDirectory;

//Other Properties
@property (nonatomic,readonly) NSMutableArray *tivoServices;
@property (nonatomic) BOOL videoListNeedsFilling, addToItunes, simultaneousEncode;
@property (nonatomic, retain) MTFormat *selectedFormat;

+ (MTTiVoManager *)sharedTiVoManager;

#define tiVoManager [MTTiVoManager sharedTiVoManager]

-(void)addProgramToDownloadQueue:(MTTiVoShow *)program;
-(void) downloadthisShowWithCurrentOptions:(MTTiVoShow*) thisShow;  
-(void) deleteProgramFromDownloadQueue:(MTTiVoShow *) program;

-(NSArray *)userFormats;
-(MTFormat *) findFormat:(NSString *) formatName;
-(NSDictionary *)currentMediaKeys;
-(void)manageDownloads;
-(void)addFormatsToList:(NSArray *)formats;

@end
