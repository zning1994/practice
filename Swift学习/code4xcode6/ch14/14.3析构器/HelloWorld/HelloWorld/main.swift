//  本书网站：http://www.51work6.com/swift.php
//  智捷iOS课堂在线课堂：http://v.51work6.com
//  智捷iOS课堂新浪微博：http://weibo.com/u/3215753973
//  智捷iOS课堂微信公共账号：智捷iOS课堂
//  作者微博：http://weibo.com/516inc
//  官方csdn博客：http://blog.csdn.net/tonny_guan
//  Swift语言QQ讨论群：362298485 联系QQ：1575716557 邮箱：jylong06@163.com

import UIKit


class Rectangle {
    
    var width : Double
    var height : Double
    
    init(width : Double, height : Double) {
        self.width   = width
        self.height  = height
    }
    
    init(W width : Double,H height : Double) {
        self.width   = width
        self.height  = height
    }
    
    deinit {
        println("调用析构器...")
        self.width = 0.0
        self.height  = 0.0
        
    }
}

var rectc1 : Rectangle? = Rectangle(width : 320, height : 480)
println("长方形:\(rectc1!.width) x \(rectc1!.height)")
rectc1 = nil

var rectc2 : Rectangle? = Rectangle(W : 320, H : 480)
println("长方形:\(rectc2!.width) x \(rectc2!.height)")
rectc2 = nil
