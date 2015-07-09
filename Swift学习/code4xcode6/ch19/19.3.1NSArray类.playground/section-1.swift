//  本书网站：http://www.51work6.com/swift.php
//  智捷iOS课堂在线课堂：http://v.51work6.com
//  智捷iOS课堂新浪微博：http://weibo.com/u/3215753973
//  智捷iOS课堂微信公共账号：智捷iOS课堂
//  作者微博：http://weibo.com/516inc
//  官方csdn博客：http://blog.csdn.net/tonny_guan
//  Swift语言QQ讨论群：362298485 联系QQ：1575716557 邮箱：jylong06@163.com

import Foundation

let weeksArray = ["星期一","星期二", "星期三", "星期四", "星期五", "星期六","星期日"]

var weeksNames:NSArray = NSArray(array: weeksArray)

NSLog("星期名字")
NSLog("====   ====")

for var i = 0; i < weeksNames.count; i++ {
    var obj : AnyObject = weeksNames.objectAtIndex(i)
    var day = obj as NSString
    NSLog("%i     %@", i, day)
}

for item : AnyObject in weeksNames {
    var day = item as NSString
    NSLog("%@", day)
}
