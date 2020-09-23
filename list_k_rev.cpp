#include <iostream>
#include <list>

using namespace std;

list<int> input(list<int> l)
{
    cout << "enter the number of nodes"
         << "\n";
    int n;
    cin >> n;
    cout << "enter the elements"
         << "\n";
    int temp;
    for (int i = 0; i < n; i++)
    {
        cin >> temp;
        l.push_back(temp);
    }
    return l;
}

void output(list<int> l)
{
    cout << "the content of the list is:\n";
    list<int>::iterator it;
    for (auto it = l.begin(); it != l.end(); it++)
        cout << *it << " ";
    cout << "\n";
}

list<int> rev(list<int> l)
{
    list<int> rev, temp;
    auto x = 0;
    int n = l.size();
    cout << "enter the value of k"
         << "\n";
    int k;
    cin >> k;
    if (k >= n)
    {
        l.reverse();
        rev = l;
    }
    else
    {
        int pass = 0;
        list<int>::iterator i = l.begin();
        while (l.size() > k)
        {
            for (int j = 0; j < k; j++)
            {
                x = l.front();
                temp.push_back(x);
                l.pop_front();
                i++;
            }
            temp.reverse();
            rev.merge(temp);
            temp.clear();
        }
        l.reverse();
        rev.merge(l);
    }
    return rev;
}

int main(void)
{
    list<int> l;
    l = input(l);
    l = rev(l);
    output(l);
}
