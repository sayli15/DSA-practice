//Finding Max and Min element in an array

#include <iostream>
#include <climits>
using namespace std;

int main(){
  int n;
  cout<<"Enter the size of an array: "<<endl;
  cin>>n;

  int arr[n];

  cout<<"Enter the elements in an array: "<<endl;
  for(int i = 0; i < n; i++){
    cin>>arr[i];
  }

  cout<<endl<<"The array is: ";
  for(int i = 0; i < n; i++){
    cout<<arr[i]<<" ";
  }
  
  cout<<endl;
  
  int maxNo = INT_MIN;
  int minNo = INT_MAX;
  
  for(int i=0;i<n;i++){
      maxNo=max(maxNo , arr[i]);
      minNo=min(minNo , arr[i]);
  }
  
  cout<<"Maximum no is: "<<maxNo<<endl<<"Minimum no is: "<<minNo<<endl;
}
