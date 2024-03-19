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

int main(int argc, const char * argv[]) {
    
    memeCopyExample();
    
    return 0;
}

