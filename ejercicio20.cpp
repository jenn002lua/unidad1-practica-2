#include <iostream>
#include <iomanip>
using namespace std;
int main(int argc,char*argv[])
{
	int indice,x;
	char frase[50];
	
	cout << "introduzca una frase: ";
	cin >> frase;
	
	for(x=0;x<50;x++)
	{
	if(frase[x]=='\0')
	{
		indice=x;
		break;
		}
	}
	cout << "la frase al reves es :" <<"\n\n"<<endl;
	for(x=indice-1;x>=0;x--)
	{
		cout << frase[x];
	}
	cout << "\n\n";
	system("PAUSE");
	return 0;
	
}
