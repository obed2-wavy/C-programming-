/*
Author:Obed Onyango
Reg Number:BCS-05-0075/2026
Deascription:program to calculate the fine for overdue library books
Date:24/09/2026
Version:1
*/


#include <stdio.h>
int main()
{
    int bookID;
    int dueDate;
    int returnDate;
    int daysOverdue;
    int fineRate;
    int fineAmount;

    printf("Enter BookID:  ");
    scanf("%d",&bookID);

    printf("Enter Due Date:  ");
    scanf("%d",&dueDate);

    printf("Enter Return Date:  ");
    scanf("%d",&returnDate);

    daysOverdue=returnDate-dueDate;

    if(daysOverdue<=0)
    {
        fineRate=0;
        fineAmount=0;
    }

    else if(daysOverdue<=7)
    {
        fineRate=20;
        fineAmount=daysOverdue*fineRate;
    }

    else if(daysOverdue<=14)
    {
        fineRate=50;
        fineAmount=daysOverdue*fineRate;
    }

    else
    {
        fineRate=100;
        fineAmount=daysOverdue*fineRate;
    }

    printf("\n Library Fine Details \n");
    printf("Book ID: %d\n",bookID);
    printf("Due Date: %d\n",dueDate);
    printf("Return Date: %d\n",returnDate);
    printf("Days Overdue: %d\n",daysOverdue);
    printf("Fine Rate: Ksh.%d per day\n",fineRate);
    printf("Fine Amount: Ksh.%d\n",fineAmount);

    return 0;
}
