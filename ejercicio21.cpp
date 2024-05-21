#include <iostream>
#include <iomanip>
using namespace std;
int main(int argc,char*argv[])
{
	int sum=0,x;
	char frase[50];
	
	cout << " introduzca una frase: ";
	cin >> frase;
	
	for(x=0;x<50;x++)
	{
		switch(frase[x])
		{
		case'a':
			sum++;
		    break;
		case'e':
			sum++;
			break;
		case'i':
			sum++;
			break;
		case'o':
			sum++;
			break;
		case'u':
			sum++;
			break;
		default:
			break;
	}
	}
	cout << "\n\n cuantas vocales tiene : \n\n" <<sum<<endl;
	cout << "\n\n";
	system("PAUSE");
	return 0;

}
