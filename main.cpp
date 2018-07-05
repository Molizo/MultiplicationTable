#include <iostream>

using namespace std;

int main()
{int n,a,P;
    cout << "Introduceti numarul:";
    cin>>n;
    cout<<endl<<endl<<"Tabla inmultirii:"<<endl<<endl;
    for(a=1;a<=10;a=a+1)
    {
        P=a*n;
        cout<<a<<"x"<<n<<"="<<P<<endl<<endl;
    }
    return 0;
}
