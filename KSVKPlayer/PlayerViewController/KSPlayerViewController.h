//
//  KSPlayerViewController.h
//  KSVKPlayer
//
//  Created by mac-214 on 19.03.14.
//  Copyright (c) 2014 mac-214. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "KSPlayerDelegate.h"

@class KSAccessToken;
@protocol KSPlayerDelegate;

@interface KSPlayerViewController : UIViewController <UITableViewDataSource, UITableViewDelegate, KSPlayerDelegate>

@property (nonatomic, retain) IBOutlet UITableView *tableView;
@property (nonatomic, retain) IBOutlet UIToolbar *toolBar;
@property (nonatomic, retain) IBOutlet UISlider *slider;

@property (nonatomic, retain) IBOutlet UIBarButtonItem *currentAudioTime;
@property (nonatomic, retain) IBOutlet UIBarButtonItem *playButton;
@property (nonatomic, retain) IBOutlet UIBarButtonItem *pauseButton;
@property (nonatomic, retain) IBOutlet UIBarButtonItem *timeSpace;
@property (nonatomic, retain) IBOutlet UIBarButtonItem *flexibleSpace1;
@property (nonatomic, retain) IBOutlet UIBarButtonItem *flexibleSpace2;
@property (nonatomic, retain) IBOutlet UIBarButtonItem *nextButton;
@property (nonatomic, retain) IBOutlet UIBarButtonItem *previousButton;

@property (nonatomic, retain) KSAccessToken *token;

- (IBAction)logOut:(id)sender;
- (IBAction)playAudio:(id)sender;
- (IBAction)nextAudio:(id)sender;
- (IBAction)previousAudio:(id)sender;
- (IBAction)pauseAudio:(id)sender;
- (IBAction)valueChangeSliderTimer:(id)sender;

@end
