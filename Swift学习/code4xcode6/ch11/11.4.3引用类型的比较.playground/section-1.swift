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
    var job : String?
    var salary : Double = 0
    var dept : Department?
}


struct Department {
    var no : Int = 0
    var name : String = ""
}

var emp1 = Employee()
emp1.no = 1000
emp1.name = "Martin"
emp1.job = "Salesman"
emp1.salary = 1250

var emp2 = Employee()
emp2.no = 1000
emp2.name = "Martin"
emp2.job = "Salesman"
emp2.salary = 1250


if emp1 === emp2
{
    println("emp1 === emp2")
}

if emp1 === emp1
{
    println("emp1 === emp1")
}

//if emp1 == emp2    //编译失败
//{
//    println("emp1 === emp2")
//}


var dept1 = Department()
dept1.no = 10
dept1.name = "Sales"

var dept2 = Department()
dept2.no = 10
dept2.name = "Sales"

//if dept1 == dept2   //编译失败
//{
//    println("dept1 === dept2")
//}
//
//if dept1 === dept2   //编译失败
//{
//    println("dept1 === dept2")
//}