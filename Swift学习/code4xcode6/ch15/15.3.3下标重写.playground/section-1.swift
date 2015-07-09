//  本书网站：http://www.51work6.com/swift.php
//  智捷iOS课堂在线课堂：http://v.51work6.com
//  智捷iOS课堂新浪微博：http://weibo.com/u/3215753973
//  智捷iOS课堂微信公共账号：智捷iOS课堂
//  作者微博：http://weibo.com/516inc
//  官方csdn博客：http://blog.csdn.net/tonny_guan
//  Swift语言QQ讨论群：362298485 联系QQ：1575716557 邮箱：jylong06@163.com

import UIKit

class DoubleDimensionalArray {
    
    let rows: Int, columns: Int
    var grid: [Int]
    
    init(rows: Int, columns: Int) {
        self.rows = rows
        self.columns = columns
        grid = Array(count: rows * columns, repeatedValue: 0)
    }
    
    subscript(row: Int, col: Int) -> Int {
        
        get {
            return grid[(row * columns) + col]
        }
        
        set {
            grid[(row * columns) + col] = newValue
        }
    }
    
}

class SquareMatrix : DoubleDimensionalArray {
    
    override subscript(row: Int, col: Int) -> Int {
        
        get {
            return super.grid[(row * columns) + col]
        }
        
        set {
            super.grid[(row * columns) + col] = newValue * newValue
        }
    }
}

var ary2 = SquareMatrix(rows: 5, columns: 5)

for var i = 0; i < 5; i++ {
    for var j = 0; j < 5; j++ {
        ary2[i,j] = i + j
    }
}

for var i = 0; i < 5; i++ {
    for var j = 0; j < 5; j++ {
        print("\t\t \(ary2[i,j])")
    }
    print("\n")
}
