#include <iostream>
#include <iomanip>
using namespace std;
int main(int argc, char*argv[])
{
	int i,x=0,vector[20],n=20, dato,centro,inf=0,sup=n-1;
	
	for(i=0;i<20;i++){
		
    cout << "escribe un numero ";
    cin >> vector[i];
	}
	
	cout << " escribe un numero a buscar ";
	cin >> dato;
	
	while(inf<=sup)
	{
	 centro=(sup+inf)/2;
	 if(vector[centro]==dato)	
		
	{
	cout << ("existe\n");
	x=1;
	break;
	}
	else if(dato<vector[centro])
	{
	 sup=centro-1;
	 }
	 else
	 {
     inf=centro+1;
	 }
	}
	
	if(x==0)
	
	{
		cout << ("no existe\n");
		
	}
	
	system("PAUSE");
	return 0;
	
	
}
