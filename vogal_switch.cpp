#include <iostream>
#include <string>
using namespace std;

int main()
{
    char letra;
    
    cout <<"digite um letra: ";
    cin>> letra;
    
    switch (letra) {
      
    case 'a': cout<<"vogal A";
    break; 
      
    case 'e': cout<<"vogal E";
    break;
      
    case 'i': cout<<"vogal I";
    break;
      
    case 'o': cout<<"vogal O";
    break;
      
    case 'u': cout<<"vogal U";
    break;
      
    default: cout << "cosoante";
      
    }
    return 0;
}
