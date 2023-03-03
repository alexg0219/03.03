#include <iostream>
#include "STUDENT.h"

using namespace std;

void StudensMoreFour(STUDENT* arr)
{
    int k = 0;
    for (int i = 0; i < 10; i++)
    {
        if (arr[i].AverageScore() > 4.2)
        {
            arr[i].PrintSecondName();
            cout << " " << arr[i].NumberGroup();
            cout << endl;
            k++;
        }

    }

    if (k == 0)
        cout << "nobody";
}

void SwapStudent(STUDENT& first, STUDENT& second)
{
    STUDENT temp = first;
    first = second;
    second = temp;
}

void HoareSortGroup(STUDENT* array, int left, int right)
{
    int l = left;
    int r = right;
    int mid = array[(l + r) / 2].NumberGroup();

    do
    {
        while (array[l].NumberGroup() < mid)
            ++l;

        while (array[r].NumberGroup() > mid)
            --r;

        if (l <= r)
        {
            SwapStudent(array[l], array[r]);
            ++l;
            --r;
        }
    } while (l < r);

    if (left < r)
        HoareSortGroup(array, left, r);

    if (left < r)
        HoareSortGroup(array, l, right);
}