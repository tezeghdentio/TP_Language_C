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

int main()
{
    printf("donner a");
    scanf("%d",&a);
      
    printf("donner b");
    scanf("%d",&b);
    printf("donner votre choix");
    scanf("%d",&choix);

    
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
    default:printf("erreur de choix");
        break;
    }
    
 
    return 0;
}