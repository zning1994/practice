//  本书网站：http://www.51work6.com/swift.php
//  智捷iOS课堂在线课堂：http://v.51work6.com
//  智捷iOS课堂新浪微博：http://weibo.com/u/3215753973
//  智捷iOS课堂微信公共账号：智捷iOS课堂
//  作者微博：http://weibo.com/516inc
//  官方csdn博客：http://blog.csdn.net/tonny_guan
//  Swift语言QQ讨论群：362298485 联系QQ：1575716557 邮箱：jylong06@163.com

import UIKit

struct Rectangle {
    
    var width : Double
    var height : Double
    
    init(width : Double, height : Double) {
        self.width   = width
        self.height  = height
    }
    func description() -> String {
        return "Rectangle"
    }
}

extension Rectangle {
    init(length : Double) {
        self.init(width : length, height : length)
    }
}

var rect = Rectangle(width : 320.0, height : 480.0)
println("长方形:\(rect.width) x \(rect.height)")

var square = Rectangle(length: 500.0)
println("正方形:\(square.width) x \(square.height)")

class Person {
    var name : String
    var age : Int
    func description() -> String {
        return "\(name) 年龄是: \(age)"
    }
    init (name : String, age : Int) {
        self.name = name
        self.age  = age
    }
}

extension Person {
    convenience init (name : String) {
        self.init(name : name, age : 8)
    }
}

let p1 = Person(name : "Mary")
println("Person1 : \(p1.description())")
let p2 = Person(name : "Tony", age : 28)
println("Person2 : \(p2.description())")