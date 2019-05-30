#include<stdio.h>
#include<stdlib.h>

int main(void){
	
	int i,j;//迴圈
	int temp;
	int input_num[5];
	printf("輸入5個數排大小");
	scanf(" %d %d %d %d %d", &input_num[0],&input_num[1],&input_num[2],&input_num[3],&input_num[4]);
	
	for(i=0;i<5;i++){
	for(j=i+1;j<5;j++){
	if(input_num[j]<input_num[i]){
	temp=input_num[j];
	input_num[j]=input_num[i];
	input_num[i]=temp;
	}
	}
	}
	printf("\n\n");
	printf("最小值為:%d\n",input_num[0]);
	system("pause");
	return 0;
	
}
