//
//  main.swift
//  MySwiftProjTest
//
//  Created by ZNing on 15/6/9.
//  Copyright (c) 2015年 ZNing. All rights reserved.
//

import Foundation

println("Hello, World!")
println("唐静是个SHACHA")

var numsec = 5
var description = "数值 \(numsec) 是"
switch numsec
{
case 2,3,5,7,11,13,17,19:
    description += "［质数］而且还是"
    fallthrough
default:
    description += "［整数］"
}
println(description)

var sorce = 75
switch sorce
{
case 91...100:
    println("A.")
case 81...90:
    println("B.")
case 71...80:
    println("C.")
case 61...70:
    println("D.")
case 0..<60:
    println("F.")
default:
    break
}

var mineArr : Array<String>
var mineNames : [String]
var mineNums : [Int]

mineArr = Array<String>()
mineNames = Array<String> (count: 10, repeatedValue: "fkit")
mineNums = Array<Int> (count: 100, repeatedValue: 0)

var flowers:[String] = ["♥️","♦️","♠️","♣️"]
var values = ["2","3","4","5","6"]

println(mineNames[1])
mineNames[0] = "Spring"

for var i = 0; i < flowers.count ;i++
{
    println(flowers[i])
}

mineNames[1] = "Lua"
mineNames[2] = "Ruby"

for var i = 0 ; i < mineNames.count ; i++
{
    println(mineNames[i])
}

var books : [String] = ["理想之路","玄幻之路","傻叉之路"]
for book in books
{
    println(book)
}

var languages = ["Swift"]

languages.append("Go")
languages.append("Lua")
println(languages)
println(languages.count)
languages = languages + ["Ruby"]
languages += ["Ruby"]
println(languages)
println(languages.count)

var newLanguages = ["Swift"]
newLanguages.insert("Go", atIndex: 0)
newLanguages.insert("Lua", atIndex: 2)

println(newLanguages)
println(newLanguages.count)
//newLanguages.insert("Ruby", atIndex: 4) 错误：超出数组现有长度

var secLanguages = ["Swift","OC","PHP","Perl","Ruby","Go"]
let subRange = secLanguages[1..<4]
secLanguages[2...4] = ["C/C++","Python"]
secLanguages[1...2] = ["a","b","c"]

secLanguages[0..<secLanguages.count] = []
println(secLanguages)

secLanguages = ["Swift","OC","PHP","Perl","Ruby","Go"]

secLanguages.removeAtIndex(2)
secLanguages.removeAtIndex(2)
secLanguages.removeLast()
println(secLanguages)

secLanguages.removeAll()
println(secLanguages)
println(secLanguages.count)

var amax : [[Int]]
amax = Array<Array<Int>> (count: 4, repeatedValue: [])
for var i = 0 , len = amax.count; i < len ; i++
{
    println(amax[i]);
}
amax[0] = Array<Int> (count: 2 , repeatedValue: 0)
amax[0][1] = 6;
for var i = 0, len = amax[0].count ; i<len ; i++
{
    println(amax[0][i]);
}

var myDict : Dictionary<String, String>

var scores : [String : Int]
var health : [String : String]

myDict = Dictionary<String, String>()
scores = Dictionary<String, Int>(minimumCapacity: 5)
println(scores)

health = ["Hight":"178","Weight":"74","BloodPresure":"86/113"]
println(health)

var dict = ["one": 1,"two": 2, "three": 3,"four": 4]
println(dict)

var emptyDict:[String:Double] = [:]
println(emptyDict.isEmpty)
println(emptyDict)

var height = health["Hight"]
println("身高为：\(height)")

var noExist = health["no"]
println(noExist)

health["血压"] = "78/112"
println(health)

//赋值失败？
//scores["语文"]＝87
//scores["数学"]＝92
