
#include <iostream>
using namespace std;
#include <array>

int searchLIS(int a[],int n)
{
    int array[5] = {};
    for(int i =0;i<n;i++)
    {
        array[i]=1;
    }
    
    for(int i = 1;i< n;i++)
    {
        for(int j =0;j<i;j++)
        {
            if(a[j]<a[i] && array[j] < array[i]+1)
                array[i] = array[j] + 1;
    }
    }
    int max = array[0];
    for(int i =1;i<n;i++)
    {
        if(array[i]>max)
            max = array[i];
    }
    return max;
}


int main(){
    
    int a[5];
    int length= sizeof(a)/sizeof(a[0]);
    cout<<"enter random number "<<endl;
    for (int i=0;i<length;i++){
        cin>>a[i];
        
    }
    cout<<"longest increasing subsequench lenth is "<< searchLIS(a,5)<<endl;
    return 0;

}
