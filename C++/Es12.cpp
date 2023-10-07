/*Insersci un carattere e dire se è una lettera*/

#include <iostream>
#include <string>
using namespace std;

int main() {
    char a;
    cout<<"Dammi il carattere da tastiera e ti dirò se quest'ultimo e' una lettera..."<<endl;
    cin>>a;
     if(a>='c')
    {
        if(a<='z')
        {
            cout<<"e' una lettera minuscola";
        }
        else
        {
            cout<<"non e' una lettera minuscola";
        }
    }
    else
    {
        cout<<"non e' una lettera minuscola";
    }
    return 0;
}