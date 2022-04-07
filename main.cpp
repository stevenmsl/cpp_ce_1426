#include <iostream>
#include <vector>
#include <string>
#include <tuple>
#include <unordered_map>
#include "solution.h"
#include "util.h"

using namespace std;
using namespace sol1426;

/*
Input: arr = [1,2,3]
Output: 2
Explanation: 1 and 2 are counted cause 2 and 3 are in arr.
*/

tuple<vector<int>, int> testFixture1()
{
  return make_tuple(vector<int>{1, 2, 3}, 2);
}

/*
Input: arr = [1,1,3,3,5,5,7,7]
Output: 0
Explanation: No numbers are counted, cause there's no 2, 4, 6, or 8 in arr.
*/

tuple<vector<int>, int> testFixture2()
{
  return make_tuple(vector<int>{1, 1, 3, 3, 5, 5, 7, 7}, 0);
}

/*
Input: arr = [1,3,2,3,5,0]
Output: 3
Explanation: 0, 1 and 2 are counted cause 1, 2 and 3 are in arr.
*/

tuple<vector<int>, int> testFixture3()
{
  return make_tuple(vector<int>{1, 3, 2, 3, 5, 0}, 3);
}

void test1()
{
  auto f = testFixture1();
  cout << "Test 1 - expect to see " << to_string(get<1>(f)) << endl;
  Solution sol;
  cout << "result: " << to_string(sol.count(get<0>(f))) << endl;
}
void test2()
{
  auto f = testFixture2();
  cout << "Test 2 - expect to see " << to_string(get<1>(f)) << endl;
  Solution sol;
  cout << "result: " << to_string(sol.count(get<0>(f))) << endl;
}
void test3()
{
  auto f = testFixture3();
  cout << "Test 3 - expect to see " << to_string(get<1>(f)) << endl;
  Solution sol;
  cout << "result: " << to_string(sol.count(get<0>(f))) << endl;
}

main()
{
  test1();
  test2();
  test3();
  return 0;
}