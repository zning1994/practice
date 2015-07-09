// Playground - noun: a place where people can play

var studentList: [String]  = ["张三","李四","王五"]

for item in studentList {
    println (item)
}
for (index, value) in enumerate(studentList) {
    println("Item \(index + 1 ) : \(value)")
}

