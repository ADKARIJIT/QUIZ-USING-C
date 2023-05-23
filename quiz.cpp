#include<stdio.h>
#include<string.h>
int main()
{
    int a, b, c, d, e,n,f,i,g,h,j,k,m,z;
    FILE *fp;
    char name[50];
    char ch;
    printf("PRESS 100 IF U ARE PLAYING FOR THE FIRST TIME ON YOUR SYSTEM\n");
    printf("ELSE PRESS 0\n");
    scanf("%d",&m);
    if(m==100)
    {
         fp = fopen("hello.txt", "w");
        
        fclose(fp);
        goto L1;
        
    }
    if(m==0)
    {
    printf("WELCOME TO THE LOVLIEST QUIZ PLATFORM");
    L1: printf("\n\n\nPress 1 to play the game\nPress 2 to see the rules\nPress 3 to see the recorded scores");
    scanf("%d", &a);
    if (a == 3)
    {
        fp = fopen("hello.txt", "r");
       while (!feof(fp))
        {
            ch = getc(fp);
            
            printf("%c", ch);
        } 
        fclose(fp);
        printf("\n Press 0 to go Back");
        scanf("%d",&b);


        {
            if(b==0)
                goto L1;


        }


    }
    else
    {
        if(a==2)
        {
            printf("THE RULES FOR THE GAME ARE:\n");
            printf("1.YOU WILL HAVE 10 QUESTIONS WITH FOUE OPTIONS.\n2.QUESTIONS WILL BE BASED ON NUMBER SERIES\n3.YOU CANNOT GO BACK TO THE PREVIOUS QUESTION\n4.NO NEGATIVE MARKING IS THERE\n5.ALL THE BEST.");
            printf("\n\nPress 0 to go Back");
            scanf("%d",&c);
            if(c==0)
            {
                goto L1;
            }


        }
        else
        {
            if(a==1)
            {
                printf("WELCOME TO THE QUIZ\n\n");
                printf("ENTER YOUR FIRST NAME\n");
                 scanf("%s",name);
                printf("%s",name);
                f=0;


                printf("**********QUESTION 1**********\n");
                printf("Look at this series: 7, 10, 8, 11, 9, 12, ... What number should come next?\n(1) 7\n(2) 10\n(3) 12\n(4) 13\n");
                printf("type your answer/option");
                scanf("%d",&e);
                if(e==10 || e==2)
                {
                    f=f+1;
                }
                printf("**********QUESTION 2**********\n");
                printf("Look at this series: 36, 34, 30, 28, 24, ... What number should come next?\n(1) 20\n(2) 22\n(3) 23\n(4) 26\n");
                printf("type your answer/option");
                scanf("%d",&g);
                if(g==22 || g==2)
                {
                    f=f+1;
                }
                printf("**********QUESTION 3**********\n");
                printf("Look at this series: 22, 21, 23, 22, 24, 23, ... What number should come next?\n(1) 22\n(2) 24\n(3) 25\n(4) 26\n");
                printf("type your answer/option");
                scanf("%d",&h);
                if(h==25 || h==3)
                {
                    f=f+1;
                }
                printf("**********QUESTION 4**********\n");
                printf("Look at this series: 53, 53, 40, 40, 27, 27, ... What number should come next?\n(1) 12\n(2) 14\n(3) 27\n(4) 53\n");
                printf("type your answer/option");
                scanf("%d",&j);
                if(j==14 || j==2)
                {
                    f=f+1;
                }
                printf("**********QUESTION 5**********\n");
                printf("Look at this series: 21, 9, 21, 11, 21, 13, 21, ... What number should come next?\n(1) 14\n(2) 15\n(3) 21\n(4) 53\n");
                printf("type your answer/option");
                scanf("%d",&k);
                if(k==15 || k==2)
                {
                    f=f+1;
                }
                f=f*20;
                 fp=fopen("hello.txt","a");
                fprintf(fp,"%s scored %d out of 100\n",name,f);
                fclose(fp);
                printf("******THANK YOU******\nYOU SUCCESSFULLY COMPLETED THE TEST\n PRESS 0 TO GO BACK AND CHECK YOUR SCORE");
                scanf("%d",&z);
                if(z==0)
                {
                    goto L1;
                }
            } 
                return 0;
            }
        }
    }
}


               
                


                


                
              
           
               
               
          


                




