// Playground - noun: a place where people can play

label1: for var x = 0; x < 5; x++ {
    
    label2: for var y = 5; y > 0; y-- {
        if y == x {
            //continue label1
        }
        println("(x,y) = (\(x),\(y))")
    }
}

println("Game Over!")
