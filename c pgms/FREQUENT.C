#include<stdio.h>
void main()
{       int n,i,j,a[10],b[10]={0};
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	for(i=0;i<n;i++)
		for(j=0;j<n;j++)
			if(a[i]==a[j])
			    b[i]++;
			    j=0;
	for(i=1;i<n;i++)
		if(b[i]>b[j])
			j=i;
		printf("ele=%d rep=%d",a[j],b[j]);
}
