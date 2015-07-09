//
//  CalcLogic.m
//  Calculator
//
//  Created by tonymacmini on 14-7-1.
//  Copyright (c) 2014年 tonymacmini. All rights reserved.
//

#import "CalcLogic.h"

@implementation CalcLogic

//构造方法
-(id) init
{
    NSLog(@"CalcLogic init");
    self = [super init];
    if (self) {
        lastRetainValue = 0.0;
        isMainLabelTextTemporary  = FALSE;
        opr = Default;
    }
    return self;
}

-(void)clear
{
    lastRetainValue = 0.0;
    isMainLabelTextTemporary  = FALSE;
    opr = Default;
}

-(NSString*)updateMainLabelStringByNumberTag:(int) tag
                         withMainLabelString:(NSString*)mainLabelString
{
    NSString* string = mainLabelString;
    
    if (isMainLabelTextTemporary)  {
        string = @"0";
        isMainLabelTextTemporary = FALSE;
    }
    
    int optNumber = tag - 100;
    //把String转为double
    double mainLabelDouble = string.doubleValue;
    
    if (mainLabelDouble == 0
        && [self doesStringContainDecimal: string] == false) {
        NSString *strOptNumber = [NSString stringWithFormat:@"%i", optNumber];
        return strOptNumber;
    }
    
    NSString *resultString = [string stringByAppendingFormat:@"%i", optNumber];
    
    return resultString;

}

-(BOOL)doesStringContainDecimal:(NSString*)string
{
    NSString *searchForDecimal = @".";
    NSRange range = [string rangeOfString:searchForDecimal];
    
    if (range.location != NSNotFound)
        return YES;
    return NO;
}


-(NSString*)calculateByTag:(int) tag
       withMainLabelString:(NSString*)mainLabelString
{    
    //把String转为为double
    double currentValue = mainLabelString.doubleValue;
    
    switch (opr) {
    case Plus:
            lastRetainValue += currentValue;
            break;
    case Minus:
            lastRetainValue -= currentValue;
            break;
    case Multiply:
            lastRetainValue *= currentValue;
            break;
    case Divide:
        if (currentValue != 0) {
            lastRetainValue /= currentValue;
        } else {
            opr = Default;
            isMainLabelTextTemporary = TRUE;
            return @"错误";
        }
            break;
    default:
            lastRetainValue = currentValue;
    }
    
    //记录当前操作符，下次计算时候使用
    opr = tag;
    NSString* resultString = [NSString stringWithFormat:@"%g", lastRetainValue];
    isMainLabelTextTemporary = TRUE;
    
    return resultString;

}

@end
