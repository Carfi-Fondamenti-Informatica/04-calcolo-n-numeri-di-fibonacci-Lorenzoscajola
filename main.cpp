#include <iostream>
using namespace std; 
int main () {
int n;
int a=1;
int b=1;
int cont=0;
cin>>n;
if(n>=2){
cout<<a<<endl;
cout<<b<<endl;
for(int i=n; i>2; i--){
cont=a+b;
cout<<cont<<endl;
a=b;
b=cont;}
}
else{
cout<<"error"<<endl;}
}



	
	
