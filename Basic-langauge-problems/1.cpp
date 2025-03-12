//1 Simple Calculator
// Write a program that takes two numbers and an operator (+, -, *, /) as input and performs the corresponding operation. Use functions for each operation.

#include<iostream>
using namespace std ;

void calculator();

void add() , sub() , mul() , div();

int main(){
    
    calculator();
    int again = 1;
    char flag;
    while(again){
        cout << "want to execute the calculator (y/n) : ";
        cin >> flag;
        if(flag == 'y'){
            again = 1;
            calculator();
        }
        else if(flag == 'n'){
            again = 0;
            break;
        }
        else{
            cout << "wrong key pressed press again" << endl;
        }
    }
    


    cout << "Thankyou ! " << endl;

    

    return 0;
}
void add(){
    double first , second , result ;
    cout << "enter the first operand : ";
    cin >> first;
    cout << "enter the Second operand : ";
    cin >> second;
    result  = first + second ;
    cout << first << " + " << second << " = " << result << endl;
    return ;
    
}

void sub(){
    double first , second , result ;
    cout << "enter the first operand : ";
    cin >> first;
    cout << "enter the Second operand : ";
    cin >> second;
    result  = first - second ;
    cout << first << " - " << second << " = " << result << endl;
    return ;
    
}

void mul(){
    double first , second , result ;
    cout << "enter the first operand : ";
    cin >> first;
    cout << "enter the Second operand : ";
    cin >> second;
    result  = first * second ;
    cout << first << " * " << second << " = " << result << endl;
    return ;
    
}

void div(){
    double first , second , result ;
    cout << "enter the first operand : ";
    cin >> first;
    cout << "enter the Second operand : ";
    cin >> second;
    result  = first / second ;
    cout << first << " / " << second << " = " << result << endl;
    return ;
    
}

void calculator(){
    int val1 , val2 ;
    char op ;
    cout << "Options you have for an operator :" << endl << "+\n-\n*\n/\n";
    cout << "enter the operator you want to : ";
    cin >> op;
    switch(op){
        case '+':
        add();
        break ;
        case '-':
        sub();
        break ;
        case '*':
        mul();
        break ;
        case '/':
        div();
        break ;
        default :
        cout << "Wrong key entered !" << endl << "Try again !";
        break ;
    }
}