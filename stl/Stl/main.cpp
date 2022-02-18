//
//  main.cpp
//  Stl
//
//  Created by Yan Peng on 1/21/22.
//

#include <iostream>
#include <algorithm>
using namespace std;

int main(int argc, const char * argv[]) {
    int arr[4] = {6,3,7,4};
    sort(arr,arr+4);  /*Here we take two parameters, the beginning of the
                       array and the length n upto which we want the array to
                       be sorted*/
    cout << "Array after sorting shengxu : \n";
        for (int i = 0; i < 4; ++i)
            cout << arr[i] << " ";
            cout << endl;;

    cout << "Array after sorting descending : \n";
    sort(arr, arr + 4, greater<int>());
    for (int i = 0; i < 4; ++i)
            cout << arr[i] << " ";
    cout << endl;;
    return 0;
}
