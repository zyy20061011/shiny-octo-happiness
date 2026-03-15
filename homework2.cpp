#include<stdio.h>
 int main(){
    int max(int x,int y,int z);
    int a,b,c,d;
	scanf("%d %d %d",&a,&b,&c);
	d=max(a,b,c);
	printf("max=%d\n",d);
	return 0;
}
	
	int max(int x,int y,int z){
	int h;
	if(x>=y&&x>=z)h=x;
	else if(y>=z)h=y; 
    else if(z>=y)h=z;
	return(h);	
	}	
