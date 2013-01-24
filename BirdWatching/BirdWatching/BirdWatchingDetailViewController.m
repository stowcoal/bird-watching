//
//  BirdWatchingDetailViewController.m
//  BirdWatching
//
//  Created by CURTIS STOCHL on 1/22/13.
//  Copyright (c) 2013 CURTIS STOCHL. All rights reserved.
//
#import "BirdSighting.h"
#import "BirdWatchingDetailViewController.h"

@interface BirdWatchingDetailViewController()
- (void)configureView;
@end

@implementation BirdWatchingDetailViewController

#pragma mark - Managing the detail item

- (void)setSighting:(BirdSighting *) newSighting

{
    
    if (_sighting != newSighting) {
        
        _sighting = newSighting;
        
        
        
        // Update the view.
        
        [self configureView];
        
    }
    
}

- (void)configureView

{
    
    // Update the user interface for the detail item.
    
    BirdSighting *theSighting = self.sighting;
    
    
    
    static NSDateFormatter *formatter = nil;
    
    if (formatter == nil) {
        
        formatter = [[NSDateFormatter alloc] init];
        
        [formatter setDateStyle:NSDateFormatterMediumStyle];
        
    }
    
    if (theSighting) {
        
        self.birdNameLabel.text = theSighting.name;
        
        self.locationLabel.text = theSighting.location;
        
        self.dateLabel.text = [formatter stringFromDate:(NSDate *)theSighting.date];
        
    }
    
}

- (void)viewDidLoad
{
    [super viewDidLoad];
	// Do any additional setup after loading the view, typically from a nib.
    [self configureView];
}

- (void)didReceiveMemoryWarning
{
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

@end
