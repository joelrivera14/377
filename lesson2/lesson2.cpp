#include <iostream>
#include <vector>
using namespace std;

void insertion_sort(vector<int> &vec)
{
    for (int i = 1; i < static_cast<int>(vec.size()); ++i)
    {
        int key = vec[i];
        int j = i - 1;
        while (j >= 0 && vec[j] > key)
        {
            vec[j + 1] = vec[j];
            --j;
        }
        vec[j + 1] = key;
    }
}

void selection_sort(vector<int> &vec)
{
    int n = static_cast<int>(vec.size());
    for (int i = 0; i < n - 1; ++i)
    {
        int min = i;
        for (int j = i + 1; j < n; ++j)
        {
            if (vec[j] < vec[min])
                min = j;
        }
        int temp = vec[i];
        vec[i] = vec[min];
        vec[min] = temp;
    }
}

void print(const vector<int> &vec)
{
    for (int i = 0; i < static_cast<int>(vec.size()); ++i)
    {
        cout << vec[i] << " ";
    }
    cout << endl;
}
int main()
{
    vector<int> a = {5, 6, 3, 9, 2, 1};
    vector<int> b = {45, 3, 2342, 1, 33, 2};
    print(a);
    print(b);
    cout << endl;
    insertion_sort(a);
    selection_sort(b);
    print(a);
    print(b);
    return 0;
}