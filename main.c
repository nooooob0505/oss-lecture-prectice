#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int plus(int a, int b);
int main (void)
	int a,b;
        scanf("%d %d",&a,&b);
        printf("%d %d\n",a,b);
        int res=plus(a,b);
        printf("%d hello world",res);
        printf("how do this");
        printf("hello world");

	return 0;
}
int plus(int a, int b){
        res=a+b;
        printf("loading...");
        printf("done!");
}

