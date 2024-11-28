//
//  main.c
//  comp
//
//  Created by 郑斯贻 on 2024-11-26.
//

#include <stdio.h>

int main(void) {
    for (int i = 1; i <= 9; i++) {
        for (int j = 1; j <= i; j++) {
            int result;
            result = i * j;
            printf("%d * %d = %d", i, j, result);
        }
        printf("\n");
    }
   
    return 0;
}
