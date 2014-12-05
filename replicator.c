/* Anthony Burzillo 2014 */
#include <stdio.h>
#define qstr(x) str(x)
#define str(x) #x
#define CODE int main(int argc, char* argv[]) { FILE* f; if(argc >= 2) f = fopen(argv[1], "w"); else f = fopen("output.c", "w"); if(f == 0) { printf("Couldn't open file\n"); return 1; } fprintf(f, "/* Anthony Burzillo 2014 */\n#include <stdio.h>\n#define qstr(x) str(x)\n#define str(x) #x\n#define CODE %s\nchar internalString[] = \"\" qstr(CODE);\nCODE\n", internalString); fclose(f); return 0; }
char internalString[] = "" qstr(CODE);
CODE
