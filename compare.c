#include<stdio.h>
//使用函数封装的方法实现输入三个数，三个数能够自动从大到小进行排序
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
	printf("请输入三个数字：\n");
	scanf("%d%d%d",&a,&b,&c);
	p1=&a;
	p2=&b;
	p3=&c;
	exchange(p1,p2,p3);
	printf("从大到小的排列顺序是%d %d %d",a,b,c);
	return 0;
}

void exchange(int *a,int *b,int *c){
	swab(a,b);
	swab(a,c);
	swab(b,c);
}