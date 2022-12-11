#include <iostream>
using namespace std;
void TGC(int n)
{
    int i, j;
    for (i = 1; i <= n; i++)
    {
        for (j = i; j <= n; j++)
            cout << (" ");

        for (j = 1; j <= i; j++)
            cout << ("* ");

        cout << ("\n");
    }
}
int main ()
{
    int n;
    cout <<"Nhap: ";
    cin >> n;
    TGC(n);
    return 0;
}