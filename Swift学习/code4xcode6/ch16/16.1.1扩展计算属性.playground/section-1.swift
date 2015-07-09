//  本书网站：http://www.51work6.com/swift.php
//  智捷iOS课堂在线课堂：http://v.51work6.com
//  智捷iOS课堂新浪微博：http://weibo.com/u/3215753973
//  智捷iOS课堂微信公共账号：智捷iOS课堂
//  作者微博：http://weibo.com/516inc
//  官方csdn博客：http://blog.csdn.net/tonny_guan
//  Swift语言QQ讨论群：362298485 联系QQ：1575716557 邮箱：jylong06@163.com

import UIKit

extension Int {
    var errorMessage : String {
        var errorStr = ""
            switch (self) {
            case -7:
                errorStr = "没有数据。"
            case -6:
                errorStr = "日期没有输入。"
            case -5:
                errorStr = "内容没有输入。"
            case -4:
                errorStr = "ID没有输入。"
            case -3:
                errorStr = "据访问失败。"
            case -2:
                errorStr = "您的账号最多能插入10条数据。"
            case -1:
                errorStr = "用户不存在，请到http://iosbook3.com注册。"
            default:
                errorStr = ""
            }
            return errorStr
    }
}
let message = (-7).errorMessage
println("Error Code : -7 , Error Message : \(message)")


struct Account {
    var amount : Double = 0.0               	//账户金额
    var owner : String = ""                 	//账户名
}

extension Account {
    static var interestRate : Double {      //利率
    return 0.668
    }
}

println(Account.interestRate)
