// Playground - noun: a place where people can play

let a: UInt8 = 0b10110010
let b: UInt8 = 0b01011110

println("a | b = \(a | b)") //11111110
println("a & b = \(a & b)") //00010010
println("a ^ b = \(a ^ b)") //11101100
println("~a = \(~a)")       //01001101

println("a >> 2 = \(a >> 2)")   //00101100
println("a << 2 = \(a << 2)")   //11001000

let c:Int8 = -0b1100

println("c >> 2 = \(c >> 2)")   //-00000011
println("c << 2 = \(c << 2)")   //-00110000
