// Playground - noun: a place where people can play

let testscore = 80

var grade:Character

switch testscore {
case 90...100:
    grade = "优"
case 80..<90:
    grade = "良"
case 60..<80:
    grade = "中"
case 0..<60:
    grade = "差"
default:
    grade = "无"
}

println("Grade = \(grade)")