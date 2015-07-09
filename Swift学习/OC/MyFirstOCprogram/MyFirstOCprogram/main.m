//
//  main.m
//  MyFirstOCprogram
//
//  Created by ZNing on 15/6/8.
//  Copyright (c) 2015年 ZNing. All rights reserved.
//

////exp 1.1

//#import <Foundation/Foundation.h>
//
//int main(int argc, const char *argv[]){
//    NSLog(@"Hello my ZNing~");
//    return (0);
//}

////exp 2.3

//#import <Foundation/Foundation.h>
//// returns NO if the two integers have the same
//// value, YES otherwise
//
//BOOL areIntsDifferent (int thing1, int thing2){
//    if(thing1 == thing2){
//        return (NO);
//    } else {
//        return (YES);
//    }
//}// areIntsDifferent
//// given a NO value, return the human-readable
//// string "NO". Otherwise return "YES"
//
//NSString *boolString(BOOL yesNo){
//    if (yesNo == NO) {
//        return (@"NO");
//    } else {
//        return (@"YES");
//    }
//}// boolString
//
//int main(int argc, const char *argv[]){
//    BOOL areTheyDifferent;
//    areTheyDifferent = areIntsDifferent (5, 5);
//    NSLog(@"are %d and %d different? %@", 5, 5,boolString(areTheyDifferent));
//    
//    areTheyDifferent = areIntsDifferent (23, 42);
//    NSLog(@"are %d and %d different? %@", 23, 42, boolString(areTheyDifferent));
//}// main

////exp 3.1

//#import <Foundation/Foundation.h>
//int main (int argc, const char * argv[]){
//    NSLog(@"The number from 1 to 10:");
//    for (int i = 1; i <= 10; i++) {
//        NSLog(@"%d\n",i);
//    }
//    return (0);
//} // main

//#import <Foundation/Foundation.h>
//int main (int argc, const char * argv[]){
//    int count = 5;
//    
//    NSLog(@"The number from 1 to 10:");
//    for (int i = 1; i <= count; i++) {
//        NSLog(@"%d\n",i);
//    }
//    return (0);
//} // main

#import <Foundation/Foundation.h>
int main (int argc, const char * argv[]){
    const char *words[4] = { "erwt", "etwh", "rwg", "sf" };
    int wordCount = 4;
    for (int i = 0; i <wordCount; i++) {
        NSLog(@"%s is %lu characters long", words[i], strlen(words[i]));
    }
    return (0);
} // main
