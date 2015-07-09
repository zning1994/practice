//  本书网站：http://www.51work6.com/swift.php
//  智捷iOS课堂在线课堂：http://v.51work6.com
//  智捷iOS课堂新浪微博：http://weibo.com/u/3215753973
//  智捷iOS课堂微信公共账号：智捷iOS课堂
//  作者微博：http://weibo.com/516inc
//  官方csdn博客：http://blog.csdn.net/tonny_guan
//  Swift语言QQ讨论群：362298485 联系QQ：1575716557 邮箱：jylong06@163.com

class Account {
    
    var amount : Double = 0.0               // 账户金额
    var owner : String = ""                 //账户名
    
    var interestRate : Double = 0.668       //利率
    
    class var staticProp : Double {
    return 0.668 * 1_000_000
    }
    
    var instanceProp : Double {
        return self.interestRate * self.amount
    }
}

//访问静态属性
println(Account.staticProp)


var myAccount = Account()
//访问实例属性
myAccount.amount = 1_000_000
//访问静态属性
println(myAccount.instanceProp)

