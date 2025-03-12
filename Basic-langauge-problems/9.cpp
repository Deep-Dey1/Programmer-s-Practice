// 9 fibonacci series print 
// print the fibbonacci series upto the nth nnumber 
#include<iostream>
using namespace std;

void fib(int num){
    int first = 0 , second = 1 , count = 0 , result = 0;
    if(num < 0){
        cout << "Invalid Number Entered ! ";
        return;
    }
    else if(num > 1){
        cout << count << " fib = " << result << endl;
        count++;
        result = 1;
        cout << count << " fib = " << result << endl;
        while(num-1 > 0){
            result = first + second ;
            count++;
            cout << count << " fib = " << result << endl;
            first = second ;
            second = result ;
            num--;
        

        }
    }
    else{
        if(num == 0){
            cout << 0 << " fib = " << 0 << endl;
        }
        else{
            cout << 0 << " fib = " << 0 << endl;
            cout << 1 << " fib = " << 1 << endl;
        }
        
    }

}

int main(){
    int number ;
    cout << "enter the number upto which you want to print the fibbonacci series : ";
    cin >> number;
    fib(number);
    return 0;
}