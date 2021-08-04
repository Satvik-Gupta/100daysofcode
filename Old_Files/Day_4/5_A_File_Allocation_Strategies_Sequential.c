#include<stdio.h>
int arr[200];
void addNewBlock(int start, int len){
    int count = 0,k,j;
    if(start>199){
        printf("The file is not allocated \n");
        return;
    } 
    for(k=start;k<(start+len);k++)
        if(arr[k]==0)
            count++;
    if(len==count){
        for(j=start;j<(start+len);j++)
        if(arr[j]==0){
            arr[j]=1;
        }
        if(j!=(start+len-1))
            printf("The file is allocated to disk\n");
    }
    else
        printf("The file is not allocated \n");
}
void showDisk(){
	int i;
    printf("Your Disk:- \n");
    for( i=0; i<200; i++){
        printf("\t%d\t%d\t%d\t%d", arr[i], arr[i+1], arr[i+2], arr[i+3]);
        printf("\t%d\t%d\t%d\t%d\n", arr[i+4], arr[i+5], arr[i+6], arr[i+7]);
        i=i+7;
    }
    printf("\n\n");    
}
int main()
{
    int i, start, len, c, count = 0;
    printf("1. Add New File, 2. See Disk Allocation, 0. Exit )\n");
    printf("Your Choice: ");
    scanf("%d", &c);
    printf("\n");
    while(c){
        switch(c){
            case 1: printf("Enter starting block and length of files: ");
                    scanf("%d%d", &start,&len);
                    addNewBlock(start-1, len);
                    break;
            case 2: showDisk();
                    break;
            default:
                printf("Invalid Choice\n");
        }    
        printf("\n\nYour Choice: ");
        scanf("%d", &c);
    }
    return 0;
}
