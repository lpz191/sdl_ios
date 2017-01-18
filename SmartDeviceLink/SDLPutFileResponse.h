//  SDLPutFileResponse.h
//


#import "SDLRPCResponse.h"

/**
 * Put File Response is sent, when SDLPutFile has been called
 *
 * Since SmartDeviceLink 2.0
 */
@interface SDLPutFileResponse : SDLRPCResponse

@property (strong, nonatomic) NSNumber<SDLInt> *spaceAvailable;
@end
