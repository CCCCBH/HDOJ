#include<iostream>
#include<stdio.h>
#include<algorithm>
#include<cstring>
using namespace std;

struct Student
{
    char name[10];
    int ac;
    int time;
};

bool cmp(Student student1, Student student2)
{
    return student1.ac > student2.ac;
}

int main(void)
{
    Student student[10000];
    int n, m, i, j;
    char score[10];
    cin >> n >> m;
    int num = 0;
    while (cin >> student[num].name)
    {
        student[num].ac = 0;
        student[num].time = 0;
        for (i = 0; i < n; i++)
        {
            cin >> score;
            int length = strlen(score);

            if (score[0] == '0' || score[0] == '-')
            {
                continue;
            }

            int in = 0;
            int sum = 0;
            for (j = 0; j < length; j++)
            {
                if (score[j] == '(')
                {
                    j++;
                    while (score[j] != ')')
                    {
                        in = in * 10 + score[j] - '0';
                        j++;
                    }
                }
                else
                {
                    sum = sum * 10 + score[j] - '0';
                }
            }
            student[num].time = student[num].time + sum + in * m;
            student[num].ac++;
        }
        num++;
    }

    sort(student, student + num, cmp);
    {
        for (i = 0; i < num; i++)
        {
            printf("%-10s %2d %4d\n", student[i].name, student[i].ac,
                    student[i].time);
        }
    }
}

