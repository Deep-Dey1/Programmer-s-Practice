// 6 Number Reversal
// Write a program that takes an integer input and prints its reverse. Example: 1234 → 4321.



#include<iostream>
using namespace std;
int reverse(int);
int main(){
    int number , result ;
    cout << "enter the number to reverse : ";
    cin >> number;
    result = reverse(number);
    cout << "reverse-of(" << number <<") -> " << result << endl;
    return 0;
}

int reverse(int num){
    int result ;
    result = 0;
    int reminder ;
    while(num > 0){
        reminder = num % 10;
        result = result*10 + reminder;
        num = num / 10 ;
    }

    return result;
}