#include<stdio.h>
#include<conio.h>



void insertion_sort(int array[], int length);

int main()
{
    int array[]={9,8,7,6,5,4,3,2,1};
    insertion_sort(array, 9);
    for(int i=0;i<9;i++)
    {
        printf("Array[%d]:%d",i,array[i]);
        printf("\n");
    }

}

void insertion_sort(int array[], int length)
 {
     for(int i=1; i<length; i++)
     {
         int key = array[i];
         int j = i-1;

         while(j >= 0 && array[j]>key)
         {
             array[j+1]=array[j];
             j = j-1;
         }
         array[j+1]=key;
     }
 }
