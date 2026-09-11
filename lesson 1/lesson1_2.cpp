#include <iostream>
#include <vector>

int findMaximum(const std::vector<int> &values)
{
    int currentMax = values[0];
    int index = 0;

    for (int i = 0; i < static_cast<int>(values.size()); ++i)
    {
        if (values[i] > currentMax)
        {
            currentMax = values[i];
            index = i;
        }
    }
    return currentMax, index;
}
// find the minimum for HW
// and return the index
int main()
{
    std::vector<int> values = {31, 41, 59, 26, 41, 58};

    std::cout << "the maximum value is " << findMaximum(values) << "\n";
    std::cout << "the index is" << "\n";
    return 0;
}