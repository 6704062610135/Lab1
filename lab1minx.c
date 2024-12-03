#include <stdio.h>
int main() {
	printf("a1 = <input your number>\n");
	printf("a1 = <input your number>\n");
	int a1;
	scanf("%d" , &a1);
	int a2;
	scanf("%d" , &a2);
	if (a2 > a1){
		printf("a2 is greater than a1");
		printf("\n%d",(a2-a1));
	}
	else{
		printf("a1 is greater than a2");
		printf("\n%d",(a1-a2));}
}
