//
//  PVAttractionAnnotation.h
//  Park View
//
//  Created by Joseph Bustamante on 3/6/13.
//  Copyright (c) 2013 Chris Wagner. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <MapKit/MapKit.h>

typedef NS_ENUM(NSInteger, PVAttractionType)
{
    PVAttractionDefault = 0,
    PVAttractionRide,
    PVAttractionFood,
    PvAttractionFirstAid
};

@interface PVAttractionAnnotation : NSObject <MKAnnotation>

@property (nonatomic) CLLocationCoordinate2D coordinate;
@property (nonatomic, strong) NSString *title;
@property (nonatomic, strong) NSString *subtitle;
@property (nonatomic) PVAttractionType type;

@end
