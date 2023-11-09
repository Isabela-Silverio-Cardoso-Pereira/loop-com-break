/******************************************************************************

Loop com break:

Implemente um programa que use um loop while para solicitar números ao usuário. O loop deve ser interrompido se o usuário inserir o número 0.

*******************************************************************************/
#include <iostream>

using namespace std;

int main()
{
     //int cont = 5;
     int i = 0;
     int n;
     while(i<=5){
         cout << "digite um numero" << i + 1  << ":";
         cin >> n;
         
         if(n == 0){
             break;
         }
         
         i++;
         
     }
    
    

    return 0;
}

