#include<stdio.h>
int zheng(int a)//判断输入的数是否大于0，并将负数转为正数 
{
	int ret;
	if(a>0){
		ret=a;
	}else{
	ret=-a;
	}
	return ret;
 } 
 int compare(int b,int c)
 {
 	int ret1;
 	if(b>c){
 		ret1=b;
	 }else{
	 	ret1=c;
	 }
	 return ret1;
  } 
int main(void)
{
	int m,f,b,ret;
	scanf("%d",&m);
	for(;m>0;m-=2){
	scanf("%d",&f);
	f=zheng(f);

	scanf("%d",&b);
	b=zheng(b);
	ret=compare(f,b);
 
	}	
	printf("%d",ret);
	return 0;
	

 } 
 
 
 
 
 
 
 
 
 
 
