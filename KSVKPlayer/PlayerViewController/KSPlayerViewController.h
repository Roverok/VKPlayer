//
//  KSPlayerViewController.h
//  KSVKPlayer
//
//  Created by mac-214 on 19.03.14.
//  Copyright (c) 2014 mac-214. All rights reserved.
//

#import <UIKit/UIKit.h>

@class KSAccessToken;

@interface KSPlayerViewController : UIViewController <UITableViewDataSource>

@property (nonatomic, retain) IBOutlet UITableView *tableView;
@property (nonatomic, retain) KSAccessToken *token;

@end
