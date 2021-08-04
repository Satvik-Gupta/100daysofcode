#include<stdio.h>
#define TB 100
void allocate();
void deallocate();
void display();
int BFull();
struct Indexed
{
    char n[30];
    int len;
    int indexblock;
    int *IB[TB];
}F[30];
int Table[TB+1],pos=0,r,i,j,ch,B=0,indexblock,k=0;
char fn[30];
int main()
{
     printf("\n Indexed File Allocation \n\n");
     do{
     printf("\n\n1.Allocate\n2.Deallocate\n3.Display\n4.Exit");
     printf("\n\nEnter Your choice : ");
     scanf("%d",&ch);


     switch(ch)
     {
                case 1:
                    pos++;
                    allocate();
                    break;

                case 2:
                    k--;
                    deallocate();
                    break;

                case 3:
                    display();
                    break;

                case 4:
                    return 0;

                default:
                    printf("\nInvalid Choice ");
        }
     }while(ch!=4);
    return 0;
}
void allocate()
{
   printf("\nEnter File Name : ");
   scanf("%s",&(F[pos].n));
   printf("\nEnter File Length : ");
   scanf("%d",&(F[pos].len));
   if(BFull())
   {
        pos--;
       printf("\n\nNo Enough Free Space Available \n");
       return;
   }
    F[pos].indexblock=rand()%TB+1;
    Table[F[pos].indexblock]=1;
   for(i=1;i<=F[pos].len;i++)
   {
        while(1)
        {

            r=rand()%TB+1;
            if(Table[r]==0)
            {

                    F[pos].IB[i]=&Table[r];
                    Table[r]=r;
                    break;
            }
        }
    }
    printf("\n\tDirectory\n");
    printf("\nFileName\tIndexBlock\n");
    for(i=1;i<=pos;i++)
    {
        printf("\n%s\t\t%d",F[i].n,F[i].indexblock);
        printf("\n");
    }

}
void deallocate()
{
   printf("\nEnter The File Name : ");
   scanf("%s",&fn);
   for(i=1;i<=pos;i++)
   {
            if(strcmp(F[i].n,fn)==0)
            {
                for(j=1;j<=F[pos].len;j++)
                   *F[pos].IB[j]=0;
                Table[F[pos].indexblock]=0;
                strcpy(F[i].n,"NULL");
                F[i].indexblock=-1;
                F[i].len=0;
                printf("\nFile (%s) Deleted Successfully \n",fn);
                break;
            }
            else
                printf("\n Deletion Unsuccessful\n");
    }
    printf("\n\tDirectory\n");
    printf("\nFileName\tIndexBlock\n");
    for(i=1;i<=pos;i++)
    {
        printf("\n%s\t\t%d",F[i].n,F[pos].indexblock);
        printf("\n");
    }
}
void display()
{
    printf("\nEnter The File Name : ");
    scanf("%s",fn);
    printf("\nBlocks Allocated Are : \n");
    for(i=1;i<=pos;i++)
    {
        if(strcmp(F[i].n,fn)==0)
        {   printf("\n\tFileName:- %s\n",fn);
            printf("\n\t IndexBlock\n");
            printf("\n\t     %d\n",F[i].indexblock);
            printf("\t------------");
            for(j=1;j<=F[i].len;j++)
            {
                printf("\n\t|    %d\t   |\n",*F[i].IB[j]);
            }
            printf("\t------------");

            break;
        }
    }
    if(i==pos+1)
    {
        printf("\n\nNo File Found\n");
    }
}
int BFull()
{
    for(i=1,B=0;i<=pos;i++)
        B=B+F[i].len;
    if(B>TB-pos-k)
        return 1;
    else
        return 0;
}
