#include<stdio.h>
int main(){
	int l1,l2,i=0,c=0;
	char str1[50];
	char str2[50];
	printf("enter string1:");
	scanf("%s",str1);
	printf("enter string2:");
	scanf("%s",str2);
	while(str1[i]!='\0'){
		l1++;
		i++;
	}
	i=0;
		while(str2[i]!='\0'){
		l2++;
		i++;
	}
	printf("length of str1 is %d\n",l1);
	printf("length of str2 is %d\n",l2);
	if(l1==l2){
		for(i=0;i<l1;i++){
			if(str1[i]==str2[i]){
				c++;
			}
			
		}
		if(c==l1){
			printf("same\n");
		}else{
			printf("no same\n");
		}
	}else{
		printf("not same\n");
	}
	return 0;
}
