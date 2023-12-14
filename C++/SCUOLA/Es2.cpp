#include<iostream>
using namespace std;
int main(){
	float n;
	cout<<"Inserisci un numero: ";
	cin>>n;
	while( n >= 0 )
	{	
	cout<<n<<", "<<endl;;
   		n = n - 1;
	}
	cout<<" FINE!";
	return 0;
}