//
//  main.cpp
//  CPlusFuncExample
//
//  Created by Work on 19/03/2024.
//

#include <iostream>
#include <string.h>

// We are Stdio's Writers --> WeWorldStdio's Writers
// chức năng replace
void memeCopyExample() {
    char str1[30] = "We are Stdio's Writers";
    char str2[30] = "World";
    
    memcpy(str1 + 2, str2, 5);
    printf("%s\n", str1);
}

//We are Stdio's Writers --> We @@@@@@@@@@s Writers
// chức năng replace
void memsetExample() {
    char str[30] = "We are Stdio's Writers";
    printf("%s\n", str);
    
    memset(str + 3, '@', 10);
    printf("%s\n", str);
}

// so sánh 2 giá trị
void memCompare() {
    char str1[15] = "abcdef";
    char str2[15] = "ABCDEF";
    int result = memcmp(str1, str2, 4);
    
    if(result > 0)
    {
        printf("chuỗi str1 dài hơn chuỗi str2\n");
    }
    else if(result < 0)
    {
        printf("chuỗi str1 ngắn hơn chuỗi str2\n");
    }
    else
    {
        printf("chuỗi str1 bằng chuỗi str2\n");
    }
}

int main(int argc, const char * argv[]) {
    
    //    memeCopyExample();
    //    memsetExample();
    memCompare();
    
    return 0;
}

