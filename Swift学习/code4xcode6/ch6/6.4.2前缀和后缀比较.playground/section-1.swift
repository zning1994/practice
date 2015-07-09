// Playground - noun: a place where people can play

import UIKit

let docFolder = [
    "java.docx",
    "JavaBean.docx",
    "Objecitve-C.xlsx",
    "Swift.docx"
]

var wordDocCount = 0
for doc in docFolder {
    if doc.hasSuffix(".docx") {
        ++wordDocCount
    }
}
println("文件夹中Word文档个数是： \(wordDocCount)")

var javaDocCount = 0
for doc in docFolder {
    
    let lowercaseDoc = doc.lowercaseString
    
    if lowercaseDoc.hasPrefix("java") {
        ++javaDocCount
    }
}
println("文件夹中Java相关文档个数是： \(javaDocCount)")

