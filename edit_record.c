//edit_record.c


#include "student.h"

Student *edit_record(Student *head)
{
    Student *temp;
    char search_id[20];
    int choice;

    if(head == NULL)
    {
        printf("Database is empty\n");
        return head;
    }

    printf("Enter Student ID to edit: ");
    scanf("%19s", search_id);

    temp = head;

    /* Search student */
    while(temp != NULL)
    {
        if(strcmp(temp->id, search_id) == 0)
        {
            break;
        }

        temp = temp->next;
    }

    /* Student not found */
    if(temp == NULL)
    {
        printf("Student ID not found\n");
        return head;
    }

    printf("\nStudent found: %s\n", temp->name);

    printf("\n");
    printf("1) For name edit\n");
    printf("2) For DOB\n");
    printf("3) For percentage\n");
    printf("4) For contact\n");
    printf("6) For email id\n");

    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch(choice)
    {
        case 1:
            printf("Enter new name: ");
            scanf(" %49[^\n]", temp->name);
            printf("Name updated successfully\n");
            break;

        case 2:
            printf("Enter new DOB: ");
            scanf("%19s", temp->dob);
            printf("DOB updated successfully\n");
            break;

        case 3:
            printf("Enter new Matriculation Percentage: ");
            scanf("%f", &temp->matric);

            printf("Enter new Inter/Diploma Percentage: ");
            scanf("%f", &temp->inter);

            printf("Enter new Graduation Percentage: ");
            scanf("%f", &temp->graduation);

            printf("Percentage updated successfully\n");
            break;

        case 4:
            printf("Enter new Contact Number: ");
            scanf("%19s", temp->contact);
            printf("Contact updated successfully\n");
            break;

        case 6:
            printf("Enter new Email ID: ");
            scanf("%49s", temp->email);
            printf("Email updated successfully\n");
            break;

        default:
            printf("Invalid edit choice\n");
    }

    return head;
}