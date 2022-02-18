//
//  main.cpp
//  list
//
//  Created by Yan Peng on 2/10/22.
//

#include <iostream>
#include <array>
using namespace std;

void searchLIS(int array[])
{
    int num=10;
    int n = 1, count = 1, index = 0;
    for (int i=1; i<num; i++)
    {
        if (array[i] > array[i-1])
            count++;
        
        else {
            if (n < count) {
                n = count;
                index = i - n;
            }
            count = 1;
        }
    }
    
    if (n < count) {
        n = count;
        index = num - n;
    }
    
    for (int i=index; i< n+index; i++)
        cout << array[i] << " ";
}
int main()
{
    cout<<"Please enter 10 numbers: ";
    int array[10];
    int length = sizeof(array)/sizeof(array[0]);
    for (int i = 0; i < length; i++)
        cin >> array[i];
    
    searchLIS(array);
    
    return 0;
}
