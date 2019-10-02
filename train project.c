#include<stdio.h>
int platform[2], train_count=0, rear=-1, front=0, max=3;
int i,train_num;

void allocation(int i);
int deallocation();

int main()
{
    int i,train_num;
    for(i=0;i<=3;i++)
    {
       //printf("Enter the Train number for Platform %d: ",i+1 );
        //scanf("%d",&train_num);
        allocation(i);
    }
    printf("\n");
    printf("\n\nTotal number of train at station : %d\n",train_count);

    for(i=front;i<=rear;i++)
    {
        printf("\nAt Platform %d, the no of %d train arraived.\n",i+1,platform[i]);
    }
    int d=deallocation();
    printf("\nThe left train is: %d\n ",d);

    printf("\nAfter left the trains at platform are: ");
    for(i=front;i<=rear;i++)
    {
        printf("%d ",platform[i]);
    }

    printf("\n\nNow Total train in the station are: %d\n",train_count);
}
void allocation(int i)
{
    if(rear==max-1)
    {
        printf("\nPlatform is Full. ");
    }
    else
    {
        printf("Enter the Train number for Platform %d: ",i+1 );
        scanf("%d",&train_num);
        rear++;
        platform[rear]=train_num;
        train_count ++;
    }
}

int deallocation()
{
     if(front==max||rear==-1)
    {
        printf("\nPlatform is empty");
    }
    else
    {
        train_num=platform[front];
        front++;
        train_count--;
        return train_num ;
    }
}



