#include <stdio.h>
#include <malloc.h>
#include "StudentList.h"
StudentList* createList()
{
    int id;
    int grade1, grade2;
    FILE *fp;
    fp = fopen("C:\\Users\\Wisam\\CLionProjects\\ex4\\StudentsGrades.txt" , "r");

    StudentList *LIST = (StudentList *) malloc(sizeof(StudentList));
    LIST->head =NULL;

    while(!feof(fp)) {
        fscanf(fp,"%d %d %d" , &id , &grade1 , &grade2);
        Student *st;
        st = (Student *) malloc(sizeof(Student));
        st->id = id;
        st->grade1 = grade1;
        st->grade2 = grade2;
        addToList(LIST,st);

    }

    fclose(fp);
    return LIST;

}

void deleteList(StudentList* LIST)
{
    StudentNode *node=LIST->head;
    StudentNode *next=LIST->head;
    while(node!=NULL)
    {
        next=next->next;
        free(node->st);
        free(node);
        node = next;

    }
}
void printStudentNode(StudentNode* const NODE)
{
    if(NODE ==NULL)
        return;
    StudentNode * node = NODE;
    printf("%d\n", node->st->id);
    if(node->st->grade1!= -1){
        printf("%d\n" , node->st->grade1);
    }
    if(node->st->grade2!= -1){
        printf("%d\n", node->st->grade2);
    }

}

void addToList(StudentList* LIST, Student* st) {
    StudentNode *NODE = (StudentNode *) malloc(sizeof(StudentNode));
    NODE->st = st;
    NODE->next = NULL;
    if (LIST->head == NULL) {
        LIST->head = NODE;
    } else {
        StudentNode *LastSt = LIST->head;
        while (LastSt->next!=NULL){
            LastSt = LastSt->next;
        }
        LastSt->next = NODE;
    }
}


void printStudentList(StudentList* const LIST)
{
    StudentNode *node = LIST->head;
    while(node!=NULL)
    {
        printStudentNode(node);
        node=node->next;
    }
}