#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{   cout<<"==============="<<endl;
    cout<<"ascii to binary"<<endl;
    cout<<"==============="<<endl;
    char texto[4];
    cin.getline(texto,3);
    getchar();    
    char bin;
    char saida;    
    texto[4]='\0';
    for ( int i = 0,dec; texto[i] != '\0'; i++ )
   {
       // aqui tens o caracter ascii da letra
       dec =int(texto[i]) + '0'<<'\n';
       cout<<dec<<endl;


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

       saida = bin;
    }
    saida='\0';
    cout<<saida<<endl;
    system("PAUSE");
    return 0;
}
