// Playground - noun: a place where people can play

var student = (id:"1002", name:"李四", age:32, ChineseScore:90, EnglishScore:91)

var desc:String

switch student {
case (_, _, let age, 90...100, 90...100) where age > 0:
    desc = "优"
case (_, _, _, 80..<90, 80..<90):
    desc = "良"
case (_, _, _, 60..<80, 60..<80):
    desc = "中"
case (_, _, _, 60..<80, 90...100), (_, _, _, 90...100, 60..<80):
    desc = "偏科"
case (_, _, _, 0..<80, 90...100), (_, _, _, 90...100, 0..<80):
    desc = "严重偏科"
default:
    desc = "无"
}

println("说明：\(desc)")
