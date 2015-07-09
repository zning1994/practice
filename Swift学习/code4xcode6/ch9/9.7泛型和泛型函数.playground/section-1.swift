//  本书网站：http://www.51work6.com/swift.php
//  智捷iOS课堂在线课堂：http://v.51work6.com
//  智捷iOS课堂新浪微博：http://weibo.com/u/3215753973
//  智捷iOS课堂微信公共账号：智捷iOS课堂
//  作者微博：http://weibo.com/516inc
//  官方csdn博客：http://blog.csdn.net/tonny_guan
//  Swift语言QQ讨论群：362298485 联系QQ：1575716557 邮箱：jylong06@163.com


func isEqualsInt(a:Int, b:Int) -> Bool {
    return (a == b)
}

func isEqualsDouble(a:Double, b:Double) -> Bool {
    return (a == b)
}

func isEqualsString(a:String, b:String) -> Bool {
    return (a == b)
}

func isEquals<T: Comparable>(a: T, b: T) -> Bool {
    return (a == b)
}

let n1 = 200
let n2 = 100

println(isEquals(n1, n2))

let s1 = "ABC1"
let s2 = "ABC1"

println(isEquals(s1, s2))

