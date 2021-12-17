#include <stdio.h>
int compare_arrays(int input1[], int input2[], int size)
{
    int i = 0;
    for (i = 0; i < size; ++i)
    {
        if (input1[i] != input2[i])
            return 0;
    return 1;
}}
int main()
{
    int size, i;
    
    printf("please enter the size of array: \n");
    scanf("%d",&size);
    int input1[size], input2[size];
    printf("Please enter a list of %d integers:\n", size);
    for (i = 0; i < size; i++)
        scanf("%d", &input1[i]);
    printf("Please enter another list of %d integers:\n", size);
    for (i = 0; i < size; i++)
        scanf("%d", &input2[i]);
    if (compare_arrays(input1, input2, size) == 1)
        printf("Both lists are identical!\n");
    else printf("The lists are not identical...\n");
    return 0;
}