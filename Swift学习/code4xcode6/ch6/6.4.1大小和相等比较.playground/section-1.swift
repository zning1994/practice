// Playground - noun: a place where people can play


let 熊: String = "🐻"
let 猫: String = "🐱"

if 熊 > 猫 {
    println("🐻 大于 🐱")
} else {
    println("🐻 小于 🐱")
}

let 🐼 = 熊 + 猫

if 🐼 == "🐻🐱" {
    println("🐼 是 🐻🐱")
} else {
    println("🐼 不是 🐻🐱")
}

let emptyString1 = ""
let emptyString2 = String()

if emptyString1 == emptyString2 {
    println("相等")
} else {
    println("不相等")
}


var a = "a"
var b = "b"
if a > b {
    println(">")
} else {
    println("<")
}
