
#ifdef RCT_NEW_ARCH_ENABLED
#import "RNAliVideoSpec.h"

@interface AliVideo : NSObject <NativeAliVideoSpec>
#else
#import <React/RCTBridgeModule.h>

@interface AliVideo : NSObject <RCTBridgeModule>
#endif

@end
