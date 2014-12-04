/* Anthony Burzillo 2014 */
#include <stdio.h>
#define qstr(x) str(x)
#define str(x) #x
#define CODE int main(int argc, char* argv[]) { printf("/* Anthony Burzillo 2014 */\n#include <stdio.h>\n#define qstr(x) str(x)\n#define str(x) #x\n#define CODE %s\nchar internalString[] = \"\" qstr(CODE);\nCODE\n", internalString); return 0; }
char internalString[] = "" qstr(CODE);
CODE
