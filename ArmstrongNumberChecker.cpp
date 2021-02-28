#include<iostream>
#include<cmath>
using namespace std;
int main(){
	int n;
	cout<<"Enter no.";
	cin>>n;
	int originalN = n;
	int sum = 0;
	while(n>0){
		int lastDigit = n%10;
		sum+= pow(lastDigit,3);
		n=n/10;
	}
	if(sum == originalN)
		cout<<"Armstrong"<<endl;
	else
		cout<<"Not An Armstrong"<<endl;
	return 0;
}