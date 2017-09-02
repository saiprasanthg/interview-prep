#include<stdio.h>
#include<stdlib.h>
int main(){
	char *str;
	/* allocate memory */
	str=(char*)malloc(15);
	strcpy(str,"google");
	printf("string=%s,Address=%u\n",str,str);
/*reallocate memory*/
str=(char*)realloc(str,15);
	strcat(str,".com");
	printf("string=%s,Address=%u\n",str,str);

	free(str);

return 0;	
}