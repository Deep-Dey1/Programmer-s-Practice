// 5 Prime Number Check
// Write a function that checks whether a given number is prime or not.
#include<iostream>
using namespace std ;
void prime(int);
int main(){
    int num;
    cout << "enter the number : ";
    cin >> num;
    prime(num);
    return 0;
}
void prime(int num){
    int isprime = 1; // 1 -> prime 
    for(int i = num-1 ; i > 1 ; i--){
        if(num % i == 0){
            isprime = 0; // 0 -> not prime
            break;
        }
    }
    if(isprime == 1){
        cout << num <<" is prime" << endl;
    }
    else{
        cout << num << " is not prime" << endl;
    } 
}