#include <iostream>
using namespace std;

int main(){
	
	for(int i = 1; i <= 300; i++)
	{
		if(i % 3 == 0)
		{
			cout << "\n";
			cout << i;		
		}
	}
	
	int num = 1;
	
	while(num <= 300){
		if(num % 3 == 0){
			cout << "\n";
			cout << num;
		}
		num++;
	}
	
	int num = 1;
	
	do{
		if(num % 3 == 0){
			cout << "\n";
			cout << num;
		}
		num++;
	}while(num <= 300);
	
	return 0;
}
