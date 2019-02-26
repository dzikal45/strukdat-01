/*
Nama = Dzikri ALgiffari
NPM = 140810180053
TAnggal = 26-02-2019
Deskripsi = program Fizz Buzz
*/
#include<iostream>
using namespace std;

void FizzBuzz(int i){
	for(int i=1;i<=100;i++){
		if(i%3==0 && i%5==0){
			cout<<"Fizz Buzz"<<endl;
		}
		else if(i%3==0 && i%5!=0){
			cout<<"Fizz"<<endl;
		}
		else if(i%3!=0 && i%5==0){
			cout<<"Buzz"<<endl;
		}
		else{
			cout<<i<<endl;
		}
		
	}
}
int main(){
	int x;
	FizzBuzz(x);
}
