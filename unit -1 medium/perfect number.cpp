#include<iostream>
using namespace std;
int main(){
	int num;
	int sum=0;
	cout<<"enter the number:";
	cin >>num;
	for(int i=1;i<=num/2;i++){
		if(num%i==0){
			sum+=i;
		}
	}
	if(sum==num){
		cout<<"the number is perfect\n";
		}else{
		cout<<"the number is  not perfect\n";
		}
		return 0;
}