#include<iostream>
#include<windows.h>
#define color SetConsoleTextAttribute

using namespace std;

int main(){
	  HANDLE hConsole=GetStdHandle(STD_OUTPUT_HANDLE);
	
	color(hConsole, 1);
	
	for(int i =1; i<243; i++){
		
		color(hConsole, i);
		cout<<i<<" es fanatica de lo sensual \n"<<endl;	
			
	}
	
	
	
	
	
	return 0;
}
