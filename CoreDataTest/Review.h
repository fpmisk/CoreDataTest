//
//  Review.h
//  CoreDataTest
//
//  Created by fpmi on 08.10.15.
//  Copyright (c) 2015 bsu.fpmi. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>


@interface Review : NSManagedObject

@property (nonatomic, retain) NSNumber * id;
@property (nonatomic, retain) NSNumber * serviceTime;
@property (nonatomic, retain) NSNumber * mealQuality;
@property (nonatomic, retain) NSNumber * atmosphere;
@property (nonatomic, retain) NSNumber * orderSum;
@property (nonatomic, retain) NSNumber * tipsPercents;
@property (nonatomic, retain) NSNumber * restaurantId;

@end
