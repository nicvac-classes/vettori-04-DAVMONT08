#include <iostream>
#include <vector>
using namespace std;

int main() {
              int N,i,np,min,max,imin,imax;
              cout<<"inserisci numeri da generare"<<endl;
              cin>> N;
              vector<int> v(N);
              np=0;
              for(i=0;i<N;i=i+1)
              {
                 v(i)=random(1001);
                 if v(i)%2=0
                 {
                    np=np+1;
                 }
                 }
                 cout<<"sono stati generati" <<np << "numeri pari"<<endl;
                min=v(0);
                imin=0;
                for(i=0;i<N;i=i+1)
                {
                    if v(i)<min
                    {
                        min=v(i);
                        imin=i;

                    }
                }
                cout<<"il valore più piccolo è" <<min << "e si trova nella posizione" <<imin <<endl;
                max=v(0);
                imax=0;
                for(i=0;i<N;i=i+1)
                {
                    if v(i)>max
                    {
                        max=v(i);
                        imax=i;
                    }
                }

                cout<<"il valore più grande è" <<max << "e si trova nella posizione " <<imax <<endl;





               }

//LEGGERE LE ISTRUZIONI NEL FILE README.md
