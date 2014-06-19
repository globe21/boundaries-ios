//
//  GFGeofence.h
//  Geofences
//
//  Created by Joefrey Kibuule on 6/19/14.
//  Copyright (c) 2014 ChaiOne. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface GFGeofence : CLCircularRegion

@property (nonatomic) NSInteger geofenceID;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, strong) NSArray *tags;

+ (NSDictionary *)dictionaryForGeofence:(GFGeofence *)geofence;

@end
