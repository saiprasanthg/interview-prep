#include<stdio.h>

#define message_for(a,b) \
	printf(#a " and " #b ":We love you!\n")

int main(){
	message_for(romeo,juliet);
return 0;
}