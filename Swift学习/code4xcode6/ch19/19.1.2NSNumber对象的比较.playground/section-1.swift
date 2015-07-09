//  本书网站：http://www.51work6.com/swift.php
//  智捷iOS课堂在线课堂：http://v.51work6.com
//  智捷iOS课堂新浪微博：http://weibo.com/u/3215753973
//  智捷iOS课堂微信公共账号：智捷iOS课堂
//  作者微博：http://weibo.com/516inc
//  官方csdn博客：http://blog.csdn.net/tonny_guan
//  Swift语言QQ讨论群：362298485 联系QQ：1575716557 邮箱：jylong06@163.com

import Foundation

var intSwift = 89
var intNumber  = NSNumber(integer: intSwift)
var floatNumber = NSNumber(double: 80.00)

if intNumber.isEqualToNumber(floatNumber) == true {
    NSLog("相等")
} else {
    NSLog("不相等")
}

switch intNumber.compare(floatNumber) {
case .OrderedAscending:
    NSLog("第一个数小于第二个数")
case .OrderedDescending:
    NSLog("第一个数大于第二个数")
case .OrderedSame:
    NSLog("第一个数等于第二个数")
}
