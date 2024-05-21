#include <iostream>
#include <iomanip>
using namespace std;

int main(int argc, char *argv[])
{
    int sum=0,x;
    char frase[50];
   
    cout << "Introduzca una frase: ";
    cin >> frase;
   
    for(x = 0; x < 50;x++)
    {
      if (frase[x]!='\0')
      {
       frase[x]=frase[x]+3;
      }
    }
   
    cout << sum;
    cout << frase;
    cout << "\n\n";
   
    system("PAUSE");     
    return 0;
}
