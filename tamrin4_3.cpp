#include <iostream>
using namespace std;
int main(){   
    int a, b, temp;
    cout<<"adad avval : ";
    cin>>a;
    cout<<"adad dovvom : ";
    cin>>b; 
    while(true)
	{       
        if(b == 0) break;
        
        temp = a%b;
        a = b;
        b = temp;
    }
    cout<<"B.M.M barabar ast ba :"<<a;
}