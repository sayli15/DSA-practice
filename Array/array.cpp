#include <iostream>
using namespace std;

//Array : Taking input from the user.
int main(){
	
	int n;
	cout<<"Enter the size of an array: ";
	cin>>n;
	int arr[n];
	
	cout<<"Enter the elements in the array: ";
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	
	cout<<"The array is: ";
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
	
}