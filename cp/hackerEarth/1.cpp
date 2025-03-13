#include <iostream>
using namespace std;
int main() {
	int num;
	cin >> num;    //Reading input from STDIN
	int arr[num];
	for(int i = 0 ; i < num ; i++){
		cin >> arr[i];
	}
	int count;
	int temp[num];
	for(int i = 0 ;i < num ; i++){
		count = 0;
		for(int j = i+1 ; j < num ; j++){
			if(arr[i] == arr[j]){
				count++;
			}
		}
		temp[i] = count;
	}
	int max = temp[0];
	for(int i = 0 ; i < num ; i++){
		if(temp[i] > max){
			max = temp[i];
		}
	}
	int fav = 0 ;
	for(int i = 0 ; i < num ; i++){
		if(temp[i] == max){
			fav++;
		}
	}
	cout << fav;
	return 0;
}