//  本书网站：http://www.51work6.com/swift.php
//  智捷iOS课堂在线课堂：http://v.51work6.com
//  智捷iOS课堂新浪微博：http://weibo.com/u/3215753973
//  智捷iOS课堂微信公共账号：智捷iOS课堂
//  作者微博：http://weibo.com/516inc
//  官方csdn博客：http://blog.csdn.net/tonny_guan
//  Swift语言QQ讨论群：362298485 联系QQ：1575716557 邮箱：jylong06@163.com

func receive(i : Int)  {
    println("接收一个Int类型数据 i=\(i)")
}

func receive(d :Double) {
    println("接收一个Doubel类型数据 d=\(d)")
}

func receive(x :Int, y :Int)  {
    println("接收两个Int类型数据 x=\(x) y=\(y)")
}

func receive(i :Int) ->Int {
    println("接收一个Int类型数据 i=\(i), 返回值类型是Int")
    return i*i
}

func receive(param i : Int)  {
    println("接收一个Int类型数据 i=\(i)，外部参数名param")
}


let a1:Int = receive(10)

let a2:() = receive(10)

let a3:Void = receive(10)

let a4:() = receive(10.0)

let a5:() = receive(10, 10)

let a6:() = receive(param: 10)

