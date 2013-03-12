//
//  PVParkMapOverlay.h
//  Park View
//
//  Created by Joseph Bustamante on 3/6/13.
//  Copyright (c) 2013 Chris Wagner. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <MapKit/MapKit.h>

@class PVPark;

@interface PVParkMapOverlay : NSObject <MKOverlay>

- (instancetype)initWithPark:(PVPark *)park;

@end
