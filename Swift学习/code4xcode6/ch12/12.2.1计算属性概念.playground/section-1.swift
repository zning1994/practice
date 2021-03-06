//  本书网站：http://www.51work6.com/swift.php
//  智捷iOS课堂在线课堂：http://v.51work6.com
//  智捷iOS课堂新浪微博：http://weibo.com/u/3215753973
//  智捷iOS课堂微信公共账号：智捷iOS课堂
//  作者微博：http://weibo.com/516inc
//  官方csdn博客：http://blog.csdn.net/tonny_guan
//  Swift语言QQ讨论群：362298485 联系QQ：1575716557 邮箱：jylong06@163.com

import UIKit

class Employee {
    var no : Int = 0
    var firstName : String = "Tony"
    var lastName : String = "Guan"
    var job : String?
    var salary : Double = 0
    lazy var dept : Department = Department()
    
    var fullName : String {
        get {
            return firstName + "." + lastName
        }
        
        //    set (newFullName) {
        //        var name = newFullName.componentsSeparatedByString(".")
        //        firstName = name[0]
        //        lastName = name[1]
        //    }
        
        set {
            var name = newValue.componentsSeparatedByString(".")
            firstName = name[0]
            lastName = name[1]
        }
        
    }
}

struct Department {
    let no : Int = 0
    var name : String = ""
}

var emp = Employee()
println(emp.fullName)

emp.fullName = "Tom.Guan"
println(emp.fullName)

