#include<stdio.h>
#include<string.h>
int main(void)
{
 int n;//ѧ������
 char name[11],maxn[11],minn[11];// ���� ������� �������
 char number[11],max[11],min[11];// ѧ�� ���ѧ�� ���ѧ��
 int score[1];//�ɼ�
 int i;
 int maxs=0,mins=100;//��߷ֺ���ͷ� 
 scanf("%d",&n); //����ѧ������
 
 for(i=0;i<n;i++)
 {
  scanf("%s %s %d",name,number,&score[0]);
  if(maxs<score[0])
  {
   strcpy(maxn,name);
   strcpy(max,number);
   maxs=score[0];
  }//��¼�����������ѧ��
  if(mins>score[0])
  {
   strcpy(minn,name);
   strcpy(min,number);
   mins=score[0];
  }//��¼�����������ѧ��
 }
 
 printf("%s %s\n",maxn,max);
 printf("%s %s",minn,min);
}
