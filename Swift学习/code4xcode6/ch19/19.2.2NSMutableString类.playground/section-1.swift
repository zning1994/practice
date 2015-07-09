//  本书网站：http://www.51work6.com/swift.php
//  智捷iOS课堂在线课堂：http://v.51work6.com
//  智捷iOS课堂新浪微博：http://weibo.com/u/3215753973
//  智捷iOS课堂微信公共账号：智捷iOS课堂
//  作者微博：http://weibo.com/516inc
//  官方csdn博客：http://blog.csdn.net/tonny_guan
//  Swift语言QQ讨论群：362298485 联系QQ：1575716557 邮箱：jylong06@163.com

import Foundation

var str1 : NSString = "Objective C"
var search, replace : NSString

var mstr : NSMutableString
var substr : NSRange

//从不可变的字符创建可变字符串对象
mstr = NSMutableString(string: str1)
NSLog(" %@", mstr)
//输出： Objective C

//插入字符串
mstr.insertString(" Java", atIndex : 9)
NSLog(" %@", mstr)
//输出： Objective Java C

//具有连接效果的插入字符串
mstr.insertString(" and C++", atIndex : mstr.length)
NSLog(" %@", mstr)
//输出： Objective Java C and C++

//字符串连接方法
mstr.appendString(" and C")
NSLog(" %@", mstr)
//输出： Objective Java C and C++ and C

//使用NSRange删除字符串
mstr.deleteCharactersInRange(NSMakeRange(16, 13))
NSLog(" %@", mstr)
//输出： Objective Java CC

//查找字符串位置
substr = mstr.rangeOfString("string B and")
if substr.location != NSNotFound {
    mstr.deleteCharactersInRange(substr)
    NSLog(" %@", mstr)
}

//直接设置可变字符串
mstr.setString("This is string A ")
NSLog(" %@", mstr)
//输出： This is string A

mstr.replaceCharactersInRange(NSMakeRange(8, 8), withString: "a mutable string ")
NSLog(" %@", mstr)
//输出： This is a mutable string

//查找和替换
search = "This is "
replace = "An example of "

substr = mstr.rangeOfString(search)

if substr.location != NSNotFound {
    mstr.replaceCharactersInRange(substr, withString: replace)
    NSLog(" %@", mstr)
    //输出： An example of a mutable string
}

//查找和替换所有的情况
search = "a"
replace = "X"
substr = mstr.rangeOfString(search)

while substr.location != NSNotFound {
    mstr.replaceCharactersInRange(substr, withString: replace)
    substr = mstr.rangeOfString(search)
}
NSLog(" %@", mstr)
//输出： An exXmple of X mutXble string

