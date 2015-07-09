//  本书网站：http://www.51work6.com/swift.php
//  智捷iOS课堂在线课堂：http://v.51work6.com
//  智捷iOS课堂新浪微博：http://weibo.com/u/3215753973
//  智捷iOS课堂微信公共账号：智捷iOS课堂
//  作者微博：http://weibo.com/516inc
//  官方csdn博客：http://blog.csdn.net/tonny_guan
//  Swift语言QQ讨论群：362298485 联系QQ：1575716557 邮箱：jylong06@163.com

import UIKit

extension String {
    
    subscript(index : Int) ->String {
        
        if  index > countElements(self) {
            return ""
            }
            var c : String = ""
            var i = 0
            
            for character in self {
                if (i == index) {
                    c = String(character)
                    break
                }
                i++
            }
            return c
    }
}

let s = "The quick brown fox jumps over the lazy dog"
println(s[0])

println("ABC"[2])
