#include <iostream>

using namespace std;

int main()
{
    srand(time(0));
    int n, sprawdzana; /*zmienne*/
    int const ROZMIAR=20;
    int tablica[20];
for(int i=0;i<ROZMIAR;i++)
{
    tablica[i]=0;
}
do
{
   cout<<"wprowadz liczbe n (<15) \n";
   cin>>n;

   

} while (n>15 || n<0);
for(int i=0; i<n ; i++)
{
    cout<<"Wprowadz liczbe do tabeli, naturalna parzysta"<<endl;
    cin>>sprawdzana;
    if(sprawdzana % 2==0 && sprawdzana<100 && sprawdzana >=0)
    {
        tablica[i]=sprawdzana;
    }
    else
    {
        cout<<"Pomyłka, masz 1 próbę \n";
        cin>>sprawdzana;
        if(!(sprawdzana % 2 == 0 && sprawdzana <100 && sprawdzana >=0))
        {
            cout<<"koniec prob \n";
            break;

        }
        else
        {
            tablica[i]=sprawdzana;
        }
    }    
}    
for(int i=0; i<ROZMIAR-1; i++)
{
    cout<<tablica[ROZMIAR-1]<<"\n";
    for(int i = 0; i < ROZMIAR; i++)
     {
        if(tablica[i]==0)
        {
            do\
            {
                tablica[i]=10+rand()%(99);
            }
            while(tablica[i] % 2  !=0);

        }
 
    }
}  
for(int i=0 ; i<ROZMIAR - 1; i++)
{
    cout<<tablica[i]<<",";
} 
    cout<<tablica[ROZMIAR - 1] << "\n";
    int* L= &tablica[0];

    int*P= &tablica[ROZMIAR -1];
    while(L<P)
    {
        int temp=*L;
        *L=*P;
        *P=temp;
        L++;
        P--;
    }
    for(int i = 0; i < ROZMIAR - 1; i++)
    {
        cout<<tablica[i]<<",";

    }
    cout<<tablica[ROZMIAR-1];
}
    

