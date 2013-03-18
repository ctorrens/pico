// Generated by xsd compiler for ios/objective-c
// DO NOT CHANGE!

#import <Foundation/Foundation.h>
#import "PicoClassSchema.h"
#import "PicoPropertySchema.h"
#import "PicoConstants.h"
#import "PicoBindable.h"


@class Trading_SellerDashboardAlertType;

/**
 
 Type defining the <b>BuyerSatisfaction</b> container returned in the 
 <b>GetSellerDashboard</b> response. The <b>BuyerSatisfaction</b> 
 container consists of the seller's buyer satisfaction rating, as well as any alerts
 related to customer service.
 
 
 @ingroup EBayAPIInterface
*/
@interface Trading_BuyerSatisfactionDashboardType : NSObject <PicoBindable> {

@private
    NSString *_status;
    NSMutableArray *_alert;
    NSMutableArray *_any;

}


/**
 
 This field indicates the seller's buyer satisfaction rating. To determine this
 rating, eBay considers your detailed seller ratings, your overall feedback rating,
 and whatever buyer protection claims might exist on your account. eBay uses the
 buyer satisfaction rating to see if you are eligible for certain rewards, or if you
 need additional guidance to help you give better service.
 
 
 type: string constant in Trading_BuyerSatisfactionStatusCodeType.h
*/
@property (nonatomic, retain) NSString *status;

/**
 
 The <b>BuyerSatisfaction.Alert</b> container is only returned if eBay
 has posted one or more informational or warning messages related to the seller's
 buyer satisfaction rating.
 
 
 entry type : class Trading_SellerDashboardAlertType
*/

@property (nonatomic, retain) NSMutableArray *alert;

/**
 (public property)
 
 entry type : PicoAnyElement, wrapper for primitive anyelement
*/

@property (nonatomic, retain) NSMutableArray *any;


@end