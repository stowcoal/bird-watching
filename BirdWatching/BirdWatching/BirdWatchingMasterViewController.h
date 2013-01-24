//
//  BirdWatchingMasterViewController.h
//  BirdWatching
//
//  Created by CURTIS STOCHL on 1/22/13.
//  Copyright (c) 2013 CURTIS STOCHL. All rights reserved.
//

#import <UIKit/UIKit.h>

@class BirdSightingDataController;

@interface BirdWatchingMasterViewController : UITableViewController

@property (strong, nonatomic) BirdSightingDataController *dataController;

@end
