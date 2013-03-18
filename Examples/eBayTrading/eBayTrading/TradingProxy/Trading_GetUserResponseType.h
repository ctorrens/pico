// Generated by xsd compiler for ios/objective-c
// DO NOT CHANGE!

#import <Foundation/Foundation.h>
#import "PicoClassSchema.h"
#import "PicoPropertySchema.h"
#import "PicoConstants.h"
#import "PicoBindable.h"
#import "Trading_AbstractResponseType.h"


@class Trading_UserType;

/**
 
 Contains the data retrieved by the call. User data is returned in a User object.
 
 
 @ingroup EBayAPIInterface
*/
@interface Trading_GetUserResponseType : Trading_AbstractResponseType {

@private
    Trading_UserType *_user;

}


/**
 
 Contains the returned user data for the specified eBay user.
 
 
 type : class Trading_UserType
*/
@property (nonatomic, retain) Trading_UserType *user;


@end