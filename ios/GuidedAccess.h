
#ifdef RCT_NEW_ARCH_ENABLED
#import "RNGuidedAccessSpec.h"

@interface GuidedAccess : NSObject <NativeGuidedAccessSpec>
#else
#import <React/RCTBridgeModule.h>

@interface GuidedAccess : NSObject <RCTBridgeModule>
#endif

@end
