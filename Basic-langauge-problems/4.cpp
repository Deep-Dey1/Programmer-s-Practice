// 4 Factorial of a Number
// Write a function that calculates the factorial of a given number using a loop.

#include<iostream>
using namespace std;

int recur(int);
int loops(int);

int main(){
    int methode;
    cout << "using which methode you want to solve this problem :- " << endl << "1 - using recursion" << endl << "2 - using loops" << endl ;
    cin >> methode;
    int number;
    cout << "Enter the number whose factorial you want to find : ";
    cin >> number;
    int result ;
    switch(methode){
        case 1 :
        result = recur(number);
        break;
        case 2 :
        result = loops(number);
        break;
        default :
        cout << "invalid key pressed " << endl;
        break;
    }
    cout << " ! " << number << " = " << result << endl ;
    return 0;
}

int recur(int num){
    if(num < 0){
        return -1 ;

    }
    else{
        if ( 0 < num && num < 2){
            return 1;
        }
        else{
            return num*recur(num -1);
        }
    }
    
}

int loops(int num){
    int fact = 1;
    if(num < 0){
        return -1;
    }
    else{
        for(int i = num ; i > 1 ; i--){
            fact = fact*i;
        }
        return fact;
    }
}