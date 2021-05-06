#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;
int liczbawpis;
int i=0;
int trudnosc;
int liczbalos = (trudnosc*50)+1;

int main()
{
   cout<<"==== MINIGRA - ZLOTA LICZBA ===="<<endl<<endl;
   cout<<"Wybierz poziom trudnosci:"<<endl<<" 1 - niski"<<endl<<" 2 - sredni"<<endl<<" 3 - wysoki"<<endl;
   cin>>trudnosc;
   if(trudnosc == 1 || trudnosc ==2 || trudnosc ==3)
   {

    srand(time( NULL ));
        cout<<"Wylosowalem liczbe od 1 do "<<trudnosc*50<<"."<<endl;
        liczbalos = (rand()%(trudnosc*50)+1);
        cout<<"Sprobuj ja zgadnac!"<<endl;
        do
        {
            cout<<"Twoja liczba:";
            cin>>liczbawpis;
            i++;
            if((liczbawpis>0) && (liczbawpis<(trudnosc*50)+1))
            {
                if(liczbawpis>liczbalos)
                {
                    cout<<"Twoja liczba jest za duza!"<<endl;

                }
                if(liczbawpis<liczbalos)
                {
                    cout<<"Twoja liczba jest za mala!"<<endl;

                }
            }
            else
            {
                cout<<"Nieprawidlowa liczba!"<<endl;
            return 0;
            }
        }
        while(liczbawpis != liczbalos);

            cout<<"Udalo sie!"<<endl;
            cout<<"Zgadles za "<<i<<" razem, gratulacje!"<<endl;


    }
else
{
    cout<<"Nieprawidlowa liczba, nie probuj szukac bugow!"<<endl;
return 0;
}



}




