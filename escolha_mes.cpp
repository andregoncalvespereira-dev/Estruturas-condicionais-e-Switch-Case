#include <iostream>
#include <string>
using namespace std;

int main()
{
    int mes;
    
    cout <<"digite um mês: ";
    cin>> mes;
    
    switch (mes) {
    case 1: cout<<"Janeiro";
    break;
        
    case 2: cout<<"Fevereiro";
    break;
        
    case 3: cout<<"Março";
    break;
        
    case 4: cout<<"Abril";
    break;
        
    case 5: cout<<"Maio";
    break;
        
    case 6: cout<<"Junho";
    break;
        
    case 7: cout<<"Julho";
    break;
        
    case 8: cout<<"Agosto";
    break;
        
    case 9: cout<<"Setembro";
    break;
        
    case 10: cout<<"Outubro";
    break;
        
    case 11: cout<<"novembro";
    break;
        
    case 12: cout<<"Dezempro";
    break;
        
    default: cout << "mês inecistente";
        
    }
    
    return 0;
}
