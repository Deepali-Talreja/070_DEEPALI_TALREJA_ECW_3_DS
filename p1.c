#include <stdio.h>
int main()
{
    int arr[20],size,i,choice,num,index;
    printf("ENTER THE SIZE OF ARRAY ");
    scanf("%d",&size);
    printf("ENTER ELEMENTS OF ARRAY ");
    for(i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("ELEMENTS IN ARRAY ARE : ");
    for(i=0;i<size;i++)
    {
        printf("%d\n",arr[i]);
    }
    printf("ENTER 1 TO FIND AN ELEMENT\nENTER 2 TO INSERT ELEMENT AT SPECIFIED INDEX\nENTER 3 TO DELETE ELEMENT FROM SPECIFIED INDEX\nENTER 4 TO DELETE PARTICULAR ELEMENT IF IT EXISTS\n");
    scanf("%d",&choice);
    switch(choice){
        case 1 : {
            printf("ENTER ELEMENT TO SEARCH : ");
        scanf("%d",&num);
        for(i=0;i<size;i++){
            if(arr[i]==num)
            {
                printf("ELEMENT FOUND AT INDEX %d \n",i);
            }
        }
        break;

        }
        case 2 :{
            printf("ENTER THE INDEX AT WHICH NUMBER IS TO BE INSERTED ");
            scanf("%d",&index);
            printf("ENTER THE NUMBER ");
            scanf("%d",&num);
            if(index<0 || index > size){
                printf("INVALID INDEX ");
            }else{
                for(i=size-1;i>=index;i--)
            {
                arr[i+1]=arr[i];
            }
            arr[index]=num;
            size++;
            printf("THE UPDATED ARRAY IS : ");
            for(i=0;i<size;i++)
            {
                printf("%d\t",arr[i]);
            }
            }
            break;
         }
         case 3 : {
            printf("ENTER INDEX FROM WHICH ELEMENT IS TO BE DELETED ");
            scanf("%d",&index);
            for(i=index;i<size-1;i++)
            {
                arr[i]=arr[i+1];
            }
            size--;
            printf("THE UPDATED ARRAY IS : ");
            for(i=0;i<size;i++){
                printf("%d\t",arr[i]);
            }
            break;
         }
         case 4 : {
            printf("ENTER ELEMENT TO BE DELETED : ");
            scanf("%d",&num);
            for(i=0;i<size;i++){
                if(arr[i]==num){
                    index=i;
                }
                break;
          }
          for(i=index;i<size-1;i++){
            arr[i]=arr[i+1];
          }
            size--;
            printf("THE UPDATED ARRAY IS : ");
            for(i=0;i<size;i++)
            {
                printf("%d\t",arr[i]);
            }
            break;

        }
        default : printf("INVALID CHOICE ");
    }
}
