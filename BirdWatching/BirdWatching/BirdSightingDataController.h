//
//  BirdSightingDataController.h
//  BirdWatching
//
//  Created by CURTIS STOCHL on 1/22/13.
//  Copyright (c) 2013 CURTIS STOCHL. All rights reserved.
//

#import <Foundation/Foundation.h>
@class BirdSighting;

@interface BirdSightingDataController : NSObject
@property (nonatomic, copy) NSMutableArray *masterBirdSightingList;
- (NSUInteger)countOfList;
- (BirdSighting *)objectInListAtIndex:(NSUInteger)theIndex;
- (void)addBirdSightingWithSighting:(BirdSighting *)sighting;
- (void)removeObjectFromMasterBirdSightingListAtIndex:(NSUInteger)index;
@end
