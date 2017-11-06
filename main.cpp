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
    int max;
    max = a[0];
    for (i = 1; i < nr; i++)
    {
        if(max < a[i])
            max = a[i];
    }
    cout << "Elementul maxim este : " << max << endl;
    return 0;
}

