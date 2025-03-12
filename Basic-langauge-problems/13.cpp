// 13 Right-Angled Triangle (Right-Aligned)

//     *
//    **
//   ***
//  ****
// *****
#include<iostream>
using namespace std;
void tri(int he){
    int temp;
    int count = 1;
    int k ;
    for(int i = he ; i > 0 ; i--){
        temp = he;
        k = temp - count ;
        for (int j = k ; j > 0 ; j --){
            cout << " ";
        }
        for(int j = count ; j > 0 ; j--){
            cout << "*";
        }
        cout << endl;
        count++;
    }
}
int main(){
    int height ;
    cout << "enter the height of the triangle : ";
    cin >> height;
    tri(height);
    return 0;
}