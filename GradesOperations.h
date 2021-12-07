#ifndef EX4_GRADESOPERATIONS_H
#define EX4_GRADESOPERATIONS_H
#include <stdio.h>
#include "StudentList.h"
void newFile();
int NumberOfStudents(StudentList *List);
int NumberOfStudentsFirstEx(StudentList *List);
int NumberOfStudentsSecondEx(StudentList *List);
int NumberOfStudentsNoEx(StudentList * List);
double CheckIfPassInA(StudentList * List);
double CheckIfPassInB(StudentList * List);
int CalculateAverageInA(StudentList * List);

#endif //EX4_GRADESOPERATIONS_H
