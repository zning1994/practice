//  本书网站：http://www.51work6.com/swift.php
//  智捷iOS课堂在线课堂：http://v.51work6.com
//  智捷iOS课堂新浪微博：http://weibo.com/u/3215753973
//  智捷iOS课堂微信公共账号：智捷iOS课堂
//  作者微博：http://weibo.com/516inc
//  官方csdn博客：http://blog.csdn.net/tonny_guan
//  Swift语言QQ讨论群：362298485 联系QQ：1575716557 邮箱：jylong06@163.com

class Employee {
    let no : Int = 0
    var name : String = ""
    var job : String?
    var salary : Double = 0
    var dept : Department?
}

struct Department {
    let no : Int = 0
    var name : String = ""
}

var emp = Employee()
//emp.no = 100            //编译错误

let dept = Department()
//dept.name = "SALES"          //编译错误

let emp1 = Employee()
emp1.name =  "Tony"
