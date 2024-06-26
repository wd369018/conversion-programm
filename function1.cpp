#include <iostream>
using namespace std;

char convert(char alp)
{

    char ans;
    ans = alp - 'a' + 'A';
    return ans;
}
int main()
{
    char alp;
    cin >> alp;
    cout << convert(alp);
    return 0;
}