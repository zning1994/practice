//
//  main.swift
//  Memory
//
//  Created by tonymacmini on 14-6-29.
//  Copyright (c) 2014年 tonymacmini. All rights reserved.
//

import Foundation

class Employee {
    var no : Int
    var name : String
    var job : String
    var salary : Double
    
    init(no : Int, name: String, job : String, salary : Double) {
        self.no = no
        self.name = name
        self.job = job
        self.salary = salary
        println("员工\(name) 已经构造成功。")
    }
    deinit {
        println("员工\(name) 已经析构成功。")
    }
    
}

var ref1: Employee?
var ref2: Employee?
var ref3: Employee?

ref1 = Employee(no: 7698, name: "Blake", job :"Salesman", salary : 1600)

ref2 = ref1
ref3 = ref1

ref1 = nil
ref2 = nil
ref3 = nil