//
//  main.cpp
//  arraydaozhi
//
//  Created by Yan Peng on 1/3/22.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    int array[5] = {2,6,1,3,4};
    cout << "Original array\n";
    for (int i=0; i<5;i++){
        cout << array[i] << endl;
    }
    
    int start = 0;
    int end = sizeof(array)/sizeof(array[0])-1;
    
    while(start < end){
        int temp = array[start];
        array[start] = array[end];
        array[end] = temp;
        
        start++;
        end--;
    }
    
    cout << "reversed array\n";
    for (int i=0; i<5;i++){
        cout << array[i] << endl;
    }
    return 0;
}
