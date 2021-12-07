#include "GradesOperations.h"


void newFile()
{
    //fp is a pointer to the first file
    // sg is a pointer to the second file
    FILE * fp ,*sg;
    sg = fopen("C:\\Users\\wisam\\CLionProjects\\ex4\\StudentsGrades.txt" , "r");
    fclose(sg);
    fp = fopen("C:\\Users\\wisam\\CLionProjects\\ex4\\Report.txt" ,"w+");
    int id , grade1 , grade2;

    fclose(fp);

}

int NumberOfStudents(StudentList* List)
{
    int counter = 0;
    StudentNode  * template = List->head;
    if(List->head == NULL)
    {
        return 0;
    }
    while(template!=NULL)
    {
        counter ++;
        template = template->next;
    }
    return counter;
}
int NumberOfStudentsFirstEx(StudentList *List)
{

    int counter = 0;
    StudentNode  * template = List->head;
    if(List->head == NULL)
    {
        return 0;
    }
        while (template!=NULL)
        {
    if(template->st->grade1 == -1)
    {
        counter++;
    }
        template = template->next;

         }
    return counter;
}
int NumberOfStudentsSecondEx(StudentList *List)
{
    int counter = 0;
    StudentNode  * template = List->head;
    if(List->head == NULL)
    {
        return 0;
    }
    while (template!=NULL) {
        if ( template->st->grade2 == -1)
        {
            counter++;
        }
            template = template->next;
    }
    return counter;
    }
int NumberOfStudentsNoEx(StudentList * List)
{
    int counter =0;
    StudentNode  * template = List->head;
    if(template==NULL)
    {
        return 0;
    }
    while(template!=NULL) {
        if (template->st->grade1 == -1 && template->st->grade2 == -1) {
            counter++;
        }
        template = template->next;
    }
    return counter;
}
double CheckIfPassInA(StudentList * List)
{
    double counter =0;
    StudentNode  * template = List->head;
    if(template==NULL) {
        return 0;
    }
    while(template!=NULL)
    {

        if (template->st->grade1 < 60 ) {
            counter++;
        }
        template = template->next;
    }

    return (double)(counter/NumberOfStudents(List))*100;
}
double CheckIfPassInB(StudentList * List)
{
    int counter =0;
    StudentNode  * template = List->head;
    if(template==NULL) {
        return 0;
    }
    while(template!=NULL) {
        if (template->st->grade2 < 60) {
            counter++;
        }
        template = template->next;
    }
    return (counter/ NumberOfStudents(List))*100;
}
int CalculateAverageInA(StudentList * List)
{
    FILE *fp;
    fp = fopen("C:\\Users\\Wisam\\CLionProjects\\ex4\\StudentsGrades.txt" , "r");

    int counter =0;
    int temp=0;
    StudentNode  * template = List->head;
    if(template->st->grade1 != -1)
    {
        temp += template->st->grade1;
        counter++;
    }
        fclose(fp);
    return (counter);
}