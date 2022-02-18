//
//  main.cpp
//  week5
//
//  Created by Yan Peng on 2/16/22.
//
#include <chrono>
#include <ctime>

#include <iostream>
#include <string>
#include <vector>
#include <unordered_map>

using namespace std;

void printTimestamp() {
    auto timenow = chrono::system_clock::to_time_t(chrono::system_clock::now());
    
    cout << ctime(&timenow) << endl;
}
int max(vector<int> arr){
    int max = arr[0];
    for(int i = 1; i<arr.size();i++){
        if(arr[i] >max){
            max = arr[i];
        }
    }
    return max;
}


vector<int> twoSums(vector<int> arr, int target){
    //vector<int> result;
    for(int i=0; i<arr.size();i++){
        for(int j = i+1;j<arr.size();j++){
            if (arr[i] + arr[j]== target){
                return{i,j};
                
            }
        }
    }
    
    return {-1,-1};
    
}

vector<int> twoSumsOpt(vector<int> arr,int target){
    unordered_map<int,int>map;
    //map[1]==0
    for(int i=0;i<arr.size();i++){
        map[arr[i]]=i;
    }
    for (int i=0;i<arr.size();i++){
        int diff = target - arr[i];
        //if(map.count(diff) > 0 && map[diff]!=i)
        if(map.find(diff)!=map.end()&& diff != arr[i]){
            return{i,map[diff]};
        }
    }
    return {-1,-1};
}


int main(int argc, const char * argv[]) {
    
    vector<int> arr{1,2,3,4,5};
    
    cout << arr.size();
    cout <<max(arr);
    
    int target = 6;
    auto res=twoSums(arr, target);
    
    cout<<res[0]<<","<<res[1]<<endl;
    
    auto res1=twoSumsOpt(arr, target);
    cout<<res1[0]<<","<<res1[1]<<endl;
    
    printTimestamp();
    vector<int> array;
    for(int i = 0; i < 40000000; i++) {
        array.push_back(i);
    }
    printTimestamp();
    
  
    
      
    printTimestamp();
    unordered_map<int, int> map;
    for(int i = 0; i < 40000000; i++) {
        map[i] = i;
    }
    printTimestamp();
    
    return 0;
}
