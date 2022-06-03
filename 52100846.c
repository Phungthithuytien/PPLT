#define _GNU_SOURCE

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#define MAX 10000
struct Employee
{
    int EmployeeID;
    char FirstName[20];
    char LastName[20];
    char Gender[9];
    char DateOfBirth[20];
    int Department;
    char Country[20];
};

struct Progress
{
    int EmployeeID;
    char *ProjectID;
    double Progress;
};
struct Progress progress[MAX];

struct Employee employ[MAX];

void inputAPrj(char buf[], long i)
{
    char *tmp;
    tmp = strtok(buf, ",");
    employ[i].EmployeeID = atoi(tmp);

    tmp = strtok(NULL, ",");
    strcpy(employ[i].FirstName, tmp);

    tmp = strtok(NULL, ",");
    strcpy(employ[i].LastName, tmp);

    tmp = strtok(NULL, ",");
    strcpy(employ[i].Gender, tmp);

    tmp = strtok(NULL, ",");
    strcpy(employ[i].DateOfBirth, tmp);

    tmp = strtok(NULL, ",");
    employ[i].Department = atoi(tmp);

    tmp = strtok(NULL, ",");
    strcpy(employ[i].Country, tmp);
}

void inputAprgess(char buf[], long i)
{
    char *tmp;
    tmp = strtok(buf, ",");
    progress[i].EmployeeID = atoi(tmp);

    tmp = strtok(NULL, ",");
    progress[i].ProjectID = strdup(tmp);

    tmp = strtok(NULL, ",");
    progress[i].Progress = atof(tmp);
}

long setProject()
{
    FILE *in;
    char buf[255];
    in = fopen("Employee.csv", "r");
    long i = 0;
    while (fgets(buf, 255, in))
    {
        inputAPrj(buf, i);
        i++;
    }
    fclose(in);
    return i;
}

long setProgress()
{
    FILE *in;
    char buf[255];
    in = fopen("Progress.csv", "r");
    long j = 0;
    while (fgets(buf, 255, in))
    {
        inputAprgess(buf, j);
        j++;
    }
    fclose(in);
    return j;
}

void WrongSyntax()
{
    FILE *f;
    f = fopen("check.txt", "wt");
    fprintf(f, "wrong syntax");
    fclose(f);
}

void lowCase(char nhap[])
{
    int i;
    for (i = 0; i < strlen(nhap); i++)
    {
        if ('A' <= nhap[i] && nhap[i] <= 'Z')
            nhap[i] = nhap[i] + ((int)('a') - (int)('A'));
    }
}

void CountDepartment(int Thamso, long n)
{
    FILE *in;
    in = fopen("result.csv", "wt");
    long i, dem = 0;
    for (i = 1; i < n; i++)
    {
        if (employ[i].Department == Thamso)
        {
            dem++;
        }
    }
    fprintf(in, "%ld", dem);
    fclose(in);
}

void List(char *Thamso, long n)
{
    FILE *in;
    in = fopen("result.csv", "wt");
    long i;
    for (i = 1; i < n; i++)
    {
        employ[i].Country[strlen(employ[i].Country) - 1] = '\0';
        if (employ[i].Country[strlen(employ[i].Country) - 1] < 32)
        {
            employ[i].Country[strlen(employ[i].Country) - 1] = '\0';
        }
        if (strcmp(employ[i].Gender, Thamso) == 0)
        {
            fprintf(in, "%d,%s,%s,%s,%s,%d,%s\n", employ[i].EmployeeID, employ[i].FirstName, employ[i].LastName, employ[i].Gender, employ[i].DateOfBirth, employ[i].Department, employ[i].Country);
        }
    }
    fclose(in);
}

void Reportn(double Thamso, long m)
{
    FILE *in;
    in = fopen("result.csv", "wt");
    long i, j;
    int Kiemtra[MAX];
    for (i = 1; i < m; i++)
    {
        Kiemtra[i] = 0;
    }

    for (i = 1; i < m; i++)
    {
        if (progress[i].Progress == Thamso)
        {
            if (Kiemtra[i] == 0)
            {
                for (j = 0; j < m; j++)
                {
                    if (progress[i].EmployeeID == progress[j].EmployeeID)
                        Kiemtra[j] = -1;
                }

                fprintf(in, "%d\n", progress[i].EmployeeID);
            }
        }
    }
    fclose(in);
}

