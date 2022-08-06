//Check whether the number is Palindrome or not.

#include <iostream>
using namespace std;

int main(){
    int n, num, digit, rev = 0;

    cout<<"Enter the number: ";
    cin>> n;
    num = n;

    do{
        digit = num % 10;
        rev = (rev * 10) + digit;
        num = num / 10;
    }while(num != 0);

    cout<<"The reverse number is: "<< rev << endl;
    if(n == rev){
        cout<<"The given number is Palindrome.";
    }
    else{
        cout<<"The given number is not a Palindrome.";
    }
    
    return 0;
}