#include<stdio.h>
#include<conio.h>
 int main()
{

    int a[1000],i,n,sum=0;
      clrscr() ;
    printf("Enter size of the array : ");
    scanf("%d",&n);
    printf("Enter elements in array : \n");
    for(i=0; i<n; i++)
    {
    	printf("a[%d]=",i);
        scanf("%d",&a[i]);
    }
    for(i=0; i<n; i++)
    {
    sum+=a[i];
    }
     printf("sum of array is : %d",sum);
     getch();
     return 0;
}