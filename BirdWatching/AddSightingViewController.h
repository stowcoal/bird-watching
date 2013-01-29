//
//  AddSightingViewController.h
//  BirdWatching
//
//  Created by CURTIS STOCHL on 1/24/13.
//  Copyright (c) 2013 CURTIS STOCHL. All rights reserved.
//

#import <UIKit/UIKit.h>
@class BirdSighting;
@interface AddSightingViewController : UITableViewController
<UITextFieldDelegate>
@property (strong, nonatomic) BirdSighting *birdSighting;
@property (weak, nonatomic) IBOutlet UITextField *birdNameInput;
@property (weak, nonatomic) IBOutlet UITextField *locationInput;

@end
