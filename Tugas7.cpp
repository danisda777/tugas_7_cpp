#include <iostream>
using namespace std;
int main (){
	int x,y;
	cout<<"Inputkan Nilai X : ";
	cin>>x;
	cout<<"Inputkan Nilai Y : ";
	cin>>y;
	if (x%2!=0){
		if (y%2!=0){
			cout<<"Semua Bilangan Ganjil";
		}else {
			cout<<"X Ganjil dan Y Genap";
		}
	}
	
	if (x%2==0){
		if (y%2==0){
			cout<<"Semua Bilangan Genap";
		}else {
			cout<<"X Genap dan Y Ganjil";
		}
	}

	}
