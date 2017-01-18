//  SDLSetDisplayLayoutResponse.h
//

#import "SDLRPCResponse.h"

@class SDLButtonCapabilities;
@class SDLDisplayCapabilities;
@class SDLPresetBankCapabilities;
@class SDLSoftButtonCapabilities;

/**
 * Set Display Layout Response is sent, when SetDisplayLayout has been called
 *
 * Since SmartDeviceLink 2.0
 */
@interface SDLSetDisplayLayoutResponse : SDLRPCResponse

@property (strong, nonatomic) SDLDisplayCapabilities *displayCapabilities;
@property (strong, nonatomic) NSMutableArray<SDLButtonCapabilities *> *buttonCapabilities;
@property (strong, nonatomic) NSMutableArray<SDLSoftButtonCapabilities *> *softButtonCapabilities;
@property (strong, nonatomic) SDLPresetBankCapabilities *presetBankCapabilities;

@end
