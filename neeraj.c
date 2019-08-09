#include <stdio.h>
#include<math.h>

int main(void) {
	int x,p,sum=0;
	scanf("%d %d",&x,&p);
	while(x>0){
		sum=sum+x;
		x=floor((x*(100-p))/100);
		
		
	}
	printf("%d\n",sum);
	return 0;
}
