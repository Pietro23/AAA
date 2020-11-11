#include <stdio.h>
#include <stdlib.h> //Da includere per utilizzare rand() e srand ()
#include <time.h> // per utilizzare time()
#include <string.h>//per utilizzare strlen
int main(void){
//Dichiaro le variabili
char i=0;
int a; //Serve all'utente per decidere 1 o 2
int b;//Serve per decidere 1 o 2
char str[128];  //str = plaintext
char k[128];//Chiave per cifrare
char r[128];//chiave automatica
char txtc[128]; //Testo cifrato

time_t t ;


printf("Inserire la stringa di max 128 caratteri che si vuole cifrare\n");
fgets(str,128,stdin);
printf("La stringa inserita è: %s\n", str);

printf("Per immettere manualmente la chiave digitare: 1\nPer generare casualmente la chiave digitare: 2\n");
scanf("%d", &a);
getchar();
  if(a==1){
    printf("Inserisci la chiave con la quale cifrare il testo(uguale o superiore non di 128)\n");
    fgets(k,128,stdin);

    if(strlen(k)<strlen(str)){
      printf("Inserisci la chiave uguale o maggiore del testo da cifrare,per favore riesegui il programma \n");
    }
    else {
      printf("La chiave inserita è: %s\n",k);
      txtc[(unsigned char)i]=str[(unsigned char)i]^k[(unsigned char)i];
      printf("Il testo cifrato è: %s\n", txtc);
      printf("Se vuoi vedere il testo inserito attraverso testo cifrato^chiave inserisci 1\n");
      scanf("%d", &b);

      if(b==1){
      str[(unsigned char)i]=txtc[(unsigned char)i]^k[(unsigned char)i];
      printf("Il testo inserito ricavato con txtc^k è: %s\n", str);
    }
    else{
      printf("Devi inserire 1... Per favore ripetere da capo il programma\n");
    }
  }
}
else if(a==2){
  printf("La chiave generata automaticamente è:\n");
  /* Inizializza il generatore di numeri casuali utilizzando il tempo attuale */
  srand((unsigned) time(&t));
  for (int i=0; i<=str[i]; i++) {

  printf("%d",rand() %128);


}
  if(strlen(r)<strlen(k))
  {
    printf("La chiave generata è piu piccola di k\n");
  }
  else{
    txtc[(unsigned char)i]=str[(unsigned char)i]^r[(unsigned char)i];
    printf("\nIl testo cifrato è: %s\n", txtc);
    printf("Se vuoi vedere il testo inserito attraverso 'testo cifrato^chiave' inserisci 2\n");
    scanf("%d", &b);
  }
  if(b==2){
  str[(unsigned char)i]=txtc[(unsigned char)i]^r[(unsigned char)i];
  printf("Il testo inserito ricavato con txtc^k è: %s\n", str);
  }
  else{
  printf("Devi inserire 2... Per favore ripetere da capo il programma\n");
  }
  }
else if(a!=1 && a!=2){
  printf("Devi inserire 1 o 2,per favore, ripetere il programma dall'inizio.\n");
}
return 0;
}
