//
//  PVCharacter.h
//  Park View
//
//  Created by Joseph Bustamante on 3/12/13.
//  Copyright (c) 2013 Chris Wagner. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <MapKit/MapKit.h>

@interface PVCharacter : MKCircle <MKOverlay>

@property (nonatomic, strong) NSString *name;
@property (nonatomic, strong) UIColor *color;

@end
