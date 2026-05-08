#define PROGRAMM_NAME      "mystr"
#define PROGRAMM_COPYRIGHT "(c) 03.03.2020"
#undef  PROGRAMM_COPYRIGHT
#define PROGRAMM_COPYRIGHT "(c) 05.04.2022"
#define PROGRAMM_AUTHOR    "Fredie Kern"

#include <stdio.h>
#include <string.h>

#define MAXN 256

/* -----  Implementierung fehlender Funktionen ab hier -----*/
/*
   mystrlen    Länge einer C-Zeichenkette  (STRing LENgth)
   mystrcat    Zwei C-Zeichenketten aneinander hängen / miteinander verketten (STRing conCATenation)
   trimleft    Führende Leerzeichen einer C-Zeichenkette entfernen  (TRIMming on the LEFT margin)
   trimright   Leerzeichen am Ende einer C-Zeichenkette entfernen  (TRIMming on the RIGHT margin)
*/


/*----------------------------------------------------------*/


int main(int argc,char *argv[])
{
  char str0[MAXN]="  ";
  char str1[MAXN]="  Muster";
  char str2[MAXN]="Haus";
  char str3[MAXN]="Kuechen";
  char str4[MAXN]="Fachgeschaeft  ";
  char text[MAXN]="";
  unsigned int n;

  n = mystrlen(str1);

  printf("%s %d\n",str1,n);
  mystrcat(text,str1); printf("%s\n",text);
  mystrcat(text,"-");
  mystrcat(text,str2); printf("%s\n",text);
  mystrcat(text,"-");
  mystrcat(text,str3); printf("%s\n",text);
  mystrcat(text,"-");
  mystrcat(text,str4); printf("%s\n",text);

  text[0] = '\x0';
  mystrcat(mystrcat(mystrcat(mystrcat(mystrcat(mystrcat(mystrcat(text,str1),"-"),str2),"-"),str3),"-"),str4);
  printf("'%0s' %d\n",text,mystrlen(text));

  text[0] = '\x0';
  printf("'%0s' --> ",str0); printf("'%0s'\n",trimleft(str0));
  printf("'%0s' --> ",str1); printf("'%0s'\n",trimleft(str1));
  printf("'%0s' --> ",str2); printf("'%0s'\n",trimleft(str2));
  printf("'%0s' --> ",text); printf("'%0s'\n",trimleft(text));

  text[0] = '\x0';
  printf("'%0s' --> ",str0); printf("'%0s'\n",trimright(str0));
  printf("'%0s' --> ",str2); printf("'%0s'\n",trimright(str2));
  printf("'%0s' --> ",str4); printf("'%0s'\n",trimright(str4));
  printf("'%0s' --> ",text); printf("'%0s'\n",trimright(text));

  text[0] = '\x0';
  mystrcat(mystrcat(mystrcat(mystrcat(mystrcat(mystrcat(mystrcat(text,str1),"-"),str2),"-"),str3),"-"),str4);
  printf("'%0s' --> ",trimright(trimleft(text)));
  printf("%d\n"  ,mystrlen(text));

  return 0;
}
