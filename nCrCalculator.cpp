#include<iostream>
using namespace std;

int fact(int num){
	int fact = 1;
	for(int i=2; i<=num; i++){
		fact*=i;
	}
	return fact;
}

int main(){
	int n,r;
	cout<<"Enter values of n and r: "<<endl;
	cin>>n>>r;
	int comb = 1;
	comb = (fact(n))/(fact(r)*fact(n-r));
	cout<<"Value of "<<n<<"C"<<r<<" is: "<<comb<<endl;
	return 0;
}