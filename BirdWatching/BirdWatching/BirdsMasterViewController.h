//
//  BirdsMasterViewController.h
//  BirdWatching
//
//  Created by Thanapat Lorsiripaiboon on 5/23/55 BE.
//  Copyright (c) 2555 Wegrass Interactive Co.,Ltd. All rights reserved.
//

#import <UIKit/UIKit.h>

#import <CoreData/CoreData.h>

@class BirdSightingDataController;
@interface BirdsMasterViewController : UITableViewController

@property (strong, nonatomic) BirdSightingDataController *dataController;

@end
