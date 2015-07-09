// Playground - noun: a place where people can play
var studentDictionary = [102 : "张三",105 : "李四", 109 : "王五"]

println("---遍历键---")
for studentID in studentDictionary.keys {
    println("学号：\(studentID)")
}

println("---遍历值---")
for studentName in studentDictionary.values {
    println("学生：\(studentName)")
}

println("---遍历键:值---")
for (studentID, studentName) in studentDictionary {
    println ("\(studentID) : \(studentName)")
}