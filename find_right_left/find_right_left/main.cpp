//
//  main.cpp
//  find_right_left
//
//  Created by Yan Peng on 1/12/22.
//

#include <iostream>
#include <vector>
using namespace std;


vector<int> find(vector<int>&arr, int target){
    int first_index = -1;
    int last_index = -1;
    for (int i=0; i <arr.size();i++){
        if (arr[i] == target){
            if (first_index ==-1){
                first_index = i;
            }
            last_index = i;
        }
    }
    return vector<int> {first_index,last_index};
}

int main(int argc, const char * argv[]) {
    
    vector<int> a = {1, 2, 3, 1, 5};
    vector<int> pair = find(a,1);
    //cout << pair[0]<<" "<< pair[1]<<endl;
    int numsArr[] = {1, 2, 3, 1, 5};
    vector<int> nums(begin(numsArr), end(numsArr));
    cout<<"1. print vector<int> by converting array to vector: ";
    
    for(int i = 0; i<nums.size(); i++){
        cout<<nums[i]<<" ";
        
    }
    cout<<endl<<"2. print result from vector<int> ";
    for(int i = 0; i<pair.size(); i++){
        cout<<pair[i]<<" ";}
    
    cout<<"\n3. print vector<int> : ";
    for(int v:pair){
        cout<<v<<" ";}
    
    return 0;
}
