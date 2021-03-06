/* ------------------------------------------------------------------|

实现 int sqrt(int x) 函数。

计算并返回 x 的平方根，其中 x 是非负整数。

由于返回类型是整数，结果只保留整数的部分，小数部分将被舍去。

示例 1:

输入: 4
输出: 2
示例 2:

输入: 8
输出: 2
说明: 8 的平方根是 2.82842...,
     由于返回类型是整数，小数部分将被舍去。|
------------------------------------------------------------------*/

/*  数学推导法
*
*	执行用时：0 ms, 在所有 C++ 提交中击败了100.00%的用户
*	内存消耗：6 MB, 在所有 C++ 提交中击败了6.22%的用户
*/

#include <iostream>
#include <string> 
#include <vector>
#include <algorithm>
#include <unordered_map>
#include <map>

using namespace std;

int mySqrt(int x) {
   int k = 0;
   if (x == 0) {
        return k;
   }
   else {
      k = exp(0.5 * log(x));
   }
   return long(k + 1) * (k + 1) <= x ? k + 1 : k;

}

int main() {
    cout << mySqrt(1) << endl;
}