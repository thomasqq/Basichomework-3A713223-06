#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	int year;
	
	printf("請輸入年份:");
	scanf("%d",&year);
	
	if(year%400==0||year%100!=0&&year%4==0){
		printf("是閏年\n");
	}
	else{
		printf("不是閏年\n");
	}
	
	system("PAUSE");
	return 0;
}
