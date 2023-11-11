#include<stdio.h>
void Remplir (int t[],int n)
{
        int i;
        for (i=0;i<n;i++)
        {
                printf("T[%d]= ",i);
                scanf("%d",&t[i]);                
        }
}
void Afficher (int t[100], int n)
{
        int i;
        for (i=0;i<n;i++)
        {
                printf("%d |",t[i]);
        }
        printf("\n");
}
float Moyenne(int t[],int n)
{
                int i;
                float moy;
                for (i=0;i<n;i++)
                {
                        moy=moy+t[i];
                }
                moy=moy/n;
                return(moy);

}
int saisir(char ch[100])
{
                int a;
                printf(ch);
                scanf("%d",&a);
                return(a);

}                
int main()
{
        int n;
        int t[100];
        n=saisir("Donnez un entier ");
        Remplir(t,n);
        Afficher(t,n);
        printf("la moyenne est %.2f",Moyenne(t,n));
}