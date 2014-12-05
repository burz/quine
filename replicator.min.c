/* Anthony Burzillo 2014 */
#include <stdio.h>
#define q(x) s(x)
#define s(x) #x
#define C int main(int c,char*a[]){FILE*f;if(c>=2)f=fopen(a[1],"w");else f=fopen("o.c","w");if(f==0){printf("Error\n");return 1;}fprintf(f,"/* Anthony Burzillo 2014 */\n#include <stdio.h>\n#define q(x) s(x)\n#define s(x) #x\n#define C %s\nchar s[]=\"\"q(C);C\n",s);fclose(f);return 0;}
char s[]=""q(C);C
