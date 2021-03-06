//
//  a1_b.c
//  spp_pra1_a1
//
//  Created by Liu & Yi on 2017/12/3.
//  Copyright © 2017年 Liu & Yi. All rights reserved.
//
#include <stdio.h>
#include <stdlib.h>
#include <omp.h>

void cal_prim_num(int n, int chunksize);
char isPrimNum(int n);

int main(int argc, const char * argv[]) {
    // insert code here...
    cal_prim_num(10,1);
    return 0;
}

// return a prim array
void cal_prim_num(int n, int chunksize) {
    char* A = malloc(n);
    char* p;
    p = A;


    double start_time = omp_get_wtime();   // begin timing
    // begin parallel
    #pragma omp parallel for schedule(static, chunksize)
    for (int i = 0; i < n; i++) {
        *p = (char)isPrimNum(i);
        p++;
        // printf("i = %d, thread_id = %d\n", i, omp_get_thread_num());
    }
    double time = omp_get_wtime() - start_time;
    printf("Time = %f\n", time);   // end timing


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

