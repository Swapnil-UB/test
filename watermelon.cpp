#include <iostream>
using namespace std;
int main()
{
    cout << "Enter the weight of the watermelon : ";
    int w;
    cin >> w;

    if(w%2 == 0 and w > 2) cout << "YES";
    else cout << "NO";
}