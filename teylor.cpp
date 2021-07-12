#include <iostream>
#include <cmath>
using namespace std;

double fact(double x){
	if (x==0) {
		return 1;
	}else{
		return x* fact(x - 1);
	}
}

double calcSine(double x,double precision) {
	x=x*M_PI/180;
	double res = 0;
	for(int i = 0; i< precision; i++){
		double n= 2*i +1;
		res += pow(-1,i) * pow(x,n) / fact(n);
	}
	return res;
}

