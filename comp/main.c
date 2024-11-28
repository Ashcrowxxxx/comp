//
//  main.c
//  comp
//
//  Created by 郑斯贻 on 2024-11-26.
//

#include <stdio.h>

int main(void) {
    int num;
    
    for (int num = 1; num <= 100; num++) {
        if(num % 2 == 1){
            printf("%d ", num);
        }
    }
    return 0;
}
