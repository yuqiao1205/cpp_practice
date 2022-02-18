//
//  main.cpp
//  find_first_last
//
//  Created by Yan Peng on 1/12/22.
//

#include <iostream>
#include <vector>

using namespace std;

struct find_int_result {
    int first;
    int last;
};

//vector<int> find_int(int a[], size_t L, int x) {

find_int_result find_int(int a[], size_t L, int x) {
    int first_index = -1;
    int last_index = -1;
    
    for (int i=0; i<L; i++) {
        if (a[i] == x) {
            if (first_index == -1) {
                first_index = i;
            }
            last_index = i;
        }
    }
//    cout << first_index << " " << last_index << endl;
//    return vector<int> {first_index, last_index};
    find_int_result result;
    result.first = first_index;
    result.last = last_index;
    return result;
}

int main(int argc, const char * argv[]) {
    // insert code here...
    int a[5] = {1, 2, 3, 1, 5};
    
    int L = sizeof(a) / sizeof(a[0]);
    
//    vector<int> pair = find_int(a, L, 1);
//    cout << pair[0] << " " << pair[1] << endl;

    find_int_result result = find_int(a, L, 1);
    cout << result.first << " " << result.last << endl;
    
    return 0;
}

