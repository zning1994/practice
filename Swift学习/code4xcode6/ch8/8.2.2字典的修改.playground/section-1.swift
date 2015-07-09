// Playground - noun: a place where people can play

var studentDictionary = [102 : "张三",105 : "李四", 109 : "王五"]

studentDictionary[110] = "董六"

println("班级人数：\(studentDictionary.count)")

let dismissStudent = studentDictionary.removeValueForKey(102)

println("开除的学生：\(dismissStudent)")

studentDictionary[105] = nil

studentDictionary[109] = "张三"

let replaceStudent = studentDictionary.updateValue("李四", forKey:110)
println("被替换的学生是：\(replaceStudent)")