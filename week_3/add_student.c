#include <stdio.h>
#define ID_LENGTH 3
#define NAME_LENGTH 10

typedef struct Student_t
{
    char id[ID_LENGTH];
    char name[NAME_LENGTH];
    int grade;
    struct Student_t *next;
} Student;
Student *add_student(Student *root, Student *to_add)
{
    Student *curr_std, *prev_std = NULL;
    if (root == NULL)
        return to_add;
    if (to_add->grade > root->grade)
    {
        to_add->next = root;
        return to_add;
    }
    curr_std = root;
    while (curr_std != NULL && to_add->grade < curr_std->grade)
    {
        prev_std = curr_std;
        curr_std = curr_std->next;
    }
    prev_std->next = to_add;
    to_add->next = curr_std;
    return root;
}

Student *find_student(Student *root, char *id)
{
    Student *curr = root;
    while (curr != NULL && strcmp(curr->id, id) != 0)
    {
        curr = curr->next;
    }
    return curr;
}
Student *change_grade(Student *root, char *id, int new_grade)
{
    Student *std = find_student(root, id);
    std = create_student(std->name, id, new_grade);
    root = remove_student(root, id);
    return add_student(root, std);
}

int main()
{
}
