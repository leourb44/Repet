#include <iostream>
using namespace std;

int main(){
	
	for(int i = 100; i <= 200; i++)
	{
		cout << "\n";
		cout << i;
	}
	
	int num = 100;
	
	while(num <= 200){
		cout << "\n";
		cout << num;
		num++;
	}
	
	int num = 100;
	
	do{
		cout << "\n";
		cout << num;
		num++;	
	}while(num <= 200);
	
	return 0;
}
