//  本书网站：http://www.51work6.com/swift.php
//  智捷iOS课堂在线课堂：http://v.51work6.com
//  智捷iOS课堂新浪微博：http://weibo.com/u/3215753973
//  智捷iOS课堂微信公共账号：智捷iOS课堂
//  作者微博：http://weibo.com/516inc
//  官方csdn博客：http://blog.csdn.net/tonny_guan
//  Swift语言QQ讨论群：362298485 联系QQ：1575716557 邮箱：jylong06@163.com

import UIKit

protocol Figure {
    func onDraw() //定义抽象绘制几何图形
}
class Rectangle : Figure {
    func onDraw() {
        println("绘制矩形...")
    }
}
class Circle : Figure {
    func onDraw() {
        println("绘制圆形...")
    }
}

let rect : Figure = Rectangle()
rect.onDraw()

let circle : Figure = Circle()
circle.onDraw()

