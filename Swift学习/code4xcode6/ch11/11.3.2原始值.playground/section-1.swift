//  本书网站：http://www.51work6.com/swift.php
//  智捷iOS课堂在线课堂：http://v.51work6.com
//  智捷iOS课堂新浪微博：http://weibo.com/u/3215753973
//  智捷iOS课堂微信公共账号：智捷iOS课堂
//  作者微博：http://weibo.com/516inc
//  官方csdn博客：http://blog.csdn.net/tonny_guan
//  Swift语言QQ讨论群：362298485 联系QQ：1575716557 邮箱：jylong06@163.com


enum WeekDays : Int {
    case Monday         = 0
    case Tuesday        = 1
    case Wednesday      = 2
    case Thursday       = 3
    case Friday         = 4
}

//enum WeekDays : Int {
//    case Monday = 0, Tuesday, Wednesday, Thursday, Friday
//}

var day  = WeekDays.Friday
day = WeekDays.Wednesday


func writeGreeting(day : WeekDays) {
    
    switch day {
    case .Monday:
        println("星期一好！")
    case .Tuesday :
        println("星期二好！")
    case .Wednesday :
        println("星期三好！")
    case .Thursday :
        println("星期四好！")
    case .Friday :
        println("星期五好！")
    }
    
}

let friday = WeekDays.Friday.rawValue

let thursday = WeekDays(rawValue: 3)

if (WeekDays.Friday.rawValue == 4) {
    println("今天是星期五")
}

writeGreeting(day)
writeGreeting(WeekDays.Friday)
