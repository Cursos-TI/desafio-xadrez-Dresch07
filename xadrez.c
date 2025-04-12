#include <stdio.h>
void movertorre(int casas){
if (casas>0){
printf("Direita\n");
movertorre(casas -1);
}
}
void moverbispo(int casasa){
if (casasa>0){
printf("Direita e Cima\n");
moverbispo(casasa -1);
}
}
void moverrainha(int casasb){
if (casasb>0){
printf("Esquerda\n");
moverrainha(casasb -1);
}
}

int main(){
printf("Movimento das peças:\nTorre:\n");
movertorre(5);
printf("\nBispo:\n");
moverbispo(5);
printf("\nRainha:\n");
moverrainha(8);

printf("\nCavalo:\n");
int movimento=1;
while(movimento--)
{
for (int c =0;c<2;c++){
printf("Cima\n");
}
printf("Direita\n");
}



return 0;


}