#include<stdio.h>
//ʹ�ú�����װ�ķ���ʵ���������������������ܹ��Զ��Ӵ�С��������
void  compareMax(int *n1,int *n2){
	int temp;
	if(*n1<*n2){
		temp = *n1;
		*n1=*n2;
		*n2=temp;
	}
	}
	
void exchange(int *a,int *b,int *c);


int main(){
	int a;
	int b;
	int c;
	int *p1,*p2,*p3;
	printf("�������������֣�\n");
	scanf("%d%d%d",&a,&b,&c);
	p1=&a;
	p2=&b;
	p3=&c;
	exchange(p1,p2,p3);
	printf("�Ӵ�С������˳����%d %d %d",a,b,c);
	return 0;
}

void exchange(int *a,int *b,int *c){
	swab(a,b);
	swab(a,c);
	swab(b,c);
}