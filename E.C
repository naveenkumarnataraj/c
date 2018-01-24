#include <stdio.h>
 
int main()
{
  char de;
 
  printf("Input a character\n");
  scanf("%c",&de);
  if ((de >= 'a' && de <= 'z') || (de >= 'A' &&de <= 'Z')){
    if (de=='a' || de=='A' || de=='e' || de=='E' || de=='i' || de=='I' || de=='o' || de=='O' || de== 'u' || de=='U')
      printf("%c is a vowel.\n", ch);
    else
      printf("%c is a consonant.\n", de);
  }
  else
    printf("%c is neither a vowel nor a consonant.\n", de);
  return 0;
    }
