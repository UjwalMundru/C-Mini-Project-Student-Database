//reverse_record.c

#include "student.h"

static void print_reverse(Student *head)
{
    if(head == NULL)
    {
        return;
    }

    print_reverse(head->next);

    printf("%-12s %-20s %-12s %-10.2f %-10.2f %-10.2f %-15s %-25s\n",
           head->id,
           head->name,
           head->dob,
           head->matric,
           head->inter,
           head->graduation,
           head->contact,
           head->email);
}


void reverse_record(Student *head)
{
    if(head == NULL)
    {
        printf("Database is empty\n");
        return;
    }

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

    print_reverse(head);

    printf("---------------------------------------------------------------------------------------------\n");
}