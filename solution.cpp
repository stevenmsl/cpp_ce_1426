#include "solution.h"
#include "util.h"
#include <unordered_map>
#include <unordered_set>
#include <algorithm>
#include <iterator>
using namespace sol1426;
using namespace std;

/*takeaways
  - record the number of occurrences for each number
*/
int Solution::count(vector<int> &arr)
{
  /*record the number of occurrences for each number */
  auto freq = unordered_map<int, int>();
  for (auto n : arr)
    freq[n]++;

  auto result = 0;
  for (auto pair : freq)
    /* check if x+1 is also in the array */
    if (freq.count(pair.first + 1))
      /* sum up the number of occurrences */
      result += pair.second;

  return result;
}