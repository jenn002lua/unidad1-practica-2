#include <iostream>
#include <iomanip>
using namespace std;

int main(int argc, char *argv[])
{
    int sum=0,x;
    char frase[50];
   
    cout << "Introduzca una frase: ";
    cin >> frase;
   
    for(x = 0;x < 50;x++)
    {
      if (frase[x]>=65 && frase[x]<=90)
      {
       sum++;
      }
    }
   
    cout << sum;
   
    cout < "\n\n" ;
   
    system("PAUSE");     
    return 0;
}
