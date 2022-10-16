#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    long long kuti = 10000000 ;
    long long lakh = 100000 ;
    long long hajar = 1000 ;
    long long shata = 100 ;
    long long i,n ;
    while(cin >>i ){
        i<=999999999999999 ;
        i >=0 ;
        n = i ;

        if ( i >= (kuti * kuti) )
        {
            cout << i / (kuti * kuti) <<"kuti " ;
            i = i % (kuti * kuti) ;
        }
        if ( i >= (kuti * lakh) )
        {
            cout << i / (kuti * lakh)<<"lakh " ;
            i = i % (kuti * lakh) ;
        }
        if ( i >= (kuti * hajar) )
        {
            cout << i / (kuti * hajar)<< "hajar " ;
            i = i % (kuti * hajar) ;
        }
        if ( i >= (kuti * shata) )
        {
            cout << i / (kuti * shata)<< "shata " ;
            i = i % (kuti * shata) ;
        }
        if (i >= kuti)
        {
            cout << i / kuti << "kuti " ;
            i = i % kuti ;
        }
        else if ( n >= kuti )
        {
        cout <<"kuti ";
        }
        if (i >= lakh)
        {
            cout << i / lakh << "lakh " ;
            i = i % lakh ;
        }
        if ( i >= hajar )
        {
            cout << i / hajar <<"hajar " ;
            i = i % hajar ;
        }
        if ( i >= shata )
        {
            cout << i / shata <<"shata " ;
            i = i % shata ;
        }
        if ( i > 0 )
        {
            cout << i << endl ;
        }
        else if ( i = 0 )
        cout <<endl ;
    }


}
