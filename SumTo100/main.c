//
//  main.c
//  SumTo100
//
//  Created by chenyufeng on 16/2/5.
//  Copyright © 2016年 chenyufengweb. All rights reserved.
//

#include <stdio.h>

/**
 *  要求找出数组中两个数相加为100的所有组合；
 */

void findSumTo100(int *a,int n);

int main(int argc, const char * argv[]) {


    int a[] = {55,50,99,80,1,30,70};
    //排序后的数组，
    int a_sort[] = {1,30,50,55,70,80,99};
    findSumTo100(a_sort,7);

    return 0;
}

void findSumTo100(int *a,int n){


    for (int i = 0,j = n - 1; i != j; ) {

        int sum = a[i] + a[j];
        if (sum == 100) {
            printf("%d %d\n",a[i],a[j]);
            i++;
            j--;
        }
        else if (sum < 100){
            i++;
        }
        else if (sum > 100){
            j--;
        }
    }
}