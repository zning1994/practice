//
//  main.swift
//  Memory
//
//  Created by tonymacmini on 14-6-29.
//  Copyright (c) 2014年 tonymacmini. All rights reserved.
//

import Foundation

class Employee {
    var no : Int = 0
    var firstName : String
    var lastName : String
    var job : String
    var salary : Double
    
    init(no : Int, firstName : String, lastName : String, job : String, salary : Double) {
        self.no = no
        self.firstName = firstName
        self.lastName = lastName
        self.job = job
        self.salary = salary
        println("员工\(firstName) 已经构造成功。")
    }
    deinit {
        println("员工\(firstName) 已经析构成功。")
    }
    
    lazy var fullName : ()-> String = {
        return self.firstName + "." + self.lastName
    }
}

var emp : Employee? = Employee(no: 7698, firstName: "Tony", lastName : "Guan",
    job :"Salesman", salary : 1600)

println(emp!.fullName())
emp = nil

