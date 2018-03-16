#include<iostream>
using namespace std;
void bubble_sort(int a[], int n);
int main()
{
    int data[20]={12,3,5,7,23,65,4,7,22,11,78,146,13,3,-98,4,7,19,76,12};
    cout<<"原始数据：";
    for(int i=0;i<20;i++)
    {
        cout<<data[i]<<" ";
    }
    cout<<endl;
    int repeat[20]={0};
    int newdata[20]={0};
    bubble_sort(data,20);
    int k=0,j=0;
    for(int i = 0; i < 20; i++)
    {
        if(data[i]==data[i+1])
        {
            repeat[k]=data[i];
            k++;
        }
        else
        {
            newdata[j]=data[i];
            j++;
        }
    }
    cout<<"重复数据：";
    for(int l=0;l<k;l++)
    {
        cout<<repeat[l]<<" ";
    }
    cout<<endl;
    cout<<"升序排序后数据: ";
    for(int i=0;i<j;i++)
    {
        cout<<newdata[i]<<" ";
    }
    cout<<endl;
    return 0;
}
void bubble_sort(int a[], int n)
{
    int i, j, temp;
    for (j = 0; j < n - 1; j++)
        for (i = 0; i < n - 1 - j; i++)
        {
            if(a[i] > a[i + 1])
            {
                temp = a[i];
                a[i] = a[i + 1];
                a[i + 1] = temp;
            }
        }
}
