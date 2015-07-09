//  本书网站：http://www.51work6.com/swift.php
//  智捷iOS课堂在线课堂：http://v.51work6.com
//  智捷iOS课堂新浪微博：http://weibo.com/u/3215753973
//  智捷iOS课堂微信公共账号：智捷iOS课堂
//  作者微博：http://weibo.com/516inc
//  官方csdn博客：http://blog.csdn.net/tonny_guan
//  Swift语言QQ讨论群：362298485 联系QQ：1575716557 邮箱：jylong06@163.com

import UIKit

func makeArray() -> (String)->[String] {
    
    var ary:[String] = [String]()
    
    func addElement(element:String) -> [String] {
        ary.append(element)
        return ary
    }
    
    return addElement
}

let f1 = makeArray()
println("---f1---")
println(f1("张三"))
println(f1("李四"))
println(f1("王五"))

println("---f2---")
let f2 = makeArray()
println(f2("刘备"))
println(f2("关羽"))
println(f2("张飞"))

