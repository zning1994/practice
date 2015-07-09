//  本书网站：http://www.51work6.com/swift.php
//  智捷iOS课堂在线课堂：http://v.51work6.com
//  智捷iOS课堂新浪微博：http://weibo.com/u/3215753973
//  智捷iOS课堂微信公共账号：智捷iOS课堂
//  作者微博：http://weibo.com/516inc
//  官方csdn博客：http://blog.csdn.net/tonny_guan
//  Swift语言QQ讨论群：362298485 联系QQ：1575716557 邮箱：jylong06@163.com

class Employee {
    var no : Int = 0
    var name : String = "Tony"
    var job : String?
    var salary : Double = 0
    var dept : Department = Department()
}


class Department {
    var no : Int = 10
    var name : String = "SALES"
    var comp : Company = Company()
}

class Company {
    var no : Int = 1000
    var name : String = "EOrient"
}

var emp = Employee()
println(emp.dept.comp.name)