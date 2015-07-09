//  本书网站：http://www.51work6.com/swift.php
//  智捷iOS课堂在线课堂：http://v.51work6.com
//  智捷iOS课堂新浪微博：http://weibo.com/u/3215753973
//  智捷iOS课堂微信公共账号：智捷iOS课堂
//  作者微博：http://weibo.com/516inc
//  官方csdn博客：http://blog.csdn.net/tonny_guan
//  Swift语言QQ讨论群：362298485 联系QQ：1575716557 邮箱：jylong06@163.com


//////////////// 示例1 ///////////////////////
class RectangleA {
    var width : Double
    var height : Double
    
    init(W width : Double,H height : Double) {
        self.width   = width
        self.height  = height
    }
}

var recta = RectangleA(W : 320, H : 480)
println("长方形A:\(recta.width) x \(recta.height)")

//////////////// 示例2 ///////////////////////

class RectangleB {
    var width : Double
    var height : Double
    
    init(width : Double, height : Double) {
        self.width   = width
        self.height  = height
    }
}

var rectb = RectangleB(width : 320, height : 480)
println("长方形B:\(rectb.width) x \(rectb.height)")

//////////////// 示例3 ///////////////////////
struct RectangleC {
    var width : Double = 0.0
    var height : Double = 0.0
}

var rectc = RectangleC(width : 320, height: 480)
println("长方形C:\(rectc.width) x \(rectc.height)")