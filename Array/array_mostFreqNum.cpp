//Most frequent element in an array

#include <iostream>
using namespace std;

int mostFreqNum(int *arr , int n){
    int maxcount = 0;
    int element_with_maxCount;
    
    for(int i=0;i<n;i++){
        int count = 0;
        for(int j=0;j<n;j++){
            if(arr[i]==arr[j]){
                count++;
            }
        }
        if(count>maxcount){
            maxcount=count;
            element_with_maxCount=arr[i];
        }
    }
    return element_with_maxCount;
}

int main()
{
    int arr[] = { 40,50,30,40,50,30,30};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << mostFreqNum(arr, n);
    return 0;

}
