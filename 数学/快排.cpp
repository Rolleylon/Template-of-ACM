#include<bits/stdc++.h>
using namespace std;
void swap(int &a,int &b)
{
    int tmp = a;
    a = b;
    b = tmp;
}
viod quicksort(int a[],int s,int e)
{
    if(s >= e)
        return;
    int k = a[s];
    int i = s,j = e;
    while( i != j)
    {
        while( j > i && a[j] >= k)
            j--;
        swap(a[i],a[j]);
        while( i < j && a[i] <= k)
            i++;
        swap(a[i],a[j]);
    }//�������a[i]=k
    quicksort(a,s,i-1);
    quicksort(a,i+1,e);
}
int a[];
int main()
{
    int size = sizeof(a)/sizeof(int);
    quicksort(a,0,size-1);
    for(int i = 0; i < size; i++)
    {
        cout << a[i] << ",";
    }
    cout endl;
    return 0;
}
