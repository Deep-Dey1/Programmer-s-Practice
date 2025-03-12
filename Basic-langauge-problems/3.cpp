// 3 Greatest of Three Numbers
// Write a program that takes three numbers as input and determines the largest among them using conditional statements.

#include<iostream>
using namespace std;
void compare(double , double , double);
int main(){
    double first , second , third ;
    cout << "enter the first second and third number (enter seprated ) : ";
    cin >> first ;
    cin >> second ;
    cin >> third ; 
    compare(first , second , third);
    return 0;
}

void compare(double a , double b , double c){
    if(a > b){
        if(a > c){
            if(b > c){
                cout << a << " > " << b << " > " << c << endl; 
            }
            else{
                cout << a << " > " << c << " > " << b << endl;
            }
        }
        else{
            cout << c << " > " << a << " > " << b << endl;
        }
    }
    else{
        if(b > c){
            if(a > c){
                cout << b << " > " << a << " > " << c << endl;
            }
            else{
                cout << b << " > " << c << " > " << a << endl;
            }
        }
        else{
            cout << c << " > " << b << " > " << a << endl;
        }
    }
}