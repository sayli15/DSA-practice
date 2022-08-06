//Find the repeating element in an array.

#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the size of an array: ";
    cin>>n;
    int arr[n];

    cout<<"Enter the elements in the array: ";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    cout<<"The elements in the array are: ";
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    
    cout<<endl;

    //Find repeated element

    int visited[n];
    int count;

    cout<<"The repeating element in an array is: ";

    for(int i=0; i<n; i++){
        if(visited[i] != 1){
            count = 1;
        }
        for(int j= i+1; j<n; j++){
            if(arr[i] == arr[j]){
                count++;
                visited[j] =1;
            }
        }
        if(count != 1){
            cout<<arr[i]<<" ";
        }
    }
    return 0;
}