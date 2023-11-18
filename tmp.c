#include <stdio.h>
#define N 9

int main(){
    int a[N];           // массив для N чисел
    //int ost;              // номер текущей ячейки
    int sum;              // сколько чисел дано

    scanf("%d", &sum);
    
    a[8] = sum / 5000;
    sum = sum % 5000;
    a[7] = sum / 1000;
    sum = sum % 1000;
    a[6] = sum / 500;  
    sum = sum % 500;
    a[5] = sum / 100; 
    sum = sum % 100;
    a[4] = sum / 50;
    sum = sum % 50;
    a[3] = sum / 10;
    sum = sum % 10;
    a[2] = sum / 5;
    sum = sum % 5;
    a[1] = sum / 2;
    sum = sum % 2;
    a[0] = sum;

    printf("5000 %d\n", a[8]);
    printf("1000 %d\n",a[7]);
    printf("500 %d\n", a[6]);
    printf("100 %d\n", a[5]);
    printf("50 %d\n", a[4]);
    printf("10 %d\n", a[3]);
    printf("5 %d\n", a[2]);
    printf("2 %d\n", a[1]);
    printf("1 %d\n", a[0]);
    
    
    
    

    

    
    return 0;
}
