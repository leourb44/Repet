#include <iostream>
using namespace std;

int main(){
	
	for(int i = 1; i<=100; i++)
	{
		if(i % 2 == 0)
		{
			cout <<"\n";
			cout << i;
		}
	}
	
	int num = 1;
	
	while(num <= 100){
		if(num % 2 == 0){
			cout << "\n";
			cout << num;
		}
		num++;
	}
	
	int num = 1;
	
	do{
		if(num % 2 == 0){
			cout << "\n";
			cout << num;
		}
		num++;
	}while(num <= 100);
	
	return 0;
}
