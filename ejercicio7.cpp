#include <iostream>
#include <iomanip>
using namespace std;
int main(void)
{
	float aux,numeros[10];
	int i,j,n=10;
	
	for(i=0;i<n;i++){
		        cout <<"escriba un numero" ;
		        cin >> numeros[i];
	}
	
	for(i=0;i<n-1;i++)
	{
	for(j=i+1;j<n;j++)
	{
	  if(numeros[i]<numeros[i])
	  {
	    aux=numeros[i];
	    numeros[i]=numeros[j];
	    numeros[j]=aux;
		}
	}
	}
	for(i=n-1;i>=0;i--){
	cout << numeros[i];
	}
	system("PAUSE");
	return 0;
	
	
}
