//
//  MasterViewController.h
//  test
//
//  Created by 山下智紀 on 2013/05/08.
//  Copyright (c) 2013年 山下智紀. All rights reserved.
//

#import <UIKit/UIKit.h>

@class DetailViewController;

@interface MasterViewController : UITableViewController

@property (strong, nonatomic) DetailViewController *detailViewController;

@end
