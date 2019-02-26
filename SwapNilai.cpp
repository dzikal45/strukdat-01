/*
Nama = Dzikri ALgiffari
NPM = 140810180053
TAnggal = 26-02-2019
Deskripsi = program swap integer
*/
#include<iostream>
using namespace std;

void swap(int &a,int &b){
	int temp;
	temp=a;
	a=b;
	b=temp;
	
}
int main(){
	int x,y;
	cout<<"Masukan Nilai X ="; cin>>x;
	cout<<"Masukan Nilai Y =";cin>>y;
	swap(x,y);
	cout<<"swap"<<endl;
	cout<<"Nilai X="<<x<<endl;
	cout<<"Nilai Y="<<y<<endl;

		
}
