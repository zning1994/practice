//  本书网站：http://www.51work6.com/swift.php
//  智捷iOS课堂在线课堂：http://v.51work6.com
//  智捷iOS课堂新浪微博：http://weibo.com/u/3215753973
//  智捷iOS课堂微信公共账号：智捷iOS课堂
//  作者微博：http://weibo.com/516inc
//  官方csdn博客：http://blog.csdn.net/tonny_guan
//  Swift语言QQ讨论群：362298485 联系QQ：1575716557 邮箱：jylong06@163.com

import Foundation

var weeksNames : NSMutableArray = NSMutableArray(capacity: 3) //-initWithCapacity:

weeksNames.addObject("星期一")
weeksNames.addObject("星期二")
weeksNames.addObject("星期三")
weeksNames.addObject("星期四")
weeksNames.addObject("星期五")
weeksNames.addObject("星期六")
weeksNames.addObject("星期日")

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
