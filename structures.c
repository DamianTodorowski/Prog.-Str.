struct trojkat
{
    double a,b,c;
};


double obwod(struct trojkat t)
{
    return t.a+t.b+t.c;
}


void wypiszstr(struct trojkat t)
{
    printf("pole a wynosi: %f \n", t.a);
     printf("pole b wynosi: %f \n", t.b);
      printf("pole c wynosi: %f \n", t.c);
}


void przepiszstr(struct trojkat t1, struct trojkat *t2)
{
    *t2=t1;
}

int main()
{
    struct trojkat t1;
    t1.a=3;
    t1.b=4;
    t1.c=5;

    struct trojkat t2;
    t2.a=1;
    t2.b=1;
    t2.c=1;
    struct trojkat *wsk2=&t2;
    printf("obwod to: %f\n",obwod(t1));
    wypiszstr(t1);

    printf("\n");
    wypiszstr(t2);
    przepiszstr(t1,wsk2);
    printf("\n");
    wypiszstr(t1);
    wypiszstr(*wsk2);



    return 0;
}




-----------------------------------------------------------
  
  
  
  #include <stdio.h>
#include <stdlib.h>



struct zespolone{

double a,b;
};

void wyswietl_zespolona(struct zespolone liczba)
{

    printf("%f + %f i\n",liczba.a,liczba.b);
}

void wczytaj_zespolona(struct zespolone liczba)
{
    scanf("%f",&liczba.a);
    scanf("%f",&liczba.b);
}


double modul_zespolona(struct zespolone liczba)
{
    return pow((liczba.a*liczba.a+liczba.b*liczba.b),0.5);
}

struct zespolone dodaj(struct zespolone liczba1, struct zespolone liczba2)
{
    struct zespolone suma;
    suma.a=liczba1.a+liczba2.a;
    suma.b=liczba1.b+liczba2.b;
    return suma;
};



struct zespolone iloraz(struct zespolone X, struct zespolone Y)
{
    struct zespolone iloraz;
    iloraz=((X.a*Y.a)+(X.b*Y.b))/((Y.a*Y.a)+(Y.b*Y.b)) + ((Y.a*X.c)-(X.a*Y.d))/((Y.a*Y.a)+(Y.b*Y.b)); //to moze byc zle
    
};

int main()
{
    struct zespolone X;
    X.a=2;
    X.b=7;
    wyswietl_zespolona(X);

    struct zespolone Y;
    Y.a=4;
    Y.b=8;
    wyswietl_zespolona(Y);

    struct zespolone Z;
    Z=dodaj(X,Y);

    wyswietl_zespolona(Z);



    return 0;
}


-----------------------------------------------------------------
