//  本书网站：http://www.51work6.com/swift.php
//  智捷iOS课堂在线课堂：http://v.51work6.com
//  智捷iOS课堂新浪微博：http://weibo.com/u/3215753973
//  智捷iOS课堂微信公共账号：智捷iOS课堂
//  作者微博：http://weibo.com/516inc
//  官方csdn博客：http://blog.csdn.net/tonny_guan
//  Swift语言QQ讨论群：362298485 联系QQ：1575716557 邮箱：jylong06@163.com

let c1:Int = {(a:Int, b:Int) -> Int in
    return a + b
    }(10,5)

println("10 + 5 = \(c1)")

let c2:Int = {(a:Int, b:Int) -> Int in
    return a - b
    }(10,5)

println("10 - 5 = \(c2)")
