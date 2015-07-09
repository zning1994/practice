//
//  ViewController.swift
//  Calculator
//
//  Created by tonymacmini on 14-9-20.
//  Copyright (c) 2014年 tonymacmini. All rights reserved.
//

import UIKit

class ViewController: UIViewController {

    @IBOutlet weak var mainLabel: UILabel!
    
    var logic : CalcLogic!

    override func viewDidLoad() {
        super.viewDidLoad()
        mainLabel.text = "0"
        logic = CalcLogic()
    }
    override func didReceiveMemoryWarning() {
        super.didReceiveMemoryWarning()
        logic = nil
    }
    
    @IBAction func operandPressed(sender: AnyObject) {
        var btn : UIButton = sender as UIButton
        mainLabel.text =  logic.calculateByTag(btn.tag, withMainLabelString: mainLabel.text!)
    }
    
    @IBAction func equalsPressed(sender: AnyObject) {
        var btn : UIButton = sender as UIButton
        mainLabel.text =  logic.calculateByTag(btn.tag, withMainLabelString: mainLabel.text!)
    }
    
    @IBAction func clearPressed(sender: AnyObject) {
        mainLabel.text = "0"
        logic.clear()
    }

    @IBAction func decimalPressed(sender: AnyObject) {
        if logic.doesStringContainDecimal(mainLabel.text!) == false {
            let string = mainLabel.text! + "."
            mainLabel.text = string
        }
    }

    @IBAction func numberButtonPressed(sender: AnyObject) {
        var btn : UIButton = sender as UIButton
        mainLabel.text =  logic.updateMainLabelStringByNumberTag(btn.tag, 
                                    withMainLabelString: mainLabel.text!)
    }
}

