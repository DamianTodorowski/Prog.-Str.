#include<stdio.h>

///cw 5_2_9
void wytnij(char *napis, int n, int m){
   int i,j;

   for (j=0;napis[j]!=0;j++)
    {
 ///ustala dlugosc napisu
    }
       if(j+1>m) ///jesli napis jest wystarczajaco dlugi aby wycianac srodek
       {
           for (i=0;i+m<j;i++)
           {
               napis[n+i]=napis[m+i+1]; ///n=5 m=15,   0 1 2 3 4 <- 0 1 2 3 4, 5 6 7 8 ... <- 16 17 18 19
           }
       }
       else if((n<j)&&(j+1<=m)) ///jesli jest sredniej dlugosci i wycinamy koncowke
       {
           napis[n]=0;
       }
}

int main(){
    ///cw 5_2_9
printf("\ncw 5_2_9\n");
char napiszad9[40]="z tego napisu mamy cos wyciac";
printf(napiszad9);
printf("\n");
wytnij(napiszad9,5,15);
printf(napiszad9);
printf("\n");
char napiszakrotki[40]="krotki";
printf(napiszakrotki);
printf("\n");
wytnij(napiszakrotki,8,12);
printf(napiszakrotki);
printf("\n");
char napissredniodlugi[20]="sredni";
printf(napissredniodlugi);
printf("\n");
wytnij(napissredniodlugi,4,10);
printf(napissredniodlugi);
}
