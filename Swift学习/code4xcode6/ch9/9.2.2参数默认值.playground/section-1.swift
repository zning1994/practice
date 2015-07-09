//  本书网站：http://www.51work6.com/swift.php
//  智捷iOS课堂在线课堂：http://v.51work6.com
//  智捷iOS课堂新浪微博：http://weibo.com/u/3215753973
//  智捷iOS课堂微信公共账号：智捷iOS课堂
//  作者微博：http://weibo.com/516inc
//  官方csdn博客：http://blog.csdn.net/tonny_guan
//  Swift语言QQ讨论群：362298485 联系QQ：1575716557 邮箱：jylong06@163.com

func makecoffee(type : String = "卡布奇诺") -> String {
    return "制作一杯\(type)咖啡。"
}

let coffee1 = makecoffee(type: "拿铁")
let coffee2 = makecoffee()

println("\(coffee1)")
println("\(coffee2)")

func CircleArea(R radius: Double = 30, _ pi: Double = 3.14) -> Double {
    let area = radius * radius * pi
    return area
}

println("圆面积：\(CircleArea(R: 50, 3.1415926))")

