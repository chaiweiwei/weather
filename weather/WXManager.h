//
//  WXManager.h
//  weather
//
//  Created by 求攻略 on 15/3/16.
//  Copyright (c) 2015年 求攻略. All rights reserved.
//

@import Foundation;
@import CoreLocation;
#import <ReactiveCocoa.h>
// 1
#import "WXCondition.h"

@interface WXManager : NSObject
<CLLocationManagerDelegate>

// 2
+ (instancetype)sharedManager;

// 3
@property (nonatomic, strong, readonly) CLLocation *currentLocation;
@property (nonatomic, strong, readonly) WXCondition *currentCondition;
@property (nonatomic, strong, readonly) NSArray *hourlyForecast;
@property (nonatomic, strong, readonly) NSArray *dailyForecast;

// 4
- (void)findCurrentLocation;

@end