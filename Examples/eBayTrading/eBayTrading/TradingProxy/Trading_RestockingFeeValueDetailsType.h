// Generated by xsd compiler for ios/objective-c
// DO NOT CHANGE!

#import <Foundation/Foundation.h>
#import "PicoClassSchema.h"
#import "PicoPropertySchema.h"
#import "PicoConstants.h"
#import "PicoBindable.h"



/**
 
 Type defining the <b>RestockingFeeValue</b> container, which contains the
 allowed values (and a text description of each value) that may be specified in the
 <b>RestockingFeeValueOption</b> field of an Add/Revise/Relist API call.
 
 
 @ingroup EBayAPIInterface
*/
@interface Trading_RestockingFeeValueDetailsType : NSObject <PicoBindable> {

@private
    NSString *_restockingFeeValueOption;
    NSString *_description;
    NSMutableArray *_any;

}


/**
 
 A restocking fee value option that a seller can specify in the 
 <b>RestockingFeeValueOption</b> field of Add/Revise/Relist calls. 
 In order to charge a buyer a restocking fee when an item is returned, a US seller
 must input a restocking fee value as part of the return policy.
 
 
 type : NSString, wrapper for primitive string
*/
@property (nonatomic, retain) NSString *restockingFeeValueOption;

/**
 
 Display string that applications can use to present 
 the <b>RestockingFeeValueOption</b> values in a more user-friendly 
 format when used in GUI features such as option buttons or drop-down lists.
 
 
 type : NSString, wrapper for primitive string
*/
@property (nonatomic, retain) NSString *description;

/**
 (public property)
 
 entry type : PicoAnyElement, wrapper for primitive anyelement
*/

@property (nonatomic, retain) NSMutableArray *any;


@end