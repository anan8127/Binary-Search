#include<stdio.h>
int main()
{
 int arr[7]={12,65,43,87,34,23,80};
 printf("Enter a element to be found\n");
 scanf("%d\n",&ele);
 BSort(arr);
 display(arr);
 BinarySearch(arr,ele);
}
void BSort(int arr[])
{
 int t,i,j;
 for(i=0;i<6;i++)
 {
    for(j=0;j<6-i;j++)
    {
        if(arr[j]>arr[j+1])
        {
            t=arr[j];
            arr[j] = arr[j+1];
            arr[j+1]=t;
        }
    }
 }
}
int display(int arr[])
{
    int i;
    for(i=0;i<7;i++)
    {
        printf("%d\n",arr[i]);
    }
}
int BinarySearch(int arr[], int ele)
{
    int l=0,h=6,mid;
    while(l<=h)
    {
        mid=(l+h)/2;
        if(arr[mid]==ele)
        {
            int a=1;
            break;
        }
        else if(ele>arr[mid])
        {
            l=mid+1;
        }
        else if(ele<arr[mid])
        {
            h=mid-1;
        }
    }
    if(a==1)
    {
        printf("Element found at index%d\n",mid);
    }
    else
    {
        printf("Element not found\n");
    }
    return 0;
}

