// Playground - noun: a place where people can play

class Employee {
    var name : String       // 姓名
    var salary : Double     // 工资
    init (n : String) {
        name = n
        salary = 0
    }
}

var emps = Dictionary<String, Employee>()
let emp1 = Employee(n: "Amy Lee")
let emp2 = Employee(n: "Harry Hacker")
emps["144-25-5464"] = emp1
emps["567-24-2546"] = emp2

//赋值，发生拷贝
var copyEmps = emps

let copyEmp : Employee! = copyEmps["567-24-2546"]
copyEmp.name = "Gary Cooper"

let emp : Employee! = emps["567-24-2546"]
println(emp.name)

