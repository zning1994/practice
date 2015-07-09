// Playground - noun: a place where people can play

let numbers = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10]

println("----for-------")
for var i = 0; i < countElements(numbers); i++ {
    println("Count is: \(i)")
}

println("----for in----")
for item in numbers {
    println("Count is: \(item)")
    //break
}
