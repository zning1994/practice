//  本书网站：http://www.51work6.com/swift.php
//  智捷iOS课堂在线课堂：http://v.51work6.com
//  智捷iOS课堂新浪微博：http://weibo.com/u/3215753973
//  智捷iOS课堂微信公共账号：智捷iOS课堂
//  作者微博：http://weibo.com/516inc
//  官方csdn博客：http://blog.csdn.net/tonny_guan
//  Swift语言QQ讨论群：362298485 联系QQ：1575716557 邮箱：jylong06@163.com


//定义计算长方形面积函数
func rectangleArea(width:Double, height:Double) -> Double {
    let area = width * height
    return area
}

//定义计算三角形面积函数
func triangleArea(bottom:Double, height:Double) -> Double {
    let area = 0.5 * bottom * height
    return area
}


func getArea(type : String) -> (Double, Double) -> Double  {
    
    var returnFunction:(Double, Double) -> Double
    
    switch (type) {
    case "rect":   //rect 表示长方形
        returnFunction = rectangleArea
    case "tria":  //tria 表示三角形
        returnFunction = triangleArea
    default:
        returnFunction = rectangleArea
    }
    
    return returnFunction
}

//获得计算三角形面积函数
var area : (Double, Double) -> Double = getArea("tria")
println("底10 高13，三角形面积：\(area(10,15))")

//获得计算长方形面积函数
area = getArea("rect")
println("宽10 高15，计算长方形面积：\(area(10,15))")