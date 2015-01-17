#include <iostream>
using namespace std;




main()
{
    int P,Q;
    int N,Z;
    int E,d;
    cout<<"inserisci valore P: ";
    cin>>P;
    int i;
    i=2;
    while(i<P)
    {
        if(P%i==0)
        {
            cout<<"inserisci un numero primo"<<endl<<"P: ";
            cin>>P;
            i=2;
        }
        i++;
    }

    cout<<"inserisci il valore di Q: ";
    cin>>Q;
    i=2;
    while(i<Q)
    {
        if(Q%i==0)
        {
            cout<<"inserisci un numero primo"<<endl<<"Q: ";
            cin>>Q;
            i=2;
        }
        i++;
    }
    N=P*Q;
    cout<<"il valore di N= "<<N<<endl;
    Z=(P-1)*(Q-1);
    cout<<"il valore di Z= "<<Z<<endl;

    //system ("pause");
    return 0;
}
