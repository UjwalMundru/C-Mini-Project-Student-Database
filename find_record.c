//find_record.c


#include "student.h"

void find_record(Student *head)
{
    Student *temp;
    char search_id[20];

    if(head == NULL)
    {
        printf("Database is empty\n");
        return;
    }

    printf("Enter Student ID to search: ");
    scanf("%19s", search_id);

    temp = head;

    while(temp != NULL)
    {
        if(strcmp(temp->id, search_id) == 0)
        {
            printf("\nStudent Record Found\n");
            printf("----------------------------\n");
            printf("Student ID    : %s\n", temp->id);
            printf("Name          : %s\n", temp->name);
            printf("DOB           : %s\n", temp->dob);
            printf("Matriculation : %.2f\n", temp->matric);
            printf("Inter/Diploma : %.2f\n", temp->inter);
            printf("Graduation    : %.2f\n", temp->graduation);
            printf("Contact       : %s\n", temp->contact);
            printf("Email         : %s\n", temp->email);
            printf("----------------------------\n");

            return;
        }

        temp = temp->next;
    }

    printf("Student ID not found\n");
}
