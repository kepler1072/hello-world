#include<stdio.h>
int main()
{
	printf("hello world");
	printf("hello world\n");//这一行是关于“\n”作用的验证
	printf("hello\t");//这两行是关于“\t”作用的验证
	printf("world\n");//
	printf("11 22 33\n");
	int a=100,b=30,c=0;//这一段验证整数变量是
		c=(a/b)*b;//     在运算过程中抹去小数
		printf("%d\n",c);//还是仅仅只是不在结果中显示小数
	char d='100%',e='a';//这一段确认char变量能表示及输出的范围以及
	e=e+31;//             当char变量值超出ASCII值范围后的情况
	printf("%c %c\n",d,e);//
		return 0;
}