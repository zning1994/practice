//  本书网站：http://www.51work6.com/swift.php
//  智捷iOS课堂在线课堂：http://v.51work6.com
//  智捷iOS课堂新浪微博：http://weibo.com/u/3215753973
//  智捷iOS课堂微信公共账号：智捷iOS课堂
//  作者微博：http://weibo.com/516inc
//  官方csdn博客：http://blog.csdn.net/tonny_guan
//  Swift语言QQ讨论群：362298485 联系QQ：1575716557 邮箱：jylong06@163.com

import UIKit

//定义轮船协议
protocol Ship {
    //排水量
    var displacement : Double { get set }
}

//定义武器协议
protocol Weapon {
    //火炮门数
    var gunNumber : Int { get set }
}

//定义军舰类
class Warship : Ship, Weapon {
    //排水量
    var displacement  = 1000_000.00
    //火炮门数
    var gunNumber = 10
}

func showWarResource(resource: protocol<Ship, Weapon>) {
    println("Ship \(resource.displacement) - Weapon \(resource.gunNumber)")
}

let ship = Warship()
showWarResource(ship)
