#include<stdio.h>

int main()
{
        int mat[50][50];
        int m,n,i,j;


        printf("saisir le nombre de lignes:\n");
        scanf("%d",&n);
                printf("saisir le nombre de colonnes:\n");
        scanf("%d",&m);
        printf("saisir les elements de matrice:\n");
//remplir une matrice
        for(i=0;i<n;i++)
        {
                for(j=0;j<m;j++)
                {
                        printf("M[%d,%d]: ",i,j);
                        scanf("%d",&mat[i][j]);
                       
                }
    }
 //affichage d'une matrice
        for(i=0;i<n;i++)
        {
                for(j=0;j<m;j++)
                {
                        printf(" %d ",mat[i][j]);        
                }
                printf(" \n ");
    }  
   
}