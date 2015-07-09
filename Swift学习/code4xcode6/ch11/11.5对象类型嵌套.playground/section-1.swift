//  本书网站：http://www.51work6.com/swift.php
//  智捷iOS课堂在线课堂：http://v.51work6.com
//  智捷iOS课堂新浪微博：http://weibo.com/u/3215753973
//  智捷iOS课堂微信公共账号：智捷iOS课堂
//  作者微博：http://weibo.com/516inc
//  官方csdn博客：http://blog.csdn.net/tonny_guan
//  Swift语言QQ讨论群：362298485 联系QQ：1575716557 邮箱：jylong06@163.com


class Employee {
    
    var no : Int = 0
    var name : String = ""
    var job : String = ""
    var salary : Double = 0
    var dept : Department = Department()
    
    var day : WeekDays = WeekDays.Friday
    
    struct Department {
        var no : Int = 10
        var name : String = "SALES"
    }
    
    enum WeekDays {
        case Monday
        case Tuesday
        case Wednesday
        case Thursday
        case Friday
        
        struct Day {
            static var message : String = "Today is..."
        }
    }
}


var emp = Employee()

println(emp.dept.name)

println(emp.day)

let friday = Employee.WeekDays.Friday

if emp.day == friday {
    println("相等")
}

println(Employee.WeekDays.Day.message)
