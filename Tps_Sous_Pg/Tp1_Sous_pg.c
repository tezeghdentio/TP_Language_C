#include<stdio.h>
int a,b,choix;

int somme(int x,int y)
{
    return(x+y);
}
int produit(int x,int y)
{
    return(x*y);
}
int soustraction(int x,int y)
{
    return(x-y);
}
float division(int x,int y)
{

    return(x/y);
}
int saisir(char ch[70])
{
    int x;
    printf(ch);
    scanf("%d",&x);
    return(x);
}

int main()
{
    a=saisir("Donner a\n");
    b=saisir("Donner b\n");
    choix=saisir("donner votre choix \n1 Pour la somme\n2Pour la soustraction \n3Pour le produit \n4 Pour la division\n");  
    
    switch (choix)
    {
    case 1:
        printf("%d+%d=%d",a,b,somme(a,b));
        break;
    case 2:
        printf("%d-%d=%d",a,b,soustraction(a,b));
        break;
    case 3:
        printf("%d*%d=%d",a,b,produit(a,b));
        break;
    case 4:if(b!=0)
            {
                printf("%d/%d=%.3f",a,b,division(a,b));
            }else
                {
                  printf("Division par 0 Impossible");  
                }
        
        break;

    default:printf("erreur de choix");
        break;
    }
    
 
    return 0;
}