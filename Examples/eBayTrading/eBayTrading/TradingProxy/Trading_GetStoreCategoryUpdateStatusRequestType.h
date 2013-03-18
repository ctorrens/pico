// Generated by xsd compiler for ios/objective-c
// DO NOT CHANGE!

#import <Foundation/Foundation.h>
#import "PicoClassSchema.h"
#import "PicoPropertySchema.h"
#import "PicoConstants.h"
#import "PicoBindable.h"
#import "Trading_AbstractRequestType.h"



/**
 
 Returns the status of the processing for category-structure changes specified
 with a call to SetStoreCategories.
 
 
 @ingroup EBayAPIInterface
*/
@interface Trading_GetStoreCategoryUpdateStatusRequestType : Trading_AbstractRequestType {

@private
    NSNumber *_taskID;

}


/**
 
 The task ID returned by the SetStoreCategories call. If the
 SetStoreCategories call was processed asynchronously, the TaskID will be
 a positive number. If SetStoreCategories returned a TaskID with a value of
 0, the change was completed at the time the call was made (and there is
 no need to check status).
 
 
 type : NSNumber, wrapper for primitive long
*/
@property (nonatomic, retain) NSNumber *taskID;


@end