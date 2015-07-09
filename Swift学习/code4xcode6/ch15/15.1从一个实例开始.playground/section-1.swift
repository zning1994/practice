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
    
    init () {
        name = ""
        age  = 1
    }
}

class Student : Person {
    var school : String
    override init () {
        school = ""
        super.init()
        age  = 8
    }
}

let student = Student()
println("学生: \(student.description())")
