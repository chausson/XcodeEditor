////////////////////////////////////////////////////////////////////////////////
//
//  EXPANZ
//  Copyright 2008-2011 EXPANZ
//  All Rights Reserved.
//
//  NOTICE: Expanz permits you to use, modify, and distribute this file
//  in accordance with the terms of the license agreement accompanying it.
//
////////////////////////////////////////////////////////////////////////////////
#import <Foundation/Foundation.h>

@class xcode_Project;
@class xcode_ClassDefinition;
@class xcode_File;

/**
* Represents a group in an Xcode project.
*/
@interface xcode_Group : NSObject {

@private
    NSString* _name;
    NSMutableArray* _children;
}

@property(nonatomic, weak, readonly) xcode_Project* project;
@property(nonatomic, strong, readonly) NSString* name;
@property(nonatomic, strong, readonly) NSString* path;
@property(nonatomic, strong, readonly) NSString* key;
@property(nonatomic, strong, readonly) NSArray* children;

- (id) initWithProject:(xcode_Project*)project key:(NSString*)key name:(NSString*)name path:(NSString*)path
              children:(NSArray*)children;

- (void) addClass:(xcode_ClassDefinition*)classDefinition;


/**
* Set of `xcode_File` belonging to this group.
*/
- (NSArray*) children;

- (xcode_File*) childWithKey:(NSString*)key;


@end

/* ================================================================================================================== */
@compatibility_alias Group xcode_Group;