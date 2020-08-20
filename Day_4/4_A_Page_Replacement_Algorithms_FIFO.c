#include<stdio.h>
int n,nf;
int in[100];
int p[50];
int hit=0;
int i,j,k;
int pgfaultcnt=0;
 
void getData()
{
    printf("Enter Length of Page Reference Sequence:\n");
    scanf("%d",&n);
    printf("Enter the Page Reference Sequence:\n");
    for(i=0; i<n; i++)
        scanf("%d",&in[i]);
    printf("Enter no of frames:\n");
    scanf("%d",&nf);
}
 
void initialize()
{
    pgfaultcnt=0;
    for(i=0; i<nf; i++)
        p[i]=9999;
}
 
int isHit(int data)
{
    hit=0;
    for(j=0; j<nf; j++)
    {
        if(p[j]==data)
        {
            hit=1;
            break;
        }
 
    }
    return hit;
}
 
int getHitIndex(int data)
{
    int hitind;
    for(k=0; k<nf; k++)
    {
        if(p[k]==data)
        {
            hitind=k;
            break;
        }
    }
    return hitind;
}
 
void dispPages()
{
    for (k=0; k<nf; k++)
    {
        if(p[k]!=9999)
            printf(" %d",p[k]);
    }
}
 
void dispPgFaultCnt()
{
    printf("\nTotal No of Page Faults : %d",pgfaultcnt);
    printf("\nTotal No of Page Hits : %d",n-pgfaultcnt);
    printf("\nMiss Ratio : %f",100*(float)pgfaultcnt/(float)n);
    printf("\nHit Ratio : %f",100*(float)(n-pgfaultcnt)/(float)n);
}
 
void fifo()
{
    initialize();
    for(i=0; i<n; i++)
    {
        printf("\nFor %d :",in[i]);
        if(isHit(in[i])==0)
        {
            for(k=0; k<nf-1; k++)
                p[k]=p[k+1];
            p[k]=in[i];
            pgfaultcnt++;
            dispPages();
        }
        else
            printf("No page fault");
    }
    dispPgFaultCnt();
}

int main()
{
	printf("Enter Data");
	getData();
	fifo();
}
