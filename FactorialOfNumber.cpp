#include<iostream>
using namespace std;

int fact(int num){
	int fact = 1;
for (int i = 2; i<=num ;i++){
	fact = fact*i;
}
return fact;
}

int main(){
 	int n;
 	cout<<"Enter number: "<<endl;
 	cin>>n;
 	cout<<fact(n);
	return 0;
}