void Average(char *Thamso, long m)
{
    FILE *in;
    in = fopen("result.csv", "wt");
    long i, dem = 0;
    double s = 0;
    for (i = 1; i < m; i++)
    {
        if (strcmp(progress[i].ProjectID, Thamso) == 0)
        {
            dem++;
            s = s + progress[i].Progress;
        }
    }
    if (dem == 0)
    {
        fprintf(in, "0");
    }
    else
    {
        double average = s / dem;
        fprintf(in, "%0.3lf", average);
    }
    fclose(in);
}

void CountryEmployee(char *Thamso, long n)
{
    FILE *in;
    in = fopen("result.csv", "wt");
    long i;
    for (i = 1; i < n; i++)
    {
        employ[i].Country[strlen(employ[i].Country) - 1] = '\0';
        if (employ[i].Country[strlen(employ[i].Country) - 1] < 32)
        {
            employ[i].Country[strlen(employ[i].Country) - 1] = '\0';
        }
        if (strcmp(employ[i].Country, Thamso) == 0)
        {
            fprintf(in, "%d,%s,%s,%s,%s,%d,%s\n", employ[i].EmployeeID, employ[i].FirstName, employ[i].LastName, employ[i].Gender, employ[i].DateOfBirth, employ[i].Department, employ[i].Country);
        }
    }
    fclose(in);
}

void SortTang(long n)
{
    FILE *in;
    in = fopen("result.csv", "wt");
    long i, j;
    struct Employee temp;
    char tmp1[20];
    char tmp2[20];
    char tmp3[20];
    char tmp4[20];

    for (i = 1; i < n; i++)
    {
        for (j = 1; j < n - 1; j++)
        {
            strcpy(tmp1, employ[j].LastName);
            strcpy(tmp2, employ[j + 1].LastName);
            strcpy(tmp3, employ[j].FirstName);
            strcpy(tmp4, employ[j + 1].FirstName);
            lowCase(tmp1);
            lowCase(tmp2);
            if (strcmp(tmp1, tmp2) < 0)
            {
                temp = employ[j];
                employ[j] = employ[j + 1];
                employ[j + 1] = temp;
            }
            else if (strcmp(tmp1, tmp2) == 0)
            {
                lowCase(tmp3);
                lowCase(tmp4);
                if (strcmp(tmp3, tmp4) < 0)
                {
                    temp = employ[j];
                    employ[j] = employ[j + 1];
                    employ[j + 1] = temp;
                }
            }
        }
    }
    for (i = n - 1; i > 0; i--)
    {
        employ[i].Country[strlen(employ[i].Country) - 1] = '\0';
        if (employ[i].Country[strlen(employ[i].Country) - 1] < 32)
        {
            employ[i].Country[strlen(employ[i].Country) - 1] = '\0';
        }
        fprintf(in, "%d,%s,%s,%s,%s,%d,%s\n", employ[i].EmployeeID, employ[i].FirstName, employ[i].LastName, employ[i].Gender, employ[i].DateOfBirth, employ[i].Department, employ[i].Country);
    }
    fclose(in);
}

