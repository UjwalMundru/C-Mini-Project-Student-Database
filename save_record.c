//save_record.c


#include "student.h"

void save_record(Student *head)
{
    FILE *fp;
    Student *temp;

    fp = fopen("student.dat", "w");

    if(fp == NULL)
    {
        printf("Unable to open file\n");
        return;
    }

    temp = head;

    while(temp != NULL)
    {
        fprintf(fp, "%s\n", temp->id);
        fprintf(fp, "%s\n", temp->name);
        fprintf(fp, "%s\n", temp->dob);
        fprintf(fp, "%f\n", temp->matric);
        fprintf(fp, "%f\n", temp->inter);
        fprintf(fp, "%f\n", temp->graduation);
        fprintf(fp, "%s\n", temp->contact);
        fprintf(fp, "%s\n", temp->email);

        temp = temp->next;
    }

    fclose(fp);

    printf("Database saved successfully\n");
}


Student *load_record(void)
{
    FILE *fp;
    Student *head = NULL;
    Student *newNode;
    Student *temp;

    fp = fopen("student.dat", "r");

    if(fp == NULL)
    {
        return NULL;
    }

    while(1)
    {
        newNode = malloc(sizeof(Student));

        if(newNode == NULL)
        {
            printf("Memory allocation failed\n");
            fclose(fp);
            return head;
        }

        if(fscanf(fp, "%19s\n", newNode->id) != 1)
        {
            free(newNode);
            break;
        }

        if(fscanf(fp, "%49[^\n]\n", newNode->name) != 1)
        {
            free(newNode);
            break;
        }

        if(fscanf(fp, "%19s\n", newNode->dob) != 1)
        {
            free(newNode);
            break;
        }

        if(fscanf(fp, "%f\n", &newNode->matric) != 1)
        {
            free(newNode);
            break;
        }

        if(fscanf(fp, "%f\n", &newNode->inter) != 1)
        {
            free(newNode);
            break;
        }

        if(fscanf(fp, "%f\n", &newNode->graduation) != 1)
        {
            free(newNode);
            break;
        }

        if(fscanf(fp, "%19s\n", newNode->contact) != 1)
        {
            free(newNode);
            break;
        }

        if(fscanf(fp, "%49s\n", newNode->email) != 1)
        {
            free(newNode);
            break;
        }

        newNode->next = NULL;

        if(head == NULL)
        {
            head = newNode;
        }
        else
        {
            temp = head;

            while(temp->next != NULL)
            {
                temp = temp->next;
            }

            temp->next = newNode;
        }
    }

    fclose(fp);

    return head;
}