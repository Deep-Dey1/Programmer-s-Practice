// 10 Sum of Digits
// Write a function that takes a number as input and returns the sum of its digits. Example: 123 → 1 + 2 + 3 = 6


#include<iostream>
using namespace std;

int sum(int number){
    int res = 0;
    if(number > 0){
        while(number > 0){
            res = res + number % 10 ;
            number = number / 10 ;
        }
    }
    else{
        int temp = number , count = 0;
        while(temp != 0){
            temp = temp / 10;
            count++;
        }
        // cout << "number of digits in this number : " << count << endl;
        number = number*(-1);
        while(count -1 > 0){
            res = res + number % 10 ;
            number = number / 10 ;
            count--;
        }
        res = res - number % 10;
    }
    return res ;
}
int main(){
    int number , result ;
    cout << "enter the number to get the sum of its digits : ";
    cin >> number;
    result = sum(number);
    cout << "The sum of the digits of the number " << number << " is = " << result << endl ;
    
    return 0;
}