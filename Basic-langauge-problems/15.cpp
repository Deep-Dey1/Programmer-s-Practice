// 15 Pyramid Pattern

//     *    
//    ***   
//   *****  
//  ******* 
// *********



// self pbservation :
// 1 : in every line odd number of stars are printed 
// 2 : before printing the stars the space in first line is height -1 
// 3 : this space reduces as height - row number until space = 0

#include<iostream>
using namespace std ;
void tri(int he){
    int star = 1;
    int row = 1;
    int space ;
    for(int i = he ; i > 0 ; i--){ 
        space = he - row;
        for(int j = space ; j > 0 ; j-- ){ // space printing loop
            cout << " ";
        }
        for(int i = (row*2) -1 ; i > 0 ; i-- ){ // stars printing loop since odd number printing ie why row*2 -1
            cout << "*";
        }
        cout << endl;
        row++;
    }
}
int main(){
    int height;
    cout << "enter the height of the triangle : ";
    cin >> height;
    tri(height);
    return 0;
}