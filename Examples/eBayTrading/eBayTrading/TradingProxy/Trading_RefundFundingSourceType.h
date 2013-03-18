// Generated by xsd compiler for ios/objective-c
// DO NOT CHANGE!

#import <Foundation/Foundation.h>
#import "PicoClassSchema.h"
#import "PicoPropertySchema.h"
#import "PicoConstants.h"
#import "PicoBindable.h"


@class Trading_AmountType;

/**
 
 Contains information about the funding source for the refund.
 
 
 @ingroup EBayAPIInterface
*/
@interface Trading_RefundFundingSourceType : NSObject <PicoBindable> {

@private
    NSString *_refundingSourceType;
    NSString *_accountNumber;
    Trading_AmountType *_refundAmount;
    NSString *_sellerExternalTransactionID;
    NSString *_buyerExternalTransactionID;
    NSMutableArray *_any;

}


/**
 
 The source from which the refund was made. RefundFundingSource elements are returned 
 (for GetOrders and other order retrieval calls) for DE/AT orders subject to the 
 new eBay payment process.<br/><br/>
 <span class="tablenote">
 <strong>Note:</strong> The introduction of the new eBay payment process for the entire German and
 Austrian eBay marketplace has been delayed until 2013. 
 </span>
 
 
 type: string constant in Trading_RefundingSourceTypeCodeType.h
*/
@property (nonatomic, retain) NSString *refundingSourceType;

/**
 
 The account number of the funding source. RefundFundingSource elements are returned 
 (for GetOrders and other order retrieval calls) for DE/AT orders subject to the 
 new eBay payment process.<br/><br/>
 <span class="tablenote">
 <strong>Note:</strong> The introduction of the new eBay payment process for the entire German and
 Austrian eBay marketplace has been delayed until 2013. 
 </span>
 
 
 type : NSString, wrapper for primitive string
*/
@property (nonatomic, retain) NSString *accountNumber;

/**
 
 The amount of the refund. RefundFundingSource elements are returned 
 (for GetOrders and other order retrieval calls) for DE/AT orders subject to the 
 new eBay payment process.<br/><br/>
 <span class="tablenote">
 <strong>Note:</strong> The introduction of the new eBay payment process for the entire German and
 Austrian eBay marketplace has been delayed until 2013. 
 </span>
 
 
 type : class Trading_AmountType
*/
@property (nonatomic, retain) Trading_AmountType *refundAmount;

/**
 
 The external transaction ID of the seller's account. RefundFundingSource elements are returned 
 (for GetOrders and other order retrieval calls) for DE/AT orders subject to the 
 new eBay payment process.<br/><br/>
 <span class="tablenote">
 <strong>Note:</strong> The introduction of the new eBay payment process for the entire German and
 Austrian eBay marketplace has been delayed until 2013.  
 </span>
 
 
 type : NSString, wrapper for primitive string
*/
@property (nonatomic, retain) NSString *sellerExternalTransactionID;

/**
 
 The external transaction ID of the buyer's account. RefundFundingSource elements are returned 
 (for GetOrders and other order retrieval calls) for DE/AT orders subject to the 
 new eBay payment process.<br/><br/>
 <span class="tablenote">
 <strong>Note:</strong> The introduction of the new eBay payment process for the entire German and
 Austrian eBay marketplace has been delayed until 2013. 
 </span>
 
 
 type : NSString, wrapper for primitive string
*/
@property (nonatomic, retain) NSString *buyerExternalTransactionID;

/**
 (public property)
 
 entry type : PicoAnyElement, wrapper for primitive anyelement
*/

@property (nonatomic, retain) NSMutableArray *any;


@end