void SortGiam(long n)
{
    FILE *in;
    in = fopen("result.csv", "wt");
    long i, j;
    struct Employee temp;
    char tmp1[20];
    char tmp2[20];
    char tmp3[20];
    char tmp4[20];

    for (i = 1; i < n; i++)
    {
        for (j = 1; j < n - 1; j++)
        {
            strcpy(tmp1, employ[j].LastName);
            strcpy(tmp2, employ[j + 1].LastName);
            strcpy(tmp3, employ[j].FirstName);
            strcpy(tmp4, employ[j + 1].FirstName);
            lowCase(tmp1);
            lowCase(tmp2);
            if (strcmp(tmp1, tmp2) < 0)
            {
                temp = employ[j];
                employ[j] = employ[j + 1];
                employ[j + 1] = temp;
            }
            else if (strcmp(tmp1, tmp2) == 0)
            {
                lowCase(tmp3);
                lowCase(tmp4);
                if (strcmp(tmp3, tmp4) > 0)
                {
                    temp = employ[j];
                    employ[j] = employ[j + 1];
                    employ[j + 1] = temp;
                }
            }
        }
    }
    for (i = 1; i < n; i++)
    {
        employ[i].Country[strlen(employ[i].Country) - 1] = '\0';
        if (employ[i].Country[strlen(employ[i].Country) - 1] < 32)
        {
            employ[i].Country[strlen(employ[i].Country) - 1] = '\0';
        }
        fprintf(in, "%d,%s,%s,%s,%s,%d,%s\n", employ[i].EmployeeID, employ[i].FirstName, employ[i].LastName, employ[i].Gender, employ[i].DateOfBirth, employ[i].Department, employ[i].Country);
    }
    fclose(in);
}

int main()
{
    long n = setProject();
    long m = setProgress();
    char nhap[1024];
    fgets(nhap, 1024, stdin);
    if (nhap[0] == ' ' || nhap[strlen(nhap) - 2] == ' ')
    {
        WrongSyntax();
        return 0;
    }
    int i;
    for (i = 0; i < strlen(nhap); i++)
    {
        if ('A' <= nhap[i] && nhap[i] <= 'Z')
            nhap[i] = nhap[i] + ((int)('a') - (int)('A'));
    }

    char key[10];
    char Thamso[20];
    char *tmp = malloc(50);

    int dem = 0;
    for (i = 0; i < strlen(nhap); i++)
    {
        if (nhap[i] == ' ')
        {
            dem++;
        }
    }
    if (dem != 1)
    {
        WrongSyntax();
        return 0;
    }

    tmp = strtok(nhap, " ");
    strcpy(key, tmp);
    tmp = strtok(NULL, " ");
    strcpy(Thamso, tmp);

    Thamso[strlen(Thamso) - 1] = '\0';

    char count[] = "count";
    char list[] = "list";
    char male[] = "male";
    char female[] = "female";
    char report[] = "report";
    char average[] = "average";
    char sort[] = "sort";
    char asc[] = "asc";
    char desc[] = "desc";
    char country[] = "country";

    if (strcmp(key, count) == 0)
    {
        CountDepartment(atoi(Thamso), n);
    }
    else if (strcmp(key, list) == 0)
    {
        if (strcmp(Thamso, male) == 0 || strcmp(Thamso, female) == 0)
        {
            Thamso[0] = toupper(Thamso[0]);
            List(Thamso, n);
        }
        else
            WrongSyntax();
    }
    else if (strcmp(key, report) == 0)
    {
        for (i = 0; i < strlen(Thamso); i++)
        {
            if (isalpha(Thamso[i]))
            {
                WrongSyntax();
                return 0;
            }
            if (Thamso[0] == '.' || (Thamso[strlen(Thamso) - 1] == '.'))
            {
                WrongSyntax();
                return 0;
            }
        }
        if (0 <= atof(Thamso) && 1 >= atof(Thamso))
        {
            Reportn(atof(Thamso), m);
        }
        else
        {
            WrongSyntax();
        }
    }
    else if (strcmp(key, average) == 0)
    {
        for (i = 0; i < strlen(Thamso); i++)
        {
            if (isalpha(Thamso[i]))
            {
                WrongSyntax();
                return 0;
            }
            if (Thamso[0] == '.' || (Thamso[strlen(Thamso) - 1] == '.'))
            {
                WrongSyntax();
                return 0;
            }
        }
        Average(Thamso, m);
    }
    else if (strcmp(key, sort) == 0)
    {
        if (strcmp(Thamso, asc) == 0)
        {
            SortTang(n);
        }
        else if (strcmp(Thamso, desc) == 0)
        {
            SortGiam(n);
        }
        else
        {
            WrongSyntax();
        }
    }
    else if (strcmp(key, country) == 0)
    {
        Thamso[0] = toupper(Thamso[0]);
        CountryEmployee(Thamso, n);
    }
    else
    {
        WrongSyntax();
    }
    return 0;
}