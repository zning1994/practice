//: Playground - noun: a place where people can play

import UIKit

//Chapter 1~3

var str = "Hello world!"


//Chapter 4

var a = 12
println(-a)

var b = a++
println(b)

b = ++a
println(b)


var intResult = 1 + 2
println(intResult)

intResult = intResult - 1
println(intResult)


intResult = intResult * 2
println(intResult)

intResult = intResult / 2
println(intResult)

println("-----------")

var doubleResult = 10.0
println(doubleResult)

doubleResult = doubleResult - 1
println(doubleResult)

doubleResult = doubleResult * 2
println(doubleResult)

doubleResult = doubleResult / 2
println(doubleResult)

doubleResult = doubleResult + 8
doubleResult = doubleResult % 7
println(doubleResult)

var a2 = 1
var b2 = 2
a2 += b2
println(a2)

a2 += b2 + 3
println(a2)
a2 -= b2
println(a2)

a2 *= b2
println(a2)

a2 /= b2
println(a2)

a2 %= b2
println(a2)

var value1 = 1
var value2 = 2
if value1 == value2 {
    println("value1 == value2")
}

if value1 != value2 {
    println("value1 != value2")
}

if value1 > value2 {
    println("value1 > value2")
}

if value1 < value2 {
    println("value1 < value2")
}

if value1 <= value2 {
    println("value1 <= value2")
}

let name1 = "world"
let name2 = "world"
if name1 == name2 {
    println("name1 == name2")
}

let aa1 = [1,2]
let aa2 = [1,2]

if aa1 == aa2 {
    println("a1 == a2")
}

//if aa1 === aa2 {
//    println("a1 === a2")
//}

var i = 0
var a3 = 10
var b3 = 9

if (a > b) || (i++ == 1){
    println("或运算为 true")
}else{
    println("或运算为 false")
}

println("i = \(i)")

i = 0;

if (a < b) && (i++ == 1){
    println("与运算为 true")
}else{
    println("与运算为 false")
}

let a4 : UInt8 = 0b10110010
let b4 : UInt8 = 0b01011110

println("a4 | b4 = \(a4 | b4)")
println("a4 & b4 = \(a4 & b4)")
println("a4 ^ b4 = \(a4 ^ b4)")
println("~a = \(~a)")

println("a4 >> 2 = \(a4 >> 2)")
println("a4 << 2 = \(a4 << 2)")

let c4:Int8 = -0b1100

println("c4 >> 2 = \(c4 >> 2)")
println("c4 << 2 = \(c4 << 2)")

//Chapter 5

println("UInt8 range: \(UInt8.min)~\(UInt8.max)")
println("Int8 range: \(Int8.min)~\(Int8.max)")
println("UInt range: \(UInt.min)~\(UInt.max)")
println("Int range: \(Int.min)~\(Int.max)")
println("Int32 range: \(Int32.min)~\(Int32.max)")

var interestRate = 000.0156
var myMoney = 3_360_000
println("\(interestRate) \(myMoney)")


//并没有什么输出？
//var is🐎 ＝ true 语句出错？
var its🐼 : Bool = false

if(its🐼){
    println("是的，它应该是🐎")
}else{
    println("不，它不是马，是🐼")
}

var student1 = ("1001","张三",30,90)
println("学生 \(student1.1) 学号 \(student1.0) 年龄 \(student1.2) 得分 \(student1.3)")

var student2 = (id:"1002",name:"李四",age:32,score:80)
println("学生 \(student2.name) 学号 \(student2.id) 年龄 \(student2.age) 得分 \(student2.score)")

let (id1,name11,age1,score1) = student1

println("学生 \(name11) 学号 \(id1) 年龄 \(age1) 得分 \(score1)")

let (id2,name22,_,_) = student2

println("学生 \(name22) 学号 \(id2)")


//Chapter 6

let andSign1:Character = "&"
let andSign2 = "\u{26}"

let lamda1:Character = "λ"
let lamda2 = "\u{03bb}"

let smile1:Character = "😄"
let smile2 = "\u{0001f604}"

var numsec = 5
var description = "数值 \(numsec) 是"
switch numsec
{
case 2,3,5,7,11,13,17,19:
    description += "［质数］而且还是"
    fallthrough
default:
    description += "［整数］"
}

