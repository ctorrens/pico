// Generated by xsd compiler for ios/objective-c
// DO NOT CHANGE!

#import <Foundation/Foundation.h>
#import "Trading_FeedbackDetailArrayType.h"
#import "Trading_FeedbackDetailType.h"

@implementation Trading_FeedbackDetailArrayType

@synthesize feedbackDetail = _feedbackDetail;

// class meta-data method
// note: this method is only for internal use, DO NOT CHANGE!
+(PicoClassSchema *)getClassMetaData {
    return nil;
}

// property meta-data method
// note: this method is only for internal use, DO NOT CHANGE!
+(NSMutableDictionary *)getPropertyMetaData {
    NSMutableDictionary *map = [NSMutableDictionary dictionary];
    
    PicoPropertySchema *ps = nil;
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ELEMENT_ARRAY xmlName:@"FeedbackDetail" propertyName:@"feedbackDetail" type:PICO_TYPE_OBJECT clazz:[Trading_FeedbackDetailType class]];
    [map setObject:ps forKey:@"feedbackDetail"];
    [ps release];
    
    return map;
}



-(void)dealloc {
    self.feedbackDetail = nil;
    [super dealloc];
}

@end