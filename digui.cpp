#include <stdio.h>

int f( int n, int a, int k);

 
int main(void)
{int n,a,k,age;

printf("������n��a��k������������n���ڵ��ڶ���kС�ڵ���100\n"); 
printf("n=");
scanf("%d",&n);
printf("\na=");
scanf("%d",&a);
printf("\nk=");
scanf("%d",&k);
if(n>=2&&a>0&&k<=100)
    printf("%d",f(n,a,k));
    else{
	printf("Wrong number");
	}


return 0;
}


int f( int n, int a, int k)
{
	if ( n==1){
	    return a;
	}else {
		
		return f(n-1,a+k,k);
		
	}
}
