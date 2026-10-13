//print_record.c


#include "student.h"

void print_record(Student *head)
{
    Student *temp;

    if(head == NULL)
    {
        printf("Database is empty\n");
        return;
    }

    temp = head;

    printf("\n");
    printf("---------------------------------------------------------------------------------------------\n");
    printf("%-12s %-20s %-12s %-10s %-10s %-10s %-15s %-25s\n",
           "Student ID",
           "Name",
           "DOB",
           "Matric",
           "Inter",
           "Graduation",
           "Contact",
           "Email");
    printf("---------------------------------------------------------------------------------------------\n");

    while(temp != NULL)
    {
        printf("%-12s %-20s %-12s %-10.2f %-10.2f %-10.2f %-15s %-25s\n",
               temp->id,
               temp->name,
               temp->dob,
               temp->matric,
               temp->inter,
               temp->graduation,
               temp->contact,
               temp->email);

        temp = temp->next;
    }

    printf("---------------------------------------------------------------------------------------------\n");
}
