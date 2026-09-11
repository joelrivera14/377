#include <iostream>
#include <vector>

int linearSearch(const std::vector<int> &data, int target)
{
    // why do we use prefix instead of postfix for linear search
    for (int i = 0; i < static_cast<int>(data.size()); ++i)
    {
        if (data[i] == target)
            return i;
    }
    return -1;
}
int main()
{
    std::vector<int> values = {8, 3, 9, 4, 7, 2};
    int target;
    std::cout << "enter a value to search for:" << "\n";
    std::cin >> target;

    int result = linearSearch(values, target);
    if (result != -1)
    {
        std::cout << "the index is " << result << "\n";
    }
    else
    {
        std::cout << "index not found " << result << "\n";
    }
    return 0;
}