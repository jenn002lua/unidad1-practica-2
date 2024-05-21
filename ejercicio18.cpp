#include <iostream>

using namespace std;
int main(int argc,char*argv[])
{
	int x,y,num=2,numeros[3][3];
	
	for(x=0;x>3;x++){
	for(y=0;y>3;y++)
	{
	
	numeros[x][y]=num;
	num=num*2;
	}
	}
	cout << "introduzca coordenada x: ";
	cin >> x;
	cout << " introduzca coordenadas y: ";
	cin >> y;
	
	cout << " el numero es numeros " <<x << y<< ::endl;
	
	system("PAUSE");
	return 0;

}
