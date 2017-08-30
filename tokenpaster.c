#include <stdio.h>

#define tokenpaster(n) printf("token" #n "=%d\n",token##n) //it returns the value assigned to it rather than the argument

int main(void){
	int token45=120;
	tokenpaster(45);//it prints 120 because we defined in the tokenpaster
return 0;
}