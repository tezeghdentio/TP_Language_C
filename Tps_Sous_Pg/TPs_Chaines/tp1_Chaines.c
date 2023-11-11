#include<stdio.h>
#include<string.h>
int main()
{
    char ch[200];
    int i=0;
    int test;
    int n;
    
    printf("donner une chaine\n");
    scanf("%s",&ch);
    n=strlen(ch);
    i=0;
    test=1;
    while ( (i<(strlen(ch)/2)) and (test==1))
    { 
       if(ch[i]==ch[strlen(ch)-i-1])
        {
          i++;      
        }
        else
        {
            test=0;
        }
                       
    }   
    if(test==1)
    {
        printf("%s est palindrome",ch);
    }
    else
    {
        printf("%s n''est pas palindrome",ch);
    } 
return 0;       
}