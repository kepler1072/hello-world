#include<stdio.h>
int main(){
	int i=0,a[5]={0,0,0,0,0},t=0,m=0,j=0;

for(i=0;i<=4;i++){
    scanf("%d\t",&a[i]);} 	

for(j=0;j<4;j++){
	m=0;i=0;
	for(i=0;i<4-j;i++){
	if(a[i]<a[m]){
		m=i;}
}
	if(a[i]<a[m]){  //我居然愣是在这两行代码上
		m=i;}       //推算了半个小时......
	t=a[i];
	a[i]=a[m];
	a[m]=t;
	printf("%d%d%d%d%d   %d\n",a[0],a[1],a[2],a[3],a[4],m);}

for(i=0;i<=4;i++){
	printf("%d\t",a[i]);} 

return 0;
}