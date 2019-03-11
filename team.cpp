#include <iostream>

using namespace std;

int main()
{
    int n, John, Tibu, Gokul, number(0);
    cin >> n;
    while (n--)
    {
        cin >> John >> Tibu >> Gokul;
        if (John + Tibu + Gokul >= 2)
        {
            number += 1;
        }
    }
    cout << number << endl;
    return 0;
}
