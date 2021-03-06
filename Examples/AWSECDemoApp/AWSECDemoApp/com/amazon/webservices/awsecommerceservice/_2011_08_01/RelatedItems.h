// Generated by xsd compiler for ios/objective-c
// DO NOT CHANGE!

#import <Foundation/Foundation.h>
#import "PicoClassSchema.h"
#import "PicoPropertySchema.h"
#import "PicoConstants.h"
#import "PicoBindable.h"


@class RelatedItem;

/**
 (public class)
 
 @ingroup AWSECommerceServicePortType
*/
@interface RelatedItems : NSObject <PicoBindable> {

@private
    NSString *_relationship;
    NSString *_relationshipType;
    NSNumber *_relatedItemCount;
    NSNumber *_relatedItemPageCount;
    NSNumber *_relatedItemPage;
    NSMutableArray *_relatedItem;

}


/**
 (public property)
 
 type : NSString, wrapper for primitive string
*/
@property (nonatomic, strong) NSString *relationship;

/**
 (public property)
 
 type : NSString, wrapper for primitive string
*/
@property (nonatomic, strong) NSString *relationshipType;

/**
 (public property)
 
 type : NSNumber, wrapper for primitive long
*/
@property (nonatomic, strong) NSNumber *relatedItemCount;

/**
 (public property)
 
 type : NSNumber, wrapper for primitive long
*/
@property (nonatomic, strong) NSNumber *relatedItemPageCount;

/**
 (public property)
 
 type : NSNumber, wrapper for primitive long
*/
@property (nonatomic, strong) NSNumber *relatedItemPage;

/**
 (public property)
 
 entry type : class RelatedItem
*/

@property (nonatomic, strong) NSMutableArray *relatedItem;


@end
