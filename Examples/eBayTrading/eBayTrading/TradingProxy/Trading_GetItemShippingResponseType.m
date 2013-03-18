// Generated by xsd compiler for ios/objective-c
// DO NOT CHANGE!

#import <Foundation/Foundation.h>
#import "Trading_GetItemShippingResponseType.h"
#import "Trading_ShippingDetailsType.h"

@implementation Trading_GetItemShippingResponseType

@synthesize shippingDetails = _shippingDetails;

// class meta-data method
// note: this method is only for internal use, DO NOT CHANGE!
+(PicoClassSchema *)getClassMetaData {
    PicoClassSchema *cs = [[PicoClassSchema alloc] initWithXmlName:@"GetItemShippingResponse" nsUri:@"urn:ebay:apis:eBLBaseComponents"];
    [cs autorelease];
    return cs;
}

// property meta-data method
// note: this method is only for internal use, DO NOT CHANGE!
+(NSMutableDictionary *)getPropertyMetaData {
    NSMutableDictionary *map = [NSMutableDictionary dictionary];
    
    PicoPropertySchema *ps = nil;
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ELEMENT xmlName:@"ShippingDetails" propertyName:@"shippingDetails" type:PICO_TYPE_OBJECT clazz:[Trading_ShippingDetailsType class]];
    [map setObject:ps forKey:@"shippingDetails"];
    [ps release];
    
    return map;
}



-(void)dealloc {
    self.shippingDetails = nil;
    [super dealloc];
}

@end