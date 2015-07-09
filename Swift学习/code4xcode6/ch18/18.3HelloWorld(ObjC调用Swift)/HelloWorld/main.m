//
//  main.m
//  HelloWorld
//
//  Created by tonymacmini on 14-9-19.
//  Copyright (c) 2014年 tonymacmini. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "HelloWorld-swift.h"

int main(int argc, const char * argv[]) {
    
    SwiftObject *sobj = [[SwiftObject alloc] init];
    NSString *hello = [sobj sayHello:@"Good morning" withName:@"Tony"];
    
    NSLog(@"%@",hello);
    
    return 0;
}