//
//  main.c
//  2/mutiple Dimention Array
//
//  Created by Eun Jae Lee on 21/11/17.
//  Copyright © 2017 Eun Jae Lee. All rights reserved.
//
//  type array name[row][columns]
//  int a[3][4];

//  Multiple arrays
//  type array_name [size][size][size];
//  int a[3][3][3];


#include <stdio.h>

int main(int argc, const char * argv[]) {

    int a[3][4], i,k, total=0;
    
    printf("Please enter 12 elements of the matrix: \n");
    
    for (i=0; i<3; i++) {
        for (k=0; k<4; k++) {
            scanf("%d",&a[i][k]);
        }
    }
    
    for (i=0; i<3; i++) {
        
        for (k=0; k<4; k++) {
            printf("%d \t", a[i][k]);
            total = total+a[i][k];
        }
        printf("\n");
    }

    printf("Total Sum is %d \n", total);
   // getchar();
    
    return 0;
}
