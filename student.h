//student.h


#ifndef STUDENT_H
#define STUDENT_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Student
{
    char id[20];
    char name[50];
    char dob[20];

    float matric;
    float inter;
    float graduation;

    char contact[20];
    char email[50];

    struct Student *next;

} Student;


/* Function declarations */

Student *add_record(Student *head);

void print_record(Student *head);

void save_record(Student *head);

Student *load_record(void);

Student *delete_record(Student *head);

Student *edit_record(Student *head);

void find_record(Student *head);

void reverse_record(Student *head);


#endif

