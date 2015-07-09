// Playground - noun: a place where people can play

var j = 1
var x = 4

switch x {
case 1:
    j++
case 2:
    j++
case 3:
    j++
case 4:
    j++
    fallthrough
case 5:
    j++
    fallthrough
default:
    j++
}

println("j = \(j)")
