#include<stdio.h>
#include<stdlib.h>
 #include<time.h>
int main(void)
{
     int i,j,n[6],s[6],a=0;
     
     printf("Loteria!! \n");
     
     printf("Digite os numeros da sorte: ");
     for(j=0;j<6;j++)
      scanf("%d",&n[j]);

     
 srand((unsigned) time(NULL));
     for (i = 0; i < 6; i++)
     {
     s[i]= rand() % 100;
             /* gerando valores aleatórios entre zero e 100 */
           printf("%d ", s[i]);

     }

 if((s[0]==n[0] || s[0]==n[1] || s[0]==n[2] || s[0]==n[3] || s[0]==n[4] || s[0]==n[5] )&&(s[1]==n[0] || s[1]==n[1] || s[1]==n[2] || s[1]==n[3] || s[1]==n[4] || s[1]==n[5] ) && (s[2]==n[0] || s[2]==n[1] || s[2]==n[2] || s[2]==n[3] || s[2]==n[4] || s[2]==n[5] ) && (s[3]==n[0] || s[3]==n[1] || s[3]==n[2] || s[3]==n[3] || s[3]==n[4] || s[3]==n[5] ) &&
     (s[4]==n[0] || s[4]==n[1] || s[4]==n[2] || s[4]==n[3] || s[4]==n[4] || s[4]==n[5] ) && (s[5]==n[0] || s[5]==n[1] || s[5]==n[2] || s[5]==n[3] || s[5]==n[4] || s[5]==n[5] ) )
     printf("\nParabens vc e o mais novo milhonario $_$ #_# $_$ \n");

     else 
     printf("\nDesculpe mais vc Perdeu tente na proxima !_!");

     if(s[0]==n[0] || s[0]==n[1] || s[0]==n[2] || s[0]==n[3] || s[0]==n[4] || s[0]==n[5])
     a++;

     if(s[1]==n[0] || s[1]==n[1] || s[1]==n[2] || s[1]==n[3] || s[1]==n[4] || s[1]==n[5])
     a++;

     if(s[2]==n[0] || s[2]==n[1] || s[2]==n[2] || s[2]==n[3] || s[2]==n[4] || s[2]==n[5])
     a++;
     if(s[3]==n[0] || s[3]==n[1] || s[3]==n[2] || s[3]==n[3] || s[3]==n[4] || s[3]==n[5])
     a++;
     if(s[4]==n[0] || s[4]==n[1] || s[4]==n[2] || s[4]==n[3] || s[4]==n[4] || s[4]==n[5])
     a++;
     if(s[5]==n[0] || s[5]==n[1] || s[5]==n[2] || s[5]==n[3] || s[5]==n[4] || s[5]==n[5])
     a++;

     printf("\n Voce fez %d Pontos !",a);



     return 0;
}
