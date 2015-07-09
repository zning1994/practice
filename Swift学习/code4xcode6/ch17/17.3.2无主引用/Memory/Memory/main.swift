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
    var dept : Department?
    
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

class Department {
    var no : Int = 0
    var name : String = ""
    unowned var manager : Employee
    
    init(no : Int, name: String, manager : Employee) {
        self.no = no
        self.name = name
        self.manager = manager
        println("部门\(name) 已经构造成功。")
    }
    deinit {
        println("部门\(name) 已经析构成功。")
    }
}

var emp: Employee?

emp = Employee(no: 7698, name: "Blake", job :"Salesman", salary : 1600)
emp!.dept = Department(no : 30, name: "Sales", manager : emp!)

emp = nil
