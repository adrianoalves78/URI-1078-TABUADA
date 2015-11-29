#include <stdio.h>
   
int main() {
   
int a,N; // comando para representar uma variavel neste caso a,N
scanf("%d",&N); // comando para armazenar a variavel
for(a=1;a<=10;a++) // usei o comando for por se tratar de uma forma compacta de escrever um loop
printf("%d x %d = %d\n",a,N,a*N);
  
return 0;
}
