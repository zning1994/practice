//  本书网站：http://www.51work6.com/swift.php
//  智捷iOS课堂在线课堂：http://v.51work6.com
//  智捷iOS课堂新浪微博：http://weibo.com/u/3215753973
//  智捷iOS课堂微信公共账号：智捷iOS课堂
//  作者微博：http://weibo.com/516inc
//  官方csdn博客：http://blog.csdn.net/tonny_guan
//  Swift语言QQ讨论群：362298485 联系QQ：1575716557 邮箱：jylong06@163.com

import UIKit

extension Double {
    static var interestRate : Double = 0.668 //利率
    func interestBy1() -> Double {
        return self * Double.interestRate
    }
    mutating func interestBy2() {
        self = self * Double.interestRate
    }
    static func interestBy3(amount : Double) -> Double {
        return interestRate * amount
    }
}

let interest1 = (10_000.00).interestBy1()
println("利息1 : \(interest1)")

var interest2 = 10_000.00
interest2.interestBy2()
println("利息2 : \(interest2)")

var interest3 = Double.interestBy3(10_000.00)
println("利息3 : \(interest3)")
