//  本书网站：http://www.51work6.com/swift.php
//  智捷iOS课堂在线课堂：http://v.51work6.com
//  智捷iOS课堂新浪微博：http://weibo.com/u/3215753973
//  智捷iOS课堂微信公共账号：智捷iOS课堂
//  作者微博：http://weibo.com/516inc
//  官方csdn博客：http://blog.csdn.net/tonny_guan
//  Swift语言QQ讨论群：362298485 联系QQ：1575716557 邮箱：jylong06@163.com

import UIKit

class Person {
    var name : String
    var age : Int
    
    func description() -> String {
        return "\(name) 年龄是: \(age)"
    }
    convenience init () {
        self.init(name: "Tony")
        self.age = 18
    }
    convenience init (name : String) {
        self.init(name: name, age: 18)
    }
    init (name : String, age : Int) {
        self.name = name
        self.age  = age
    }
}

class Student : Person {
    var school : String
    init (name : String, age : Int, school : String) {
        self.school = school
        super.init(name : name, age : age)
    }
}

class Worker : Person {
    var factory : String
    init (name : String, age : Int, factory : String) {
        self.factory = factory
        super.init(name : name, age : age)
    }
}

let student1 = Student(name : "Tom", age : 18, school : "清华大学")
let student2 = Student(name : "Ben", age : 28, school : "北京大学")
let student3 = Student(name : "Tony", age : 38, school : "香港大学")

let worker1 = Worker(name : "Tom", age : 18, factory : "钢厂")
let worker2 = Worker(name : "Ben", age : 20, factory : "电厂")

let people = [student1, student2, student3, worker1, worker2]

var studentCount = 0
var workerCount = 0

for item in people {
    if item is Worker {
        ++workerCount
    } else if item is Student {
        ++studentCount
    }
}

println("工人人数：\(workerCount) ，学生人数：\(studentCount) 。")


