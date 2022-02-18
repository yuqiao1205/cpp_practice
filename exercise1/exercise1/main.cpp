//
//  main.cpp
//  exercise1
//
//  Created by Yan Peng on 1/6/22.
//

#include <iostream>
void swap(int  *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
    
    
}
int main()

{
    
    int a = 10;
    int b = 20;
    
    //swap(a,b);
    swap(&a, &b);
    printf("%d %d\n", a,b);
    //int n, m;
    //scanf("%d", &n);
    //m = (n%10)*100 + (n/10%10)*10 + (n/100); printf("%03d\n", m);
    return 0;
}
