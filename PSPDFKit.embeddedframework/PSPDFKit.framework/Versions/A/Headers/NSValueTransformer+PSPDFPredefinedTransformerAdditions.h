//
//  NSValueTransformer+PSPDFPredefinedTransformerAdditions.h
//  PSPDFKit
//
//  Copyright (c) 2012-2013 Peter Steinberger. All rights reserved.
//  Based on GitHub's Mantle project, MIT licensed.
//

#import <Foundation/Foundation.h>

/// The name for a value transformer that converts strings into URLs and back.
extern NSString *const PSPDFURLValueTransformerName;

/// Ensure an NSNumber is backed by __NSCFBoolean/CFBooleanRef
///
/// NSJSONSerialization, and likely other serialization libraries, ordinarily
/// serialize NSNumbers as numbers, and thus booleans would be serialized as
/// 0/1. The exception is when the NSNumber is backed by __NSCFBoolean, which,
/// though very much an implementation detail, is detected and serialized as a
/// proper boolean.
extern NSString *const PSPDFBooleanValueTransformerName;

@interface NSValueTransformer (PSPDFPredefinedTransformerAdditions)

/// Returns a reversible transformer which will convert an external
/// representation dictionary into an instance of the given MTLModel subclass,
/// and vice versa.
+ (NSValueTransformer *)pspdf_externalRepresentationTransformerWithModelClass:(Class)modelClass inFormat:(NSString *)externalRepresentationFormat;

/// Like -pspdf_externalRepresentationTransformerWithModelClass:, but converts
/// from an array of external representations to an array of models, and vice
/// versa.
//+ (NSValueTransformer *)pspdf_externalRepresentationArrayTransformerWithModelClass:(Class)modelClass;

@end
