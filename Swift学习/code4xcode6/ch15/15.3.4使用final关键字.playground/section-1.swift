//  本书网站：http://www.51work6.com/swift.php
//  智捷iOS课堂在线课堂：http://v.51work6.com
//  智捷iOS课堂新浪微博：http://weibo.com/u/3215753973
//  智捷iOS课堂微信公共账号：智捷iOS课堂
//  作者微博：http://weibo.com/516inc
//  官方csdn博客：http://blog.csdn.net/tonny_guan
//  Swift语言QQ讨论群：362298485 联系QQ：1575716557 邮箱：jylong06@163.com

import UIKit

final class Person {
    
    var name : String
    
    final var age : Int
    
    final func description() -> String {
        return "\(name) 年龄是: \(age)"
    }
    
    final class func printlnClass() ->() {
        println( "Person 打印...")
    }
    
    init (name : String, age : Int) {
        self.name = name
        self.age  = age
    }
}

class Student : Person {                            //编译错误
    
    var school : String
    
    convenience init() {
        self.init(name : "Tony", age : 18, school : "清华大学")
    }
    
    init (name : String, age : Int, school : String) {
        self.school = school
        super.init(name : name, age : age)
    }
    
    override func description() -> String {         //编译错误
        println("父类打印 \(super.description())")
        return "\(name) 年龄是: \(age), 所在学校: \(school)。"
    }
    
    override class func printlnClass() ->() {      //编译错误
        println( "Student 打印...")
    }
    
    override var age : Int {                        //编译错误
        get {
            return super.age
        }
        set {
            super.age = newValue < 8 ? 8 : newValue
        }
    }
}
