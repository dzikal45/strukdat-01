/*
Nama = Dzikri ALgiffari
NPM = 140810180053
TAnggal = 26-02-2019
Deskripsi = program convert Celcius to Fahrenheit
*/
#include<iostream>
using namespace std;
float Convert(int temp,int C){
	temp=C*1.8+32;
	return temp;
}
int main(){
	int hasil,x;
	cout<<"Masukan Suhu dalam celcius = ";cin>>x;
	cout<<"Suhu dalam Fahrenheit="<<Convert(hasil,x);
}
	
