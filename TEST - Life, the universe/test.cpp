#include <iostream>
#include <vector>

using namespace std;

int main()
{
  int num;
  bool accpet = true;
  vector<int> arr;

  while (cin >> num)
  {
    if (num == 42)
    {
      accpet = false;
    }

    if (accpet == true)
      arr.push_back(num);
  }

  cout << "\n";
  for (int i = 0; i < arr.size(); i++)
  {
    cout << arr[i] << "\n";
  }

  return 0;
}