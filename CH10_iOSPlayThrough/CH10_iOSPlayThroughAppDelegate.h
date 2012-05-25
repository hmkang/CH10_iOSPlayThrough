//
//  CH10_iOSPlayThroughAppDelegate.h
//  CH10_iOSPlayThrough
//
//  Created by hmkang on 5/25/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <AudioToolbox/AudioToolbox.h>

typedef struct {
    AudioUnit rioUnit;
    AudioStreamBasicDescription asbd;
    float sineFrequency;
    float sinePhase;
} EffectState;

@interface CH10_iOSPlayThroughAppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;
@property (assign) EffectState effectState;

@end
