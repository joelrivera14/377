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

void merge(vector<int> &vec, int start, int mid, int end)
{
    vector<int> temp;
    int l = start;
    int r = mid + 1;
    while (l <= mid && r <= end)
    {
        if (vec[l] <= vec[r])
        {
            temp.push_back(vec[l]);
            ++l;
        }
        else
        {
            temp.push_back(vec[r]);
            ++r;
        }
    }
    while (l <= mid)
    {
        temp.push_back(vec[l]);
        ++l;
    }
    while (r <= end)
    {
        temp.push_back(vec[r]);
        ++r;
    }
    for (int i = 0; i < temp.size(); ++i)
    {
        vec[start + i] = temp[i];
    }
};
void merge_sort(vector<int> &vec, int start, int end)
{
    if (start >= end)
        return;
    int mid = (start + end) / 2;
    merge_sort(vec, start, mid);
    merge_sort(vec, mid + 1, end);
    merge(vec, start, mid, end);
};

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
    vector<int> c = {343, 1, 234, 2, 3, 4, 3};

    print(a);
    print(b);
    print(c);
    cout << endl;
    insertion_sort(a);
    selection_sort(b);
    merge_sort(c, 0, c.size() - 1);

    print(a);
    print(b);
    print(c);
    return 0;
}