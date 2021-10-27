#include <iostream>
using namespace std;

void coba (int *s, int *p){
	int hasil;
	hasil = *s * *p;
	cout<<"hasil "<<hasil;
}

int main(){
	int x;
	cout<<"inputkan x : ";
	cin>>x;
	int y;
	cout<<"inputkan y : ";
	cin>>y;
	coba(&x,&y);
	
	
}
