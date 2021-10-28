#include<stdio.h>
int main(){
	int i=0,k=0,a[5]={0,0,0,0,0},t=0;

while(i<=4){
scanf("%d\t",&a[i]);
i=i+1;}

i=0;
while(k<=4)
{while(i<=(4-k))
{if(a[i+1]>a[i])
{t=a[i+1];
a[i+1]=a[i];
a[i]=t;
}
printf("%d %d %d %d %d %d\n ",a[0],a[1],a[2],a[3],a[4],k);
i=i+1;
}
k=k+1;
i=0;
}

i=0;
while(i<=4){
printf("%d\t",a[i]);
i=i+1;}
return 0;
}
