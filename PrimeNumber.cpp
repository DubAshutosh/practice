#include<iostream>
#include<cmath>
using namespace std;
int main(){
	int n;
	cout<<"Enter no.";
	cin>>n;
	bool flag = 0;
    for(int i=2;i<sqrt(n);i++){
    	if(n%i==0){
    		cout<<"Non-Prime Number";
    		flag = 1;
    	}
    }
    if(flag == 0)
    	cout<<"Prime Number";
	return 0;
}