//
//  WXClient.h
//  weather
//
//  Created by 求攻略 on 15/3/16.
//  Copyright (c) 2015年 求攻略. All rights reserved.
//

#import <Foundation/Foundation.h>

@import CoreLocation;
#import <ReactiveCocoa.h>

@interface WXClient : NSObject

@property (nonatomic, strong) NSURLSession *session;

-(RACSignal *)fetchJSONFromURL:(NSURL *)url;

- (RACSignal *)fetchCurrentConditionsForLocation:(CLLocationCoordinate2D)coordinate;

- (RACSignal *)fetchHourlyForecastForLocation:(CLLocationCoordinate2D)coordinate;

- (RACSignal *)fetchDailyForecastForLocation:(CLLocationCoordinate2D)coordinate;

@end
