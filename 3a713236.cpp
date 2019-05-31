#include<stdio.h>
#include<stdlib.h>

struct Phone{
	
	char *phone_brand;
	char *phone_model;
	char *phone_yearofmanufacture;
	int   phone_price;
	char *use_name;
	char *use_cellphone;
	
}phone[2]; 
int main(void){
	int i=0;
	struct Phone phone[5]={"iphone","6s","2015/3/20",24000,"a","0919758327",
	                     "iphone","7","2019/5/3",15900,"b","0919732759",
						 "iphone","8","2017/2/24",21500,"c","0915749632",
						 "iphone","8 plus","2019/3/8",22500,"d","0905397465",
						 "iphone","xr","2019/7/12",18900,"e","0978159749"};
	for(i=0;i<5;i++){
		printf("%s的資料----------\n",phone[i].use_name);
		printf("手機品牌:");
		puts(phone[i].phone_brand);
		printf("手機型號:");
		puts(phone[i].phone_model);
		printf("手機出廠日期:");
		puts(phone[i].phone_yearofmanufacture);
		printf("手機價格:");
		printf("%d\n",phone[i].phone_price);
		printf("使用者:");
		puts(phone[i].use_name);
		printf("手機號碼:");
		puts(phone[i].use_cellphone);
		printf("----------------\n\n");
	}                    
	system("pause");
	return 0;
	
}
