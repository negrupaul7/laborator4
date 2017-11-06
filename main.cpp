#include <iostream>

using namespace std;

int main()
{
    int a[20], nr, i, aux;
    cout << "Numarul de elemente din sirul a (maxim 20) : ";
    cin >> nr;
    for (i = 0; i < nr; i++) {
        cout << "a[" << i << "] = ";
        cin >> a[i];
    }
    aux = a[0];
    for (i = 0; i < nr - 1; i++)
    {
        a[i] = a[i+1];
    }
    a[nr-1] = aux;
    for (i = 0; i < nr; i++)
    {
        cout << a[i] << " ";
    }
    cout <<  endl;
    return 0;
}

