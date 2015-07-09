//  本书网站：http://www.51work6.com/swift.php
//  智捷iOS课堂在线课堂：http://v.51work6.com
//  智捷iOS课堂新浪微博：http://weibo.com/u/3215753973
//  智捷iOS课堂微信公共账号：智捷iOS课堂
//  作者微博：http://weibo.com/516inc
//  官方csdn博客：http://blog.csdn.net/tonny_guan
//  Swift语言QQ讨论群：362298485 联系QQ：1575716557 邮箱：jylong06@163.com


class Rectangle {
    var width : Double
    var height : Double
    
    init() {
        width   = 0.0
        height  = 0.0
    }
}

var rect = Rectangle()
rect.width = 320.0
rect.height = 480.0

println("长方形:\(rect.width) x \(rect.height)")


class Employee {
    let no : Int
    var name : String?
    var job : String?
    var salary : Double
    var dept : Department?
    
    init() {
        no = 0
        salary = 0.0
    }
}

struct Department {
    let no : Int
    var name : String
    init() {
        no = 10
        name = "SALES"
    }
}


let dept = Department()

var emp = Employee()
