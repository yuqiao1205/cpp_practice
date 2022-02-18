//
//  main.cpp
//  week2
//
//  Created by Yan Peng on 2/2/22.
//

#include <iostream>
#include <string>
#include <climits>
using namespace std;

int maxEven(int arr[],int n);


int maxEven(int arr[],int n){
    int max=INT_MIN;
    for(int i=0;i<n;i++){
        if (arr[i]%2 == 0){
            if (arr[i]>max){
                max= arr[i];
            }
        }
    }
    return max;
}


int main(int argc, const char * argv[]) {
    
    
    const int n = 5;
    int arr[] = {1,2,3,4,5};
    for (int i=0;i<n;i++){
        cout << arr[i]<<" ";
    }
    cout<<maxEven(arr,n);
    return 0;
}
