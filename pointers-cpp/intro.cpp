#include<iostream>
using namespace std ;
int main(){
    // & is address of operator 
    int a = 10 ;
    cout << "address of variable a = " << &a ; 
    int * ptr ;
    cout << "values related to the pointer : " << endl ;
    cout << "a (value at variable a) = " << a <<endl;
    cout << "&a (memory address of the variable a )= " << &a << endl;
    cout << "&ptr (memory location of the pointer variable ptr ) = "  << &ptr << endl;
    cout << "ptr (value atored at the pointer variable which is the memory location of some other variable) = " << ptr << endl ;
    cout << "*ptr (value at the memory location which is stored at the pointer variable ) = " << *ptr << endl;   

    cout << "initializing the memory location of the variable a to the pointer variable ptr : (ptr = &a) :" << endl;
    ptr = &a;
    cout << "a (value at variable a) = " << a <<endl;
    cout << "&a (memory address of the variable a )= " << &a << endl;
    cout << "&ptr (memory location of the pointer variable ptr ) = "  << &ptr << endl;
    cout << "ptr (value atored at the pointer variable which is the memory location of some other variable) = " << ptr << endl ;
    cout << "*ptr (value at the memory location which is stored at the pointer variable ) = " << *ptr << endl;
    cout << endl << endl;
    cout << "some star concepts : " << endl;
    int b = 10 ;
    int * ptr2 ;
    *ptr2 = b ; // invalid since *ptr2 is some value of the memory location which is in the ptr2 memory lpocation and the b is also some value which is 10
    // therefore this code will give segmentation error 

    cout << "int b = 10 ;" << endl <<
    "int * ptr2 ;" << endl <<
    "*ptr2 = b ;" << endl;
    cout << "b (value at variable a) = " << b <<endl;
    cout << "&b (memory address of the variable a )= " << &b << endl;
    cout << "&ptr2 (memory location of the pointer variable ptr2 ) = "  << &ptr2 << endl;
    cout << "ptr2 (value atored at the pointer variable which is the memory location of some other variable) = " << ptr2 << endl ;
    cout << "*ptr2 (value at the memory location which is stored at the pointer variable ) = " << *ptr2 << endl;
    return 0;
}