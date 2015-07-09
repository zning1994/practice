// Playground - noun: a place where people can play

class Employee {
    var name : String       // 姓名
    var salary : Double     // 工资
    init (n : String) {
        name = n
        salary = 0
    }
}

var emps = Array<Employee>()
let emp1 = Employee(n: "Amy Lee")
let emp2 = Employee(n: "Harry Hacker")
emps.append(emp1)
emps.append(emp2)

//赋值，发生拷贝
var copyEmps = emps

let copyEmp : Employee! = copyEmps[0]
copyEmp.name = "Gary Cooper"

let emp : Employee! = emps[0]
println(emp.name)
