#include <iostream>

#include <vector>

using namespace std;

int count_sheep(vector<bool> arr)
{
    // Chana Logic
    int tmp = 0;
    // for (int i = 0; i < arr.size(); i++)
    // {
    //     if (arr[i])
    //         tmp++;
    // }
    // return tmp;

    for (const bool &a : arr)
    {
        a ? tmp++ : tmp;
    }
    return tmp;
}

int main(int argc, char const *argv[])
{
    vector<bool> array1 = {true, true, true, false,
                           true, true, true, true,
                           true, false, true, false,
                           true, false, false, true,
                           true, true, true, true,
                           false, false, true, true};
    cout << count_sheep(array1);
    return 0;
}
