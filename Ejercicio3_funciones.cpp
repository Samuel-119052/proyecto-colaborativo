#include<iostream>
using namespace std;
int esPrimo(int n){
	bool P;
	int cont=0;
	for(int i=1; i<=n ;i++){
		if(n%i==0){
			cont++;
		}
	}
	if(cont==2){
		P=true;
	}else{
		P=false;
	}
	return P;
}
int main(){
	int num, R;
	cout<<Ingrese un numnero<<endl;
	cin>>num;
	R= esPrimo(num);
	if(R==true){
		cout<<El numero es primo<<endl;
	}else{
		cout<<El numero no es primo<<endl;
	}
	return 0;
}
