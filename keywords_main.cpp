// #include "keywords_version"
#define PROGRAMM_NAME      "keywords"
#define PROGRAMM_COPYRIGHT "(c) 03.03.2020"
#define PROGRAMM_AUTHOR    "Fredie Kern"

#include <stdio.h>
#include <string.h>


char *keywords[]={"point",   // 0
                  "line",    // 1
                  "circle",  // 2
                  "ellipse", // 3
                  "polygon", // 4
                  "sphere",  // 5
                  "box",     // 6
                  NULL};     // sentinel

/* -----  Implementierung fehlender Funktionen ab hier -----*/


/*----------------------------------------------------------*/

int main(int argc,char *argv[])
{
  char word1[]="line";
  char word2[]="cuboid";
  char word3[]="bar";
  char word4[]="circle";
  char word5[]="box";
  char *words[]={word1,word2,word3,word4,word5,NULL/* sentinel */};

  int i=0;
  int act;
  while (words[i]!=NULL)
  {
    switch(act=iskeyword(keywords,words[i]))
    {
       case  0:
       case  1:
       case  2:
       case  3:
       case  4:
       case  5:
       case  6:
         if (actions[act]) actions[act](act);
         break;
       case -1:
         printf("'%0s' ist kein gueltiges Schluesselwort!\n",words[i]);
         break;
    }
    i++;
  }

  return 0;
}
