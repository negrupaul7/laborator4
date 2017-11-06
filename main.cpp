#include <iostream>

using namespace std;

int main()
{
    int a[20], nr, i;
    cout << "Numarul de elemente din sirul a (maxim 20) : ";
    cin >> nr;
    for (i = 0; i < nr; i++) {
        cout << "a[" << i << "] = ";
        cin >> a[i];
    }
    long sum;

    for (i = 0, sum = 0; i < nr; i++)
    {
        sum = sum + a[i];
    }
    cout << "Suma elementelor sirului a este : " << sum << endl;
    return 0;
}

