#include<stdio.h>
#include<string.h>
#include <stdlib.h>
#include <time.h>
int main()
{
	int yr,mn,dy,ran,i,sum,mns;
	char gender;
	printf("Are you male of female (Enter m or f): ");
	scanf("%c",&gender);
	printf("enter your Birth year last two digits: ");
	scanf("%d",&yr);
	printf("enter your Birth month number : ");
	scanf("%d",&mn);
	printf("enter your Birth Date : ");
	scanf("%d",&dy);
	
	
	srand(time(0));
	ran = (rand() % 9999+1000);
	

	
	int arr[]={31,29,31,30,31,30,31,31,30,31,30,31};
	if(mn<=12 && mn>=1){
		if(gender == 'm'||gender == 'f'){
			if(dy<=31 && dy>=1){
				
				for(i=0;i<mn-2;i++)
				{
					mns = mns + arr[i];
				}
	
				if(gender == 'm'){
					sum = mns + dy;	
				}else{
					sum = mns + dy + 500;
				}
				
				printf("%d%d%dV",yr,sum,ran);
				
			}else{
				printf("Invalid Date");
			}
		}else{
			printf("Invalid Gender Entry");
		}		
	}else{
		printf("Invalid Month");
	}
}
