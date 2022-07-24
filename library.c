#include<stdlib.h>
#include<stdio.h>
#include<string.h>

struct library
{
    char bookName[100];
    char publisher[100];
    float price;
};

int main()
{
    struct library l[100];
    char pb_nm[100],bk_nm[100];
    int i,j,count;
    i=j=count=0;

    printf("\n\n=====LIBRARY MANAGEMENT SYSTEM=====\n\n");
    while(j!=5)
    {
        printf("\n1. Add Book Information\n");
        printf("2. Display Books Available\n");
        printf("3. Display Highest Price Book\n");
        printf("4. Display Publisher List\n");
        printf("5. Exit\n");

        printf("\n\nEnter your choice:  ");
        scanf("%d",&j);

        switch(j)
        {
            case 1:
                printf("\nEnter Book Name:  ");
                scanf("%s",l[i].bookName);
                printf("Enter Publisher Name:  ");
                scanf("%s", l[i].publisher);
                printf("Enter The Price:  ");
                scanf("%f",&l[i].price);
                count++;
                break;

            case 2:
                printf("\nAll The Books Available\n");
                for(i=0;i<count;i++)
                {
                    printf("\n Book Name:  %s",l[i].bookName);
                    printf("\t Author Name:  %s",l[i].publisher);
                    printf("\t Price:  %f",l[i].price);
                }
                break;

            case 3:
                printf("\nHighest Price Book:  ");
                float temp=0;
                for(i=0;i<count;i++)
                {
                    if(temp < l[i].price)
                        temp = l[i].price;
                }
                printf("%f", temp);
                break;

            case 4:
                printf("\nList Of Publishers:  ");
                for(i=0;i<count;i++)
                {
                    printf("\n %s ",l[i].publisher);
                }
                break;

            case 5:
                exit(0);
        }
    }
    return 0;
}