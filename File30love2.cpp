// Some pointer questions
#include<iostream>
using namespace std;

/* For MCQ.18.
void update(int *p)
{
    *p = (*p) * 2;
}
*/

/* For MCQ.21.
void increment(int **p)
{
    ++(**p);
}
*/

int main()
{
    /* MCQ.1.
    int first = 8;
    int second = 18;
    int *ptr = &second;
    *ptr = 9;
    cout<<first<<" "<<second<<endl;
    */

    /* MCQ.2.
    int first = 6;
    int *p = &first;
    int *q = p;
    (*q)++;
    cout<<first<<endl;
    */

    /* MCQ.3.
    int first = 8;
    int *p = &first;
    cout<<(*p)++<<" ";
    cout<<first<<endl;
    */

    /* MCQ.4.
    int *p = 0;
    int first = 110;
    *p = first;
    cout<<(*p)<<endl;
    */

    /* MCQ.5.
    int first = 8;
    int second = 11;
    int *third = &second;
    first = *third;
    *third = *third + 2;
    cout<<first<<" "<<second<<endl;
    */

    /* MCQ.6.
    float f = 12.5;
    float p = 21.5;
    float* ptr = &f;
    (*ptr)++;
    (*ptr) = p;
    cout<<*ptr<<" "<<f<<" "<<p<<endl;
    */

    /* MCQ.7.
    int arr[5];
    int *ptr;
    cout<<sizeof(arr)<<" "<<sizeof(ptr)<<endl;
    */

    /* MCQ.8.
    int arr[] = {11, 21, 13, 14};
    cout<<*(arr)<<" "<<*(arr+1)<<endl;
    */

    /* MCQ.9.
    int arr[6] = {11, 12, 31};
    cout<<arr<<" "<<&arr<<endl;
    */

    /* MCQ.10.
    int arr[6] = {11, 21, 13};
    cout<<(arr + 1)<<endl;
    */

    /* MCQ.11.
    int arr[6] = {11, 21, 31};
    int *p = arr;
    cout<<p[2]<<endl;
    */

    /* MCQ.12.
    int arr[] = {11, 12, 13, 14, 15};
    cout<<*(arr)<<" "<<*(arr+3)<<endl;
    */

    /* MCQ.13.
    int arr[] = {11, 21, 31, 41};
    int *ptr = arr++; // contents of symbol table cannot be updated
    cout<<*ptr<<endl;
    */

    /*MCQ.14.
    char ch = 'a';
    char* ptr = &ch;
    ch++;
    cout<<*ptr<<endl;
    */

    /*MCQ.15.
    char arr[] = "abcde";
    char *p = &arr[0];
    cout<<p<<endl;
    */

    /*MCQ.16.
    char arr[] = "abcde";
    char *p = &arr[0];
    p++;
    cout<<p<<endl;
    */

    /*MCQ.17.
    char str[] = "babbar";
    char *p = str;
    cout<<str[0]<<" "<<p[0]<<endl;
    */

    /*MCQ.18.
    int i = 10;
    update(&i);
    cout<<i<<endl;
    */

    /*MCQ.19.
    int first = 110;
    int *p = &first;
    int **q = &p;
    int second = (**q)++ + 9;
    cout<<first<<" "<<second<<endl;
    */

    /*MCQ.20.
    int first = 100;
    int *p = &first;
    int **q = &p;
    int second = ++(**q);
    int *r = *q;
    ++(*r);
    cout<<first<<" "<<second<<endl;
    */

    /*MCQ.21.
    int num = 110;
    int *ptr = &num;
    increment(&ptr);
    cout<<num<<endl;
    */
    return 0;
}