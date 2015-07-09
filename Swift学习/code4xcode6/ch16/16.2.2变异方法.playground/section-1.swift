//  本书网站：http://www.51work6.com/swift.php
//  智捷iOS课堂在线课堂：http://v.51work6.com
//  智捷iOS课堂新浪微博：http://weibo.com/u/3215753973
//  智捷iOS课堂微信公共账号：智捷iOS课堂
//  作者微博：http://weibo.com/516inc
//  官方csdn博客：http://blog.csdn.net/tonny_guan
//  Swift语言QQ讨论群：362298485 联系QQ：1575716557 邮箱：jylong06@163.com

import UIKit


protocol Editable  {
    mutating func edit()
}

class ClassImp : Editable {
    var name = "ClassImp"
    func edit() {
        println("编辑ClassImp...")
        self.name = "编辑ClassImp..."
    }
}

struct StructImp : Editable {
    var name = "StructImp"
    mutating func edit() {
        println("编辑StructImp...")
        self.name = "编辑StructImp..."
    }
}

enum EnumImp : Editable {
    case Monday
    case Tuesday
    case Wednesday
    case Thursday
    case Friday
    
    mutating func edit() {
        println("编辑EnumImp...")
        self = .Friday
    }
}


var classInstance : Editable = ClassImp()
classInstance.edit()

var structInstance : Editable = StructImp()
structInstance.edit()

var enumInstance : Editable = EnumImp.Monday
enumInstance.edit()