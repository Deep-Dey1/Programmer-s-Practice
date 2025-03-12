// 11 Solid Square Pattern

// *****
// *****
// *****
// *****
// *****

#include<iostream>
using namespace std ;
void square(int side){
    for(int i = side ; i > 0 ; i--){
        for(int j = side ; j > 0 ; j--){
            cout << "*";
        }
        cout << endl;
    }
}

int main(){
    int side;
    cout << "enter the side length of the square : " ;
    cin >> side ;
    square(side); 
    return 0;
}