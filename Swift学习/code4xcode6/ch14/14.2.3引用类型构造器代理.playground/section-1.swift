//  本书网站：http://www.51work6.com/swift.php
//  智捷iOS课堂在线课堂：http://v.51work6.com
//  智捷iOS课堂新浪微博：http://weibo.com/u/3215753973
//  智捷iOS课堂微信公共账号：智捷iOS课堂
//  作者微博：http://weibo.com/516inc
//  官方csdn博客：http://blog.csdn.net/tonny_guan
//  Swift语言QQ讨论群：362298485 联系QQ：1575716557 邮箱：jylong06@163.com

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
    
    convenience init(length : Double) {
        self.init(W : length, H : length)
    }
    
    convenience init() {
        self.init(width: 640.0, height: 940.0)
    }
    
}

var rectc1 = Rectangle(width : 320.0, height : 480.0)
println("长方形1:\(rectc1.width) x \(rectc1.height)")

var rectc2 = Rectangle(W : 320.0, H : 480.0)
println("长方形2:\(rectc2.width) x \(rectc2.height)")

var rectc3 = Rectangle(length: 500.0)
println("长方形3:\(rectc3.width) x \(rectc3.height)")

var rectc4 = Rectangle()
println("长方形4:\(rectc4.width) x \(rectc4.height)")

