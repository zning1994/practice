//  本书网站：http://www.51work6.com/swift.php
//  智捷iOS课堂在线课堂：http://v.51work6.com
//  智捷iOS课堂新浪微博：http://weibo.com/u/3215753973
//  智捷iOS课堂微信公共账号：智捷iOS课堂
//  作者微博：http://weibo.com/516inc
//  官方csdn博客：http://blog.csdn.net/tonny_guan
//  Swift语言QQ讨论群：362298485 联系QQ：1575716557 邮箱：jylong06@163.com


import UIKit


protocol Person {
    
    var firstName : String { get set }
    var lastName : String { get set }
    var fullName : String { get }
    
    func description() -> String
    
}

class Student : Person {
    
    var school : String
    var firstName : String
    var lastName : String
    
    var fullName : String {
        return self.firstName + "." + self.lastName
    }
    
    func description() -> String {
        return "firstName: \(firstName) lastName: \(lastName) school: \(school)"
    }
    
    init (firstName : String, lastName : String, school : String) {
        self.firstName = firstName
        self.lastName = lastName
        self.school = school
    }
}

class Worker : Person {
    
    var factory : String
    var firstName : String
    var lastName : String
    
    var fullName : String {
        return self.firstName + "." + self.lastName
    }
    
    func description() -> String {
        return "firstName: \(firstName) lastName: \(lastName) factory: \(factory)"
    }
    
    init (firstName : String, lastName : String, factory : String) {
        self.firstName = firstName
        self.lastName = lastName
        self.factory = factory
    }
}

let student1 : Person = Student(firstName : "Tom", lastName : "Guan", school : "清华大学")
let student2 : Person = Student(firstName : "Ben", lastName : "Guan", school : "北京大学")
let student3 : Person = Student(firstName : "Tony", lastName : "Guan", school : "香港大学")

let worker1 : Person = Worker(firstName : "Tom", lastName : "Zhao", factory : "钢厂")
let worker2 : Person = Worker(firstName : "Ben", lastName : "Zhao", factory : "电厂")

let people : [Person] = [student1, student2, student3, worker1, worker2]

for item : Person in people {
    
    if let student = item as? Student {
        println("Student school: \(student.school)")
        println("Student fullName: \(student.fullName)")
        println("Student description: \(student.description())")
    } else if let worker = item as? Worker {
        println("Worker factory: \(worker.factory)")
        println("Worker fullName: \(worker.fullName)")
        println("Worker description: \(worker.description())")
    }
    
}
