#include<stdio.h>
#include<string.h>
int main(void)
{
 int n;//学生人数
 char name[11],maxn[11],minn[11];// 姓名 最高姓名 最低姓名
 char number[11],max[11],min[11];// 学号 最高学号 最低学号
 int score[1];//成绩
 int i;
 int maxs=0,mins=100;//最高分和最低分 
 scanf("%d",&n); //读入学生人数
 
 for(i=0;i<n;i++)
 {
  scanf("%s %s %d",name,number,&score[0]);
  if(maxs<score[0])
  {
   strcpy(maxn,name);
   strcpy(max,number);
   maxs=score[0];
  }//记录最高者姓名和学号
  if(mins>score[0])
  {
   strcpy(minn,name);
   strcpy(min,number);
   mins=score[0];
  }//记录最低者姓名和学号
 }
 
 printf("%s %s\n",maxn,max);
 printf("%s %s",minn,min);
}
