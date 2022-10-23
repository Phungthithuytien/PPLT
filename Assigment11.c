#include <stdio.h>
#include <string.h>
#define MAX 10

struct Employee
{
    char id[9];
    char name[100];
    char sex[5];
    char by[5];
    char phone[11];
    int salary;
};

struct Employee a[MAX];

void input(int n)
{
    int i;
    char e;
    for (i = 0; i < n; i++)
    {
        printf("Nhap vao thong tin nhan vien thu %d : ", i);
        printf("\n\tNhap ID : ");
        scanf("%s", a[i].id);
        fflush(stdin);
        printf("\tNhap Ho ten nhan vien : ");
        scanf("%c", &e);
        fgets(a[i].name, 100, stdin);
        fflush(stdin);
        printf("\tGioi tinh : ");
        scanf("%s", &a[i].sex);
        printf("\tNhap nam sinh : ");
        scanf("%s", a[i].by);
        printf("\tSo dien thoai : ");
        scanf("%s", a[i].phone);
        scanf("%c", &e);
        printf("\tNhap luong : ");
        scanf("%d", &a[i].salary);
    }
}
void output(int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        printf("\nThong tin nhan vien thu %d : ", i);
        printf("\n\tID : %s", a[i].id);
        printf("\n\tHo ten nhan vien : %s", a[i].name);
        printf("\tGioi tinh : %s", a[i].sex);
        printf("\n\tNam sinh : %s", a[i].by);
        printf("\n\tSo dien thoai : %s", a[i].phone);
        printf("\n\tLuong : %d\n", a[i].salary);
        printf("\n");
    }
}

void getAEmployee(int i)
{

    printf("\n\tID : %s", a[i].id);
    printf("\n\tHo ten NV : %s", a[i].name);
    printf("\tGioi tinh : %s", a[i].sex);
    printf("\n\tNam sinh : %s", a[i].by);
    printf("\n\tSo dien thoai : %s", a[i].phone);
    printf("\n\tLuong : %d\n", a[i].salary);
    printf("\n");
}

int findEmploy(char id[], int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        if (strcmp(a[i].id, id) == 0)
        {
            return i;
        }
    }
    return -1;
}

int countSex(char sex[], int n)
{
    int i, count = 0;
    for (i = 0; i < n; i++)
    {
        if (strcmp(a[i].sex, sex) == 0)
        {
            count += 1;
        }
    }
    return count;
}

void sortByYear(int n)
{
    struct Employee temp;
    int i, j;
    for (i = 0; i < n - 1; i++)
    {

        for (j = 0; j < n - i - 1; j++)
        {

            if (strcmp(a[j].by, a[j + 1].by) > 0)
            {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
}

void sortBySalary(int n)
{
    struct Employee temp;
    int i, j;
    for (i = 0; i < n - 1; i++)
    {
        for (j = 0; j < n - i - 1; j++)
        {
            if (a[j].salary > a[j + 1].salary)
            {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
}

void xoa1PT(int *n, int pos)
{
    if (pos < 0)
    {
        pos = 0;
    }
    else if (pos > *n - 1)
    {
        pos = *n - 1;
    }
    int i;
    for (i = pos; i < *n; i++)
    {
        a[i] = a[i + 1];
    }
    *n = *n - 1;
}

int maxSalary(int n)
{
    int i, temp = 0;
    int max = a[0].salary;
    for (i = 1; i < n; i++)
    {
        if (max < a[i].salary)
        {
            max = a[i].salary;
            temp = i;
        }
    }
    return temp;
}

void main()
{
    int n;
    char id[9], sex[5];
    do
    {
        printf("Nhap so nhan vien (1->10) : ");
        scanf("%d", &n);
    } while (n < 0, n > 10);
    input(n);

    printf("\nThong tin tat ca cong nhan : ");
    output(n);
    printf("\nNhap vao id : ");
    scanf("%s", &id);
    printf("\nThong tin cua cong nhan co id = %s : ", id);
    if (findEmploy(id, n) == -1)
    {
        printf("\nKhong tim thay!");
    }
    else
        getAEmployee(findEmploy(id, n));

    printf("\nNhap vao gioi tinh : ");
    scanf("%s", &sex);
    printf("\nSo nguoi co gioi tinh %s la : %d",sex, countSex(sex, n));

    printf("\nSap xep theo nam sinh : ");
    sortByYear(n);
    output(n);
    printf("\nSap xep theo luong : ");
    sortBySalary(n);
    output(n);

    printf("\nNguoi co luong cao nhat : ");
    getAEmployee(maxSalary(n));
    printf("\nNguoi tre nhat : ");
    sortByYear(n);
    getAEmployee(0);

    printf("\nNhap id nhan vien muon xoa : ");
    scanf("%s", &id);
    if (findEmploy(id, n) == -1)
    {
        printf("\nKhong tim thay!");
    }
    else
        xoa1PT(&n, findEmploy(id, n));
        printf("\nDanh sach sau khi xoa la : ");
        output(n);
}
