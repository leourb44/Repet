#include <iostream>
using namespace std;

int main(){
	
	for(int i = 1; i <= 500; i++)
	{
		if (i % 5 == 0)
		{
			cout << "\n";
			cout << i;	
		}
	}
	
		int num = 0;
	
	while(num <= 500){
		if(num % 5 == 0){
			cout << "\n";
			cout << num;
		}
		num++;
	}
	
	int num = 0;
	
	do{
		if(num % 5 == 0){
			cout << "\n";
			cout << num;
		}
		num++;
	}while(num <= 500);
	
	return 0;
}
