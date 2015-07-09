//
//  ViewController.m
//  Calculator
//
//  Created by tonymacmini on 14-9-20.
//  Copyright (c) 2014年 tonymacmini. All rights reserved.
//

#import "ViewController.h"

@interface ViewController ()

@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    self.mainLabel.text = @"0";
    logic = [[CalcLogic alloc] init];
}

- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

- (IBAction)operandPressed:(id)sender {
    UIButton* btn = (UIButton*)sender;
    self.mainLabel.text =  [logic calculateByTag:(int)btn.tag withMainLabelString:self.mainLabel.text];
}

- (IBAction)equalsPressed:(id)sender {
    UIButton* btn = (UIButton*)sender;
    self.mainLabel.text =  [logic calculateByTag:(int)btn.tag withMainLabelString:self.mainLabel.text];
}

- (IBAction)clearPressed:(id)sender {
    self.mainLabel.text = @"0";
    [logic clear];
}

- (IBAction)decimalPressed:(id)sender {
    if ( [logic doesStringContainDecimal:self.mainLabel.text] == FALSE) {
        NSString *s =  [self.mainLabel.text stringByAppendingString:@"."];
        self.mainLabel.text  =  s;
    }
}

- (IBAction)numberButtonPressed:(id)sender {
    UIButton* btn = (UIButton*)sender;
    self.mainLabel.text = [logic updateMainLabelStringByNumberTag:(int)btn.tag
                                              withMainLabelString:self.mainLabel.text];
    
}

@end
