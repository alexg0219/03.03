#include <iostream>
#include "STUDENT.h"
#include "StudentFunction.h"

using namespace std;

int main()
{
    string fEnterName;
    string sEnterName;
    string patronymicEnter;
    int groupEnter;
    int arr[5];

    STUDENT studentArray[10];

    for (int i = 0; i < 10; i++)
    {
        cout << "Data of " << i + 1 << " student" << endl;
        cout << "First name is ";
        cin >> fEnterName;

        cout << "Second name is ";
        cin >> sEnterName;

        cout << "Patronymic is ";
        cin >> patronymicEnter;

        cout << "Number group is ";
        cin >> groupEnter;

        for (int j = 0; j < 5; j++)
        {
            cout << j + 1 << " Marks is ";
            cin >> arr[j];
        }

        STUDENT studentData(fEnterName, sEnterName, patronymicEnter, groupEnter, arr);
        studentArray[i] = studentData;
    }

    HoareSortGroup(studentArray, 0, 9);
    StudensMoreFour(studentArray);
}