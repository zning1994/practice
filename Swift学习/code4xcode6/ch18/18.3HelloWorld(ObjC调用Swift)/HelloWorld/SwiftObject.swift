//
//  SwiftObject.swift
//  HelloWorld
//
//  Created by tonymacmini on 14-9-19.
//  Copyright (c) 2014年 tonymacmini. All rights reserved.
//

import Foundation

@objc class SwiftObject: NSObject {
    
    func sayHello(greeting : String, withName name : String) -> String {
        
        var string = "Hi," + name
        string += greeting
        
        return string;
    }
}
