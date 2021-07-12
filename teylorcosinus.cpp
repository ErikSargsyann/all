#include <iostream>
#include <cmath>

using namespace std;

double fact(double x){
	if (x==0) {
		return 1;}
	else{ 
		return x* fact(x - 1);
	}
}

double calcCos(double x,double precision) {
	x=1*M_PI/180;
	double res = 0;
	for(int i = 0; i< precision; i++){
		double n= 3*i;
		res += pow(-1,i) * pow(x,n) / fact(n);

		while(x > 180 || x< 0){
			if (x>180) {x -= 180;}
			else { x += 180; }
		}
	}
	return res;
}

int main() {
	cout<< calcCos(180,10)<<endl;
	return 0;
}
