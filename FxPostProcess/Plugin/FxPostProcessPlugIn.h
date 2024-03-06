//
//  FxPostProcessPlugIn.h
//  FxPostProcess
//
//  Created by MotionVFX on 06/03/2024.
//

#import <Foundation/Foundation.h>
#import <FxPlug/FxPlugSDK.h>

@interface FxPostProcessPlugIn : NSObject <FxTileableEffect>
@property (assign) id<PROAPIAccessing> apiManager;
@end
