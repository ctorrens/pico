// Generated by xsd compiler for ios/objective-c
// DO NOT CHANGE!

#import <Foundation/Foundation.h>
#import "Trading_AddOrderResponseType.h"

@implementation Trading_AddOrderResponseType

@synthesize orderID = _orderID;
@synthesize createdTime = _createdTime;

// class meta-data method
// note: this method is only for internal use, DO NOT CHANGE!
+(PicoClassSchema *)getClassMetaData {
    PicoClassSchema *cs = [[PicoClassSchema alloc] initWithXmlName:@"AddOrderResponse" nsUri:@"urn:ebay:apis:eBLBaseComponents"];
    [cs autorelease];
    return cs;
}

// property meta-data method
// note: this method is only for internal use, DO NOT CHANGE!
+(NSMutableDictionary *)getPropertyMetaData {
    NSMutableDictionary *map = [NSMutableDictionary dictionary];
    
    PicoPropertySchema *ps = nil;
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ELEMENT xmlName:@"OrderID" propertyName:@"orderID" type:PICO_TYPE_STRING clazz:nil];
    [map setObject:ps forKey:@"orderID"];
    [ps release];
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ELEMENT xmlName:@"CreatedTime" propertyName:@"createdTime" type:PICO_TYPE_DATE clazz:nil];
    [map setObject:ps forKey:@"createdTime"];
    [ps release];
    
    return map;
}



-(void)dealloc {
    self.orderID = nil;
    self.createdTime = nil;
    [super dealloc];
}

@end