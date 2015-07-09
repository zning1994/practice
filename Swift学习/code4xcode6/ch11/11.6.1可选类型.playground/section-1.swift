//  本书网站：http://www.51work6.com/swift.php
//  智捷iOS课堂在线课堂：http://v.51work6.com
//  智捷iOS课堂新浪微博：http://weibo.com/u/3215753973
//  智捷iOS课堂微信公共账号：智捷iOS课堂
//  作者微博：http://weibo.com/516inc
//  官方csdn博客：http://blog.csdn.net/tonny_guan
//  Swift语言QQ讨论群：362298485 联系QQ：1575716557 邮箱：jylong06@163.com

func divide(n1 : Int, n2 : Int) ->Double? {
    if n2 == 0 {
        return nil
    }
    return Double(n1)/Double(n2)
}

let result1 : Double? = divide(100, 200)
println(result1!)

if let result2 : Double = divide(100, 0) {
    println("Success.")
} else {
    println("failure.")
}

let result3 : Double! = divide(100, 200)
println(result3)
