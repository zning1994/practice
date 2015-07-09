//  本书网站：http://www.51work6.com/swift.php
//  智捷iOS课堂在线课堂：http://v.51work6.com
//  智捷iOS课堂新浪微博：http://weibo.com/u/3215753973
//  智捷iOS课堂微信公共账号：智捷iOS课堂
//  作者微博：http://weibo.com/516inc
//  官方csdn博客：http://blog.csdn.net/tonny_guan
//  Swift语言QQ讨论群：362298485 联系QQ：1575716557 邮箱：jylong06@163.com

import Foundation

class Person {
    
    var name : String
    var age : Int
    
    func description() -> String {
        return "\(name) 年龄是: \(age)"
    }
    
    class func printlnClass() ->() {
        println( "Person 打印...")
    }
    
    init (name : String, age : Int) {
        self.name = name
        self.age  = age
    }
}

class Student : Person {
    
    var school : String
    
    convenience init() {
        self.init(name : "Tony", age : 18, school : "清华大学")
    }
    
    init (name : String, age : Int, school : String) {
        self.school = school
        super.init(name : name, age : age)
    }
    
    override func description() -> String {
        println("父类打印 \(super.description())")
        return "\(name) 年龄是: \(age), 所在学校: \(school)。"
    }
    
    override class func printlnClass() ->() {
        println( "Student 打印...")
    }
}

let student1 = Student()
println("学生1：\(student1.description())")

let student2 : Person = Student()
println("学生2：\(student2.description())")

let student3 : Student = Student()
println("学生3：\(student3.description())")

Person.printlnClass()
Student.printlnClass()
