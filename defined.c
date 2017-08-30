#include<stdio.h>

#if !defined (MESSAGE)
	#define MESSAGE "You wish!"
#endif

int main(void)
{
	printf("Here is the message:%s\n",MESSAGE); // as we defined message it returns you wish
	return 0;
}