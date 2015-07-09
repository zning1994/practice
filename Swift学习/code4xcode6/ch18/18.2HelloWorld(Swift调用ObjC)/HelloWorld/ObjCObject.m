//
//  ObjCObject.m
//  HelloWorld
//
//  Created by tonymacmini on 14-7-5.
//  Copyright (c) 2014年 tonymacmini. All rights reserved.
//

#import "ObjCObject.h"

@implementation ObjCObject

-(NSString*)sayHello:(NSString*)greeting withName: (NSString*)name
{
    NSString *string = [NSString stringWithFormat:@"Hi,%@ %@.",name,greeting];
    return string;
}

@end
