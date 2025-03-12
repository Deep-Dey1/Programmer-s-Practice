// 7 Leap Year Checker
// Write a function that checks if a given year is a leap year.

#include<iostream>
using namespace std ;
void leap(int);

int main(){
    int year;
    cout << "enter year : ";
    cin >> year;
    leap(year);
    return 0;
}

void leap(int year){
    if(year % 4 == 0){
        if(year % 100 == 0 ){
            if(year % 400 == 0){
                cout << year <<" is a leap year."<< endl;
            }
            else{
                cout << year <<" is not a leap year."<< endl;
            }
        }
        else{
            cout << year <<" is a leap year."<< endl;
        }
    }
    else{
        cout << year <<" is not a leap year."<< endl;
    }
}