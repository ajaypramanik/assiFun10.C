//10. Write a function to print all prime factors of a given number. For example, if the
//number is 36 then your result should be 2, 2, 3, 3. (TSRN)

#include<stdio.h>
int Num();
 int main() {
    int a;
    printf("enter a number:");
    scanf("%d",&a);
   
    Num(a);
    return 0;
    }  

 int Num(int a) {
   int i,k;
   for(i=2;i<=a/2;i++)
   {
      if(a%i==0) {
      
      k=i;
   
   
    for (i=2;i<=k-1;i++){

      if(k%i==0)
      break;
      if(i==k)
      printf("%d",k);



    }
   

     // printf("%d\t",i);
     
       //break;
      }
   
   
 }
     
 }
  