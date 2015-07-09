// Playground - noun: a place where people can play

var i = 0
var a = 10
var b = 9

if (a > b) || (i++ == 1) {// 换成 | 试一下
    println("或运算为 真")
} else {
    println("或运算为 假")
}

println("i = \(i)")

i = 0;

if (a < b) && (i++ == 1) {// 换成 & 试一下
    println("与运算为 真")
} else {
    println("与运算为 假")
}

println("i = \(i)")