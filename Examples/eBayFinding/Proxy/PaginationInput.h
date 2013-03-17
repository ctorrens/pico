// Generated by xsd compiler for ios/objective-c
// DO NOT CHANGE!

#import <Foundation/Foundation.h>
#import "PicoClassSchema.h"
#import "PicoPropertySchema.h"
#import "PicoConstants.h"
#import "PicoBindable.h"



/**
 
 Controls the pagination of the result set. Child elements specify the maximum
 number of item listings to return per call and which page of data to return.
 Controls which listings are returned in the response, but does not control
 the details associated with the returned items.
 
 
 @ingroup FindingServicePortType
*/
@interface PaginationInput : NSObject <PicoBindable> {

@private
    NSNumber *_pageNumber;
    NSNumber *_entriesPerPage;
    NSString *_delimiter;
    NSMutableArray *_any;

}


/**
 
 Specifies which subset of data (or "page") to return in the call
 response. The number of data pages is determined by the total number of
 items matching the request search criteria (returned in
 paginationOutput.totalEntries) divided by the number of entries to
 display in each response (entriesPerPage). You can return up to the first
 100 pages of the result set by issuing multiple requests and specifying,
 in sequence, the pages to return.
 
 
 type : NSNumber, wrapper for primitive int
*/
@property (nonatomic, retain) NSNumber *pageNumber;

/**
 
 Specifies the maximum number of entries to return in a single call. If
 the number of entries found on the specified pageNumber is less than the
 value specified here, the number of items returned will be less than the
 value of entriesPerPage. This indicates the end of the result set.
 <br><br>
 If entriesPerPage is set to a number greater than 100, the default value,
 100, will be used.
 
 
 type : NSNumber, wrapper for primitive int
*/
@property (nonatomic, retain) NSNumber *entriesPerPage;

/**
 (public property)
 
 type : NSString, wrapper for primitive string
*/
@property (nonatomic, retain) NSString *delimiter;

/**
 (public property)
 
 entry type : PicoAnyElement, wrapper for primitive anyelement
*/

@property (nonatomic, retain) NSMutableArray *any;


@end