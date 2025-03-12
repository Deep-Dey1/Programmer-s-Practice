// 14 Inverted Right-Angled Triangle

// *****
// ****
// ***
// **
// *

#include<iostream>
using namespace std ;
void tri(int he){
    for(int j = 0; he - j > 0 ; j++){
        for(int i = he - j ; i > 0 ; i--){
            cout << "*";
    
        }
        cout << endl;
    }
    

}
int main(){
    int he;
    cout << "enter the height of the triangle : ";
    cin >> he;
    tri(he);
    return 0;
}