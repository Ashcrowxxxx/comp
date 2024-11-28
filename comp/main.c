//
//  main.c
//  comp
//
//  Created by 郑斯贻 on 2024-11-26.
//

#include <stdio.h>

int main(void) {
    
    for (int num = 100; num <= 200; num++) {
        int flag = 1;
        
        for (int i = 2; i <= (num / 2); i++) {
            if (num % i == 0) {
                flag = 0;
                break;
            }
        }if (flag == 1) {
            printf("%d ", num);
        }
    }
   
    return 0;
}
