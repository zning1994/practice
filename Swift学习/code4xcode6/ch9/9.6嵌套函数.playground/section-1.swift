//  本书网站：http://www.51work6.com/swift.php
//  智捷iOS课堂在线课堂：http://v.51work6.com
//  智捷iOS课堂新浪微博：http://weibo.com/u/3215753973
//  智捷iOS课堂微信公共账号：智捷iOS课堂
//  作者微博：http://weibo.com/516inc
//  官方csdn博客：http://blog.csdn.net/tonny_guan
//  Swift语言QQ讨论群：362298485 联系QQ：1575716557 邮箱：jylong06@163.com

func calculate(opr :String)-> (Int,Int)-> Int {
    
    //定义+函数
    func add(a:Int, b:Int) -> Int {
        return a + b
    }
    //定义-函数
    func sub(a:Int, b:Int) -> Int {
        return a - b
    }
    
    var result : (Int,Int)-> Int
    
    switch (opr) {
    case "+" :
        result = add
    case "-" :
        result = sub
    default:
        result = add
    }
    return result
}

let f1:(Int,Int)-> Int = calculate("+")
println("10 + 5 = \(f1(10,5))")

let f2:(Int,Int)-> Int = calculate("-")
println("10 + 5 = \(f2(10,5))")

