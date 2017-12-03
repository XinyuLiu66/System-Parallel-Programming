//
//  a1_b.c
//  spp_pra1_a1
//
//  Created by Liu & Yi on 2017/12/3.
//  Copyright © 2017年 Liu & Yi. All rights reserved.
//
#include <stdio.h>
#include <stdlib.h>


void cal_prim_num(int n);
char isPrimNum(int n);

int main(int argc, const char * argv[]) {
    // insert code here...
    cal_prim_num(5);
    return 0;
}

// return a prim array
void cal_prim_num(int n) {
    char* A = malloc(n);
    char* p;
    p = A;
    for (int i = 0; i < n; i++) {
        *p = (char)isPrimNum(i);
        p++;
    }
    // print array A
    printf("Array A is : \n");
    for(int i = 0; i< n; i++) {
        printf("%c   ", *(A+i));
    }
    printf("\n");
    printf("The size = %d\n", n);
    
}

// decide if the number is prime number
// return 0: is prime number ,  else return 1
char isPrimNum(int n) {
    
    for(int i=2; i<n; i++) {
        if(n % i == 0) {
            return '1';
        }
    }
    return '0';
}

