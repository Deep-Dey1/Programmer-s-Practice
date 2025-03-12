// 8 Nth prime number calculator
// Calculate the nth prime number of the number series 

#include<iostream>
using namespace std ;
void prime(int);
int isprime(int);
int main(){
    int number ;
    cout << "enter the number upto which you want to print the prime numbers : ";
    cin >> number ;
    prime(number);
    return 0;
}
int isprime(int num){
    for (int i = num -1 ; i > 1 ; i--){
        if(num % i == 0){
            return 0 ;
        }
    }
    return 1;
}
void prime(int num){
    int check = 2 , temp , count = 1;
    while(num > 0){
        temp = isprime(check);
            if(temp){
                cout << count <<" prime = " << check << endl;
                check++;
                count++;
                num--;
            }
            else{
                check++;
            }
        }
    }
