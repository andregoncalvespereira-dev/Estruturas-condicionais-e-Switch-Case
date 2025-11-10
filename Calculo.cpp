#include <iostream>
#include <string>
using namespace std;

int main()
{
    int primeiro, segundo,soma;
    
    cout <<"digite o primeiro numero: ";
    cin>> primeiro;
    
    cout<< "digite o segundo numero:";
    cin>> segundo;
    
    cout<< "qual o numero do calculo!";
    cin>> soma;
    
    switch (soma) {
    case 1: cout<<"subtração: ";
    cout<< primeiro - segundo;
    break;
    case 2: cout<<"multiplicação: ";
    cout<< primeiro * segundo;
    break;
    case 3: cout<<"divisão: ";
    cout<< primeiro / segundo;
    break;
    case 4: cout<<"Adição: ";
    cout<< primeiro + segundo;
    break;
    default: cout << "invalido: ";
    }
    return 0;
}
