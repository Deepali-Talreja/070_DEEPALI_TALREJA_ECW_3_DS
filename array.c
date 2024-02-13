#include<stdio.h>
int main()
{
    int arr[10],i;
    printf("ENTER THE ELEMENTS OF ARRAY\n\n");
    for(i=0;i<10;i++)
    {
        printf("ENTER ELEMENT %d\n",i+1);
        scanf("%d",&arr[i]);
    }
    for(i=0;i<10;i++)
    {
        printf("ELEMENT %d IS %d\n",i+1,arr[i]);
    }
    int num;
    printf("ENTER THE ELEMENT TO FIND\n");
    scanf("%d",&num);
    for(i=0;i<10;i++)
    {
        if(arr[i]==num){
            printf("THE ELEMENT FOUND AT INDEX %d",i);
        }
    }
    return 0;
}