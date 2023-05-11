void wypisz(int n,int m,int t[][m])
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            printf("%d\t",t[i][j]);
        }
        printf("\n");
    }
}
void wypiszwdol(int n,int m, int t[][m])
{
    int i,j;
    int temp[m];
    {
        for(i=0;i<m;i++)
            temp[i]=t[n-1][i];
    }
    for(i=n-1;i>0;i--)
    {
        for(j=0;j<m;j++)
        {
            t[i][j]=t[i-1][j];
        }
    }
    for(j=0;j<m;j++)
        t[0][j]=temp[j];
}


//------------------------------------------------------
