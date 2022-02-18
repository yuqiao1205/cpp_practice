

#include <iostream>
using namespace std;
#include <array>

int LIS(int a[],int n)
{
    int array[8] = {};
    for(int i =0;i<n;i++)
    {
        array[i]=1; //给每一个array数的lis赋初值为1,因为本身就是1个长度。
    }
    
    for(int i = 1;i< n;i++)
    {
        for(int j =0;j<i;j++)
        {
            if(a[i]>a[j] && array[i] < array[j]+1) //前面元素比当前元素小，他们所对应的长度值 找出当前元素前面比它小的元素，比较其lis值
                array[i] = array[j] + 1; //当前array[i]的值就是前面j+1
        }
    }
    
    int max = array[0];
    for(int i =0;i<n;i++)
    {
        if(array[i]>max)
            max = array[i];   //找出lis数组中最大值，即最长有序子序列的长度
    }
   
    return max;
}


int main(){
    
    int a[8];
    int length= sizeof(a)/sizeof(a[0]);
    cout<<"enter random number "<<endl;
    for (int i=0;i<length;i++){
        cin>>a[i];
        
    }
    cout<<"longest increasing subsequench lenth is "<< LIS(a,8)<<endl;
    return 0;

}


//            array<int,10> value;
//            cout<<"enter random number "<<endl;
//            for (int i=0;i<value.size();i++){
//                cout<<"number:"<<endl;
//                cin>>value[i];
//
//            }
