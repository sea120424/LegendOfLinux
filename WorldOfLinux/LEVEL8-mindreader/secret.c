#include<stdio.h>
#include<stdlib.h>
#define PAUSE printf("按任意鍵繼續\n"); fgetc(stdin);

int main(){
	int seed = 5566;
	srand(seed);
	int num1 = (rand()%1000);
	printf("<魔術師> 請輸入第一個數字\n");
	int guess1;
	scanf("%d", &guess1);
	int num2 = (rand()%1000);
	printf("<魔術師> 請輸入第二個數字\n");
	int guess2;
	scanf("%d", &guess2);
	int num3 = (rand()%1000);
	printf("<魔術師> 請輸入第三個數字\n");
	int guess3;
	scanf("%d", &guess3);

	if(num1 == guess1 && num2 == guess2 && num3 == guess3){
		printf("<魔術師> 你贏了，這是秘寶地點\n");
		// 執行檔中獲勝這行就會被印出來	
	}
	else{
		printf("<魔術師> 看來你要更多的...運氣？\n");	
	}
}
