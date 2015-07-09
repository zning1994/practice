//  本书网站：http://www.51work6.com/swift.php
//  智捷iOS课堂在线课堂：http://v.51work6.com
//  智捷iOS课堂新浪微博：http://weibo.com/u/3215753973
//  智捷iOS课堂微信公共账号：智捷iOS课堂
//  作者微博：http://weibo.com/516inc
//  官方csdn博客：http://blog.csdn.net/tonny_guan
//  Swift语言QQ讨论群：362298485 联系QQ：1575716557 邮箱：jylong06@163.com

import UIKit

protocol Person {
    var firstName : String { get set }
    var lastName : String { get set }
    var fullName : String { get }
    func description() -> String
}

protocol Student : Person {
    var school : String { get set }
}

class Graduate : Student {
    
    var special : String
    
    var firstName : String
    var lastName : String
    var school : String
    
    var fullName : String {
        return self.firstName + "." + self.lastName
    }
    
    func description() -> String {
        return " firstName: \(firstName)\n lastName: \(lastName)\n School: \(school)\n Special: \(special)"
    }
    
    init (firstName : String, lastName : String, school : String, special : String) {
        self.firstName = firstName
        self.lastName = lastName
        self.school = school
        self.special = special
    }
}

let gstudent = Graduate(firstName : "Tom", lastName : "Guan", school : "清华大学", special : "计算机")

println(gstudent.description())


