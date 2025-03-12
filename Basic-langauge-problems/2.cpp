// 2 Even or Odd
// Write a function that takes an integer as input and returns whether the number is even or odd.

#include<iostream>
using namespace std ;

int oe(int);

int main(){
    int result;
    int num ;
    cout << "enter the integer number you want to check : ";
    cin >> num;
    result = oe(num);
    if(result == 1){
        cout << num <<" is an odd number !" <<endl ;
        return 0;
    }
    cout << num << " is an even number !" << endl ;
    
    return 0;
}

int oe(int number ){
    if(number % 2 == 0){
        return 0;
    }
    else{
        return 1;
    }
}