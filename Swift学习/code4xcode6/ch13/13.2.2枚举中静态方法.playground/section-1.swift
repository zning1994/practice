//  本书网站：http://www.51work6.com/swift.php
//  智捷iOS课堂在线课堂：http://v.51work6.com
//  智捷iOS课堂新浪微博：http://weibo.com/u/3215753973
//  智捷iOS课堂微信公共账号：智捷iOS课堂
//  作者微博：http://weibo.com/516inc
//  官方csdn博客：http://blog.csdn.net/tonny_guan
//  Swift语言QQ讨论群：362298485 联系QQ：1575716557 邮箱：jylong06@163.com


enum Account {
    
    case 中国银行
    case 中国工商银行
    case 中国建设银行
    case 中国农业银行
    
    static var interestRate : Double = 0.668 //利率
    
    static func interestBy(amount : Double) -> Double {
        return interestRate * amount
    }
}

//调用静态方法
println(Account.interestBy(10_000.00 ))
