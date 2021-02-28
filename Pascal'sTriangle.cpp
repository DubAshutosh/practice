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
	int n;
	cout<<"Enter number of Terms: "<<endl;
	cin>>n;
	for(int i=1; i<=n; i++){
		for(int j=1; j<=i; j++){
			cout<<fact(i)/(fact(j)*fact(i-j));
		}
	}
	cout<<endl;
	return 0;
}