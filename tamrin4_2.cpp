#include<iostream>
using namespace std;
int main(){
	int n,m=1,count=0;
	cin>>n;
	for(int i=1;i<n/2+1;i++)
	{
		m = m*(i+1);
		if(m==n){
			count++;
			break;
		}
	}
	if(count>0 || n==1){
		cout<<"yes";
	}
	else{
		cout<<"no";
	}
}