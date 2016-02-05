//
//  main.c
//  SumTo100
//
//  Created by chenyufeng on 16/2/5.
//  Copyright © 2016年 chenyufengweb. All rights reserved.
//

#include <stdio.h>

/**
 *  要求找出数组中两个数相加为100的所有组合；我先假设里面的的数字两两不相等；
 */

void findSumTo100(int *a,int n);

int main(int argc, const char * argv[]) {

    //原始数组；
    int a[] = {55,50,99,80,1,30,70};
    /**
     *  首先对这个数组进行排序，下面是排序后的结果；
     */
    int a_sort[] = {1,30,50,55,70,80,99};
    findSumTo100(a_sort,7);

    return 0;
}
/**
 *  简单的算法是这样的：
（1） 对排序后的数组头部i [0]和数组尾部j [n-1]相加，判断是否等于100，等于100则打印，然后执行（3），否则执行（2）；
 (2)如果相加小于100，则i++,j不变。如果相加大于100，则i不变，j--；继续执行（1）
 (3)数组下标i++，j--，继续执行（1）；
 (4)当i==j，退出程序。
 */
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