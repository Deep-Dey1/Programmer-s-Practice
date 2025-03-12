// 12 Right-Angled Triangle (Left-Aligned)

// *
// **
// ***
// ****
// *****

#include<iostream>
using namespace std;
void tri(int he){
    int temp = 1;
    for(int i = he ; i > 0 ; i--){
        for (int j = temp ; j > 0 ; j--){
            cout << "*";
        }
        cout << endl;
        temp++;
    }
}
int main(){
    int height;
    cout << "enter the height of the triangle : ";
    cin >> height;
    tri(height);
    return 0;
}