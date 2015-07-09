//
//  ViewController.h
//  Calculator
//
//  Created by tonymacmini on 14-9-20.
//  Copyright (c) 2014年 tonymacmini. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "CalcLogic.h"

@interface ViewController : UIViewController
{
    CalcLogic *logic;
}

@property (weak, nonatomic) IBOutlet UILabel *mainLabel;

- (IBAction)operandPressed:(id)sender;
- (IBAction)equalsPressed:(id)sender;
- (IBAction)clearPressed:(id)sender;
- (IBAction)decimalPressed:(id)sender;
- (IBAction)numberButtonPressed:(id)sender;

@end

