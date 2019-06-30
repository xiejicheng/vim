/*#include<stdio.h>
#define SIZE 5
in t main(void)
{ 
	in t counter,evens[SIZE];
	  
	for(counter=0;counter<SIZE;counter++)
	{
		evens[counter]=2*counter;
		prin tf("%d\n",evens[counter]);
	}       
	return 0;
}*/
/*#include<stdio.h>
in t main()
{ 
	in t i;
	do uble arr[10];
	double sum=0.0,aver;
	printf("Input:\n");
	
	for(i=0;i<10;i++)
	{
		scanf("%lf",&arr[i]);
		sum+=arr[i];
	}
	aver=sum/10;
	printf("Ouput:\n");
	printf("average=%.2f\n",aver);
	return 0;
}*/
/*#include<stdio.h>
int main()
{
	int t,i,j,n,a[100];
	printf("please input n:");
	scanf("%d",&n);
	printf("please input a[]:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n-1;i++)
	{
	
        for(j=i+1;j<n;j++)
            if(a[i]>a[j])
            {
                t=a[i];
    			a[i]=a[j];
                a[j]=t;
            }
        }
    printf("Output:\n");
	for(i=0;i<n;i++)
	{
		printf("%d",a[i]);
			}  
			printf("\n");      
	return 0; 
}*/
#include <stdio.h>
int main() {
        void update(int x[], int n, int m);
        int a[50];
        int n, m, i;
		printf("Please input  n m:[n>m]\n");
        scanf("%d %d", &n, &m);
		if((n<=m)||(n>50))
		
		{
			printf("Output:\nInput Error!\n");
		}
		else
		{
			printf("Please input %d numbers:\n",n);
        for (i = 0;i < n;i++)
                scanf("%d", &a[i]);
        printf(a, n, m);
		printf("Output:\nThe new sort numbers are:\n");
        for (i = 0;i < n;i++)
                printf("%d ", a[i]);
        printf("\n");
		}
        return 0;
}
void update(int x[], int n, int m) {
        int tmp[50];
        int i;
        for (i = 0;i < n;i++)
                tmp[i] = x[i];
        for (i = n - m - 1;i >= 0;i--)
                x[i + m] = x[i];
        for (i = 0;i < m;i++)
                x[i] = tmp[i + (n - m)];

void update(int x[], int n, int m) {
        int tmp[50];
        int i;
        for (i = 0;i < n;i++)
                tmp[i] = x[i];
        for (i = n - m - 1;i >= 0;i--)
         ;
}

hello hello hello 
printf("")
 hello world help printf , cool, mini hu ying !

linux
linux
linux
linux
linux


 hello world help prin tf , cool, mini hu ying !
                      
"https://github.com/1"
https://github.com/2
https://github.com/3
https://github.com/4
https://github.com/5
https://github.com/6
https://github.com/7



