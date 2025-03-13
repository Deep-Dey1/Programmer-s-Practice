#include<iostream>
using namespace std ;
void twotimes(int b){
    cout << "Inside call by value function : ";
    b = b*2;
    cout << "memory location of variable inside the call by value function : " << &b <<endl;
    cout << "value of variable after duble it inside the call by value function : "<< b << endl;

}
void reftwotimes(int * b){
    *b = *b * 2;
    cout << "memory location the pointer variable stores inside it in the call by refrence fucntion : " << b << endl;
    cout << "value of variable after duble it inside the call by refrence function : "<< *b << endl;

}
void pointer(){
    int a = 10;
    int * ptr;
    ptr = &a;
    cout << "in main : "<< endl << endl;
    cout << "before assigning address of variable a to the pointer variable : " << endl;
    cout << "a = " << a << endl ;
    cout << "&a = " << &a << endl;
    cout << "ptr = " << ptr << endl;
    cout << "*ptr = " << *ptr << endl;
    cout << endl << endl;
    cout << "after assigning the address of the variable a to the pointer variabel : (ptr = &a)  " << endl << endl ;
    ptr = &a ;
    cout << "a = " << a << endl ;
    cout << "&a = " << &a << endl;
    cout << "ptr = " << ptr << endl;
    cout << "*ptr = " << *ptr << endl;
    cout << endl << endl;
    cout << "sending the value of the variable a to the call by value functiuon to make its value double : " << endl;
    twotimes(a);

    cout << "inside the main function again " << endl;
    cout << "value of the variable inside the main function after the double function using call by value : " << endl;
    cout << "a = " << a << endl ;
    cout << "&a = " << &a << endl;
    cout << endl << endl;
    cout << "sending the value of the variable a to the call by refrence functiuon to make its value double : " << endl;
    reftwotimes(&a);
    cout << "inside the main function again " << endl;
    cout << "value of the variable inside the main function after the double function using call by value : " << endl;
    cout << "a = " << a << endl ;
    cout << "&a = " << &a << endl;




}
int main(){
    pointer();
    return 0;
}