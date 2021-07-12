#include <iostream>
using namespace std;

int main() {

	int a[] = {10,7,9,1 ,2 ,4 ,5 ,3};


	for (int i = 0; i < 8; i++) {
		cout << a[i]<< " ";

		
	}
	for (int i = 0; i < 8; i++) {
		for (int j = i; j < 8-1-i; j++){
			if (a[j]>a[j+1]){
			swap(a[j], a[j + 1]);
		}
	  }
		
 }	
	cout << endl;
for (int i = 0; i < 8; i++) {
	cout << a[i] << " ";
	}
}
