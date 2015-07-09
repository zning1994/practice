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

var dept = Department()
dept.no = 10
dept.name = "Sales"

var emp = Employee()
emp.no = 1000
emp.name = "Martin"
emp.job = "Salesman"
emp.salary = 1250
emp.dept = dept

func updateDept (inout dept : Department) {
    dept.name = "Research"
}

println("Department更新前:\(dept.name)")
updateDept(&dept)
println("Department更新后:\(dept.name)")

func updateEmp (emp : Employee) {
    emp.job = "Clerk"
}

println("Employee更新前:\(emp.job)")
updateEmp(emp)
println("Employee更新后:\(emp.job)")
