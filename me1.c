

/*OBJECTIVE   :C program for merging sort
  ID     :18BBTCS140
  NAME          :V.yamini Swetha
  FUNCTIONS USED:main()
  OUTPUT :enter number of elements:9
          enter array elements :0 88 7 66 5 43 3 2 1
          Sorted array is         :0 1 2 3 5 7 43 66 88
  DATE :
*/
#include<stdio.h>
void mergesort(int a[],int i,int j);
void merge(int a[],int i1,int j1,int i2,int j2);
int main()
{
int a[30],n,i;
printf("enter number of elements:");
scanf("%d",&n);
printf("enter array elements:");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
mergesort(a,0,n-1);
printf("\nSorted array is:");
for(i=0;i<n;i++)
printf("%d",a[i]);
return 0;
}
void mergesort(int a[],int i,int j)
{
int mid;
if(i<j)
{
mid=(i+j)/2;
mergesort(a,i,mid); //left recursion
mergesort(a,mid+1,j);   //right recursion
merge(a,i,mid,mid+1,j); //merging of two sorted sub-arrays
}
}
void merge(int a[],int i1,int j1,int i2,int j2)
{
int temp[50]; //array used for merging
int i,j,k;
i=i1; //beginning of the first list
j=i2; //beginning of the second list
k=0;
while(i<=j1&&j<=j2) //while elements in both lists
{
if(a[i]<a[j])
temp[k++]=a[i++];
else
temp[k++]=a[j++];
}
while(i<=j1)
temp[k++]=a[i++];
while(j<=j2)
temp[k++]=a[j++];
for(i=i1,j=0;i<=j2;i++,j++) //transfer elements from temo[] back to a[]
a[i]=temp[j];
}


	

