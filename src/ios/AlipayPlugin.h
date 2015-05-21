
#import <Cordova/CDVPlugin.h>

@interface AlipayPlugin : CDVPlugin

@property (nonatomic, strong) NSString* appScheme;

- (void) initAppScheme:(NSString*) scheme;
- (void) callAlipaySDK:(NSString*) orderStr;

@end
