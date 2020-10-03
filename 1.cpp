/* Name of the problem: Life, Universe and Everything
Link for problem statement: https://www.spoj.com/problems/TEST/ */

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    vector <int> v;
    int n;
    cin >> n;

    while(n != 42)
    {
        v.push_back(n);
        cin >> n;
    }

    
    for (int i = 0, j = v.size(); i < j; i++)
    {
        cout << v[i] << endl;
    }



}
