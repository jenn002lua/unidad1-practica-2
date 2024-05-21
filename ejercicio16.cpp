#include <iostream>
#include <iomanip>
using namespace std;
int main(int argc, char*argv[])
{
	int x,y,numeros[10][10];
	for(x=0;x<10;x++)
	{
	 for(y=0;y<10;y++)
	 {
	 	numeros[x][y]=(x*10)+1+y;
	}
	
	}
	for(x=0;x<10;x++)
	{
	 for(y=0;y<10;y++)
	 {
	cout << numeros[x][y];
	 }
	cout << "\n";
	}
	system("PAUSE");
	return 0;
	
}
