//  SDLPerformInteractionResponse.h
//


#import "SDLRPCResponse.h"

#import "SDLTriggerSource.h"

/**
 * PerformInteraction Response is sent, when SDLPerformInteraction has been called
 *
 * @since SDL 1.0
 */
@interface SDLPerformInteractionResponse : SDLRPCResponse

/**
 * @abstract ID of the choice that was selected in response to PerformInteraction. 
 * 
 * @discussion Only is valid if general result is "success:true".
 *
 * Optional, Integer, 0 - 2,000,000,000
 */
@property (strong, nonatomic) NSNumber<SDLInt> *choiceID;

/**
 * @abstract Manually entered text selection, e.g. through keyboard
 * 
 * @discussion Can be returned in lieu of choiceID, depending on trigger source
 *
 * Optional, Max length 500 chars
 */
@property (strong, nonatomic) NSString *manualTextEntry;

/**
 * @abstract A *SDLTriggerSource* object which will be shown in the HMI
 *
 * @discussion Only is valid if resultCode is SUCCESS.
 */
@property (strong, nonatomic) SDLTriggerSource triggerSource;


@end
