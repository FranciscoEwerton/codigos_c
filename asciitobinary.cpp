#include <iostream>
#include <string>
#include <cstdlib>
int MAX_SIZE=8;
using namespace std;
int main()
{
   char texto[MAX_SIZE];
   cin>>texto;
   // aqui a var texto recebera algum valor
   //
   texto[MAX_SIZE+1]='\0';
   string bin;
   string saida;
   for ( int i = 0, dec; texto[i] != '\0'; i++ )
   {
       // aqui tens o caracter ascii da letra
       dec = int ( texto[i] ) <<'\n';

       // aqui convertes para um binario
       while (dec > 0)
       {
          if (dec % 2 == 0)
            {
               bin = '0' + bin;
            }
          else
            {
               bin = '1' + bin;

            }
            dec = dec / 2;

       }

       saida += bin;
    }
    cout<<saida<<endl;
    system("Pause");
}

    // saida tem o binario equivalente a string original texto
