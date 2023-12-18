/*////Inserisci un carattere e dire se è una lettera e se MAIUSCOLA >>>>> minuscola sennò minuscola >>>>MAIUSCOLA*/

#include <iostream>
#include <string>
using namespace ;

int main()
{
    char c;
    cout<<"inserisci un carattere ";    
    cin>>c;
    if((c>='a'&&c<='z'))
    { //lettera minuscola trasformo in maiuscola
        c=c-'a'+'A';
    }
    else 
    {
        if(c>='A'&&c<='Z')
        { //lettera maiuscola trasformo in minuscola
            c=c-'A'+'a';        
        }
    }
    cout<<c;
}