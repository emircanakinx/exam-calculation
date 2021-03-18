#include<stdio.h>
#include<stdlib.h>



int main()
{
     system("COLOR c");
    int max,min,total,grade,state;
    float average;
    printf("---Student Information System---\n");
    printf("Please enter 1. grade : ");
    scanf("%d", &grade);
    total=grade;
    max=grade;
    min=grade;
    int i;
    for(int i=0;i<10;i++)
    {
        printf("Please enter %d.grade : " ,i+2);
        scanf("%d",&grade);
        total+=grade;
        if(grade>max)
            max=grade;
        if(grade<min)
            min=grade;
    }
    average=(float)total/11;
    printf("What do you want to see ?\n");
    printf("Total Grade ==> 1\n");
    printf("Max-Min Grade ==2>\n");
    printf("Average Grade==>3\n");
    printf("All of them ==>4\n");
    scanf("%d",&state);
    switch(state)
    {
        case 1:
                printf("Total Grade : %d\n",total);
                break;
        case 2:
                    printf("Max Grade : %d\n Min Grade : %d\n",max,min);
                    break;
        case 3:
                    printf("Average Grade : %.2f\n", average);
                     break;
        case 4:
                    printf("Total Grade : %d\n",total);
                    printf("Max Grade : %d\n Min Grade : %d\n",max,min);
                    printf("Average Grade : %.2f\n", average);
                    break;
        default:
                printf("Your entry is wrong.Good Bye!!\n");
                break;
    }
    system("pause");
}
