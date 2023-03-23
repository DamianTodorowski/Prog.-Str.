#include<stdio.h>
int main(){
    //cw_3_1_0 zapytanie o adres
int liczba=-505;
printf("Wartosc zmiennej to: %d\n", liczba);
printf("Adres zmiennej to: %p\n\n", &liczba);
//cw 3_1_00 operator wyluskania, deklaracja wskaznika
int *wskaznik=&liczba;
printf("Wartosc zmiennej to: %d\n", liczba);
printf("Adres zmiennej to: %p\n", &liczba);
printf("Adres przechowywany we wskazniku to: %p\n", wskaznik);
printf("Wskazywana wartosc to: %d\n",*wskaznik);
//cw 3_1_000 wskazniki na stala i stale wskazniki
int i=0;
const int *a=&i; //wskaznik na stala, nie zmieniamy wartosci wskazywanej
int * const b=&i; //staly wskaznik, nie mozna przestawic jego adresu
int const * const c=&i; //staly wskaznik na stala
//*a=1; //nie mozna zmieniac wartosci wskazywanej wskaznikowi na stala
*b=1; //tu kompliator nie protestuje
a=b; //ok
//b=a; //nie mozna zmienic adresu stalego wskaznika
a=&liczba;//ok
//b=&liczba; //niedozwolone
//dla stalych wskaznikow na stala zarowno przestawienie adresu jak i wskazywanej wartosci sa niedozwolone
//*c=1;
//c=&liczba;
}
