#include<stdio.h>
#include<stdlib.h>

 void BubbleSort(int arr[],int n)
 {
     for(int i=0;i<n;i++)
     {
         for(int j=0;j<n-1-i;j++)
         {
             if(arr[j]>arr[j+1])
             {
                 int temp = arr[j];
                 arr[j] = arr[j+1];
                 arr[j+1] = temp;
             }
         }
     }
 }

 void printArr(int arr[], int n)
 {
     for(int i=0;i<n;i++)
     {
         printf("%d ",arr[i]);
     }
 }

 int main()
 {
     //int n;
     //printf("Enter the size: ");
     //scanf("%d",&n);
     int count = 1;
     int d=0;
     int arr[]={1,4,3,5, 6};
     BubbleSort(arr,5);
     

 
     for(int i=0;i<5;i++)
     {
         if(arr[i+1]==arr[i]+1)
         {
             count++;
         }
         else{
             d=count;
             count=1;
             continue;
         }
     }
     if(d>count)
         printf("\nLongest substring is of length %d\n",d);
     else
         printf("\nLongest substring is of length %d",count);
     
 }