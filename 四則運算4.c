#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) {
	int a,b;
	char op;
	printf("請輸入您要的運算式:");
	scanf("%d %c %d",&a ,&op ,&b);
	switch(op){
		case'+':
			printf("%d\n",a+b);
			break;
		case'-':
			printf("%d\n",a-b);
			break;
		case'*':
			printf("%d\n",a*b);
			break;
		case'/':
			printf("%d\n",a/b);
			break;
		default:
		printf("錯誤\n");
		break;	
	}
	return 0;
}
