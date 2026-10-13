//delete_record.c


#include "student.h"

Student *delete_record(Student *head)
{
    Student *temp;
    Student *prev;
    char delete_id[20];

    if(head == NULL)
    {
        printf("Database is empty\n");
        return head;
    }

    printf("Enter Student ID to delete: ");
    scanf("%19s", delete_id);

    temp = head;
    prev = NULL;

    /* Search for the student */
    while(temp != NULL)
    {
        if(strcmp(temp->id, delete_id) == 0)
        {
            break;
        }

        prev = temp;
        temp = temp->next;
    }

    /* Student not found */
    if(temp == NULL)
    {
        printf("Student ID not found\n");
        return head;
    }

    /* Deleting the first node */
    if(prev == NULL)
    {
        head = temp->next;
    }
    else
    {
        /* Deleting middle or last node */
        prev->next = temp->next;
    }

    free(temp);

    printf("Student record deleted successfully\n");

    return head;
}
