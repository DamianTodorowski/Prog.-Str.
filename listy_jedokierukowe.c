#include <stdio.h>
#include <stdlib.h>
struct element
{
    int i;
    struct element *next; //przechowuje wartosc int'a w polu i, ponadto przechwoje wskaznik na kolejny element, ktory tez jest intem, ostatnie pole null;
};
struct element *utworz()
{
    return NULL;
};
void wyczysc(struct element* lista)
{
    struct element *wsk=lista;
    while(lista!=NULL)
    {
        lista=lista->next;          //przechodzenie na kolejny adresy listy
        free(wsk);
        wsk=lista;
    }
}
struct element* dodajnapoczatek(struct element* lista,int a)
{
    struct element *wsk=malloc(sizeof(struct element));     //tworzymy oderwany element
    wsk->i=a;       //*<wsk>. == wsk ->i=a;                 //w pole i wstawiamy a
    wsk->next=lista;                                        //wskaznik na lista czyli poczatkowy element
    return wsk;                                             //returnujemy wsk bo wsk jest poczatkiem tej listy
};
struct element* dodajnakoniec(struct element* lista,int a)
{
    struct element *wsk;     //*<wsk>. == wsk ->i=a;
    if(lista==NULL)
    {
        lista=wsk=malloc(sizeof(struct element));
    }
    else
    {
        wsk=lista;
        while(wsk->next!=NULL)
        {
             wsk=wsk->next;
        }
    wsk->next=malloc(sizeof(struct element));
    wsk=wsk->next;
    }
    wsk->i=a;
    wsk->next=NULL;
    return lista;
};
struct element* dodajw(struct element* lista, struct element* elem,int a)
{
    struct element *wsk=malloc(sizeof(struct element));
    wsk->i=a;
    if(elem=NULL)
    {
        wsk->next=lista;
        lista=wsk;
    }
    else
    {
       wsk->next=elem->next;
       elem->next=wsk;
    }
    return lista;
};
void wypisz(struct element *lista)
{
    while(lista!=NULL)
    {
        printf("%d\t",lista->i);
        lista=lista->next;
    }
    printf("%\n");
}
int suma(struct element *lista)
{
    int suma=0;
    while(lista!=NULL)
    {
        suma=suma+lista->i;
        lista=lista->next;
    }
    return suma;
}

void zeruj(struct element* Lista)
{
 while(Lista!=NULL)
 {
     Lista->i=0;
     Lista=Lista->next;
 }
}

//7.3.6

//7.3.7

struct element* usun(struct element* Lista,int a){
struct element * wsk,*wsk2;
if(Lista==NULL)
{
    return Lista;
}
if(Lista->i==a)
{
    Lista=Lista->next;
    free(wsk);
}
else{
  while((wsk->next!=NULL)&&(wsk->next->i!=a))
  {
      wsk=wsk->next;
      if(wsk->next!=NULL)
      {
          wsk2=wsk->next;
          wsk->next=wsk2->next;
          free(wsk2);
      }
  }
}
return Lista;
};


//7.3.31
struct element* odwroc(struct element* Lista){

struct element* pom1,*pom2;
if((Lista==NULL)||(Lista->next==NULL))
{
    return Lista;
    pom1=Lista->next;
    pom2=pom1->next;
    Lista->next=NULL;
    pom1->next=Lista;

}
while(pom2!=NULL)
{
    Lista=pom1;
    pom1=pom2;
    pom2=pom2->next;
    pom1->next=Lista;

}
return pom1;
};

//7.3.30
struct element * sklej(struct element* Lista1,
                       struct element * Lista2)
{
  struct element * pom;
  if(Lista1==NULL)
  {
      return Lista2;
      pom=Lista1;
  }
  while(pom->next!=NULL)
  {
      pom=pom->next;
      pom->next=Lista2;
  }
  return Lista1;

};


//7.3.32
struct element * polacz(struct element* Lista1,
                        struct element* Lista2)
{

    struct element * pom, *pom2;
    if(Lista1==NULL)
        return NULL;
    pom=pom2=Lista1;
    Lista1=Lista1->next;
    pom2->next=Lista2;
    pom2=Lista2;
    Lista2=Lista2->next;
    while(Lista1!=NULL){
        pom2->next=Lista1;
        pom2=Lista1;
        Lista1=Lista1->next;
        pom2->next=Lista2;
        pom2=Lista2;
        Lista2=Lista2->next;
    }
    return pom;
};



main()
{
    struct elemenet* lista=utworz();
    lista=dodajnakoniec(lista,4);
    wypisz(lista);
    zeruj(lista);
    lista=dodajnakoniec(lista,15);
    wypisz(lista);
    lista=dodajnakoniec(lista,3);
    wypisz(lista);
    lista=dodajnapoczatek(lista,6);
    wypisz(lista);
    lista=dodajnapoczatek(lista,4);
    wypisz(lista);
    printf("%d",suma(lista));
}
