//add_record.c


#include "student.h"

Student *add_record(Student *head)
{
    Student *newNode;
    Student *temp;

    /* Allocate memory for new node */
    newNode = malloc(sizeof(Student));

    if(newNode == NULL)
    {
        printf("Memory allocation failed\n");
        return head;
    }

    /* Read Student ID */
    printf("Enter Student ID: ");
    scanf("%19s", newNode->id);

    /* Check duplicate Student ID */
    temp = head;

    while(temp != NULL)
    {
        if(strcmp(temp->id, newNode->id) == 0)
        {
            printf("Student ID already exists\n");
            free(newNode);
            return head;
        }

        temp = temp->next;
    }

    /* Read student details */
    printf("Enter Student Name: ");
    scanf(" %49[^\n]", newNode->name);

    printf("Enter DOB: ");
    scanf("%19s", newNode->dob);

    printf("Enter Matriculation Percentage: ");
    scanf("%f", &newNode->matric);

    printf("Enter Inter/Diploma Percentage: ");
    scanf("%f", &newNode->inter);

    printf("Enter Graduation Percentage: ");
    scanf("%f", &newNode->graduation);

    printf("Enter Contact Number: ");
    scanf("%19s", newNode->contact);

    printf("Enter Email ID: ");
    scanf("%49s", newNode->email);

    /* New node will be the last node */
    newNode->next = NULL;

    /* If list is empty */
    if(head == NULL)
    {
        head = newNode;
    }
    else
    {
        /* Move to the last node */
        temp = head;

        while(temp->next != NULL)
        {
            temp = temp->next;
        }

        /* Connect last node to new node */
        temp->next = newNode;
    }

    printf("Student record added successfully\n");

    return head;
}