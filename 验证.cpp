#include<stdio.h>
int main()
{
	printf("hello world");
	printf("hello world\n");//��һ���ǹ��ڡ�\n�����õ���֤
	printf("hello\t");//�������ǹ��ڡ�\t�����õ���֤
	printf("world\n");//
	printf("11 22 33\n");
	int a=100,b=30,c=0;//��һ����֤����������
		c=(a/b)*b;//     �����������ĨȥС��
		printf("%d\n",c);//���ǽ���ֻ�ǲ��ڽ������ʾС��
	char d='100%',e='a';//��һ��ȷ��char�����ܱ�ʾ������ķ�Χ�Լ�
	e=e+31;//             ��char����ֵ����ASCIIֵ��Χ������
	printf("%c %c\n",d,e);//
		return 0;
}