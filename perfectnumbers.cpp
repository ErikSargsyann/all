#include <iostream>
using namespace std;

int main() {

int n,i=1,num=0;

cout<<"Enter number: ";
cin>> n;

while(i<n){
	if (n%i==0)
	num=num+i;
	i++;
}

if (num==n)
	cout<<i<<" Is a perfect number\n";

else
	cout<<i<<" Is not a perfect number\n";

    return 0;

}
