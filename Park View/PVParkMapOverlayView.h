//
//  PVParkMapOverlayView.h
//  Park View
//
//  Created by Joseph Bustamante on 3/6/13.
//  Copyright (c) 2013 Chris Wagner. All rights reserved.
//

#import <MapKit/MapKit.h>

@interface PVParkMapOverlayView : MKOverlayView

- (instancetype)initWithOverlay:(id<MKOverlay>)overlay overlayImage:(UIImage *)overlayImage;

@end
