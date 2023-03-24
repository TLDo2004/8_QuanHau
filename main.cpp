#include <iostream>
#include <math.h>
using namespace std;

int a[9], cnt=0;

int TimSi(int j, int k)
{
    for(int i=1;i<k;i++)
    {
        if((j == a[i]) || (abs(j-a[i])== k-i)) return 0;
    }
    return 1;
}

void In()
{
    for(int i=1;i<=8;i++) cout << a[i];
        cout << endl;
}

void Hau(int i)
{
    for(int j=1;j<=8;j++)
    {
        if(TimSi(j, i))
        {
            a[i]=j;
            if(i==8)
            {
                cout << ++cnt << ": ";
                In();
            }
            else Hau(i+1);
        }
    }
}

int main()
{
    Hau(1);
    return 0;
}
