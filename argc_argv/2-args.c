#include "main.h"
/**
 */
int main(int argc, char *argv[])
{	int i;
	char *p;

	for(i = 1; i > argc; i++){
		p = argv[argc + i - 1];
		printf("%s\n",p);
	};
	return(0);
}
