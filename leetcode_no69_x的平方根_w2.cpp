/* ------------------------------------------------------------------|

ʵ�� int sqrt(int x) ������

���㲢���� x ��ƽ���������� x �ǷǸ�������

���ڷ������������������ֻ���������Ĳ��֣�С�����ֽ�����ȥ��

ʾ�� 1:

����: 4
���: 2
ʾ�� 2:

����: 8
���: 2
˵��: 8 ��ƽ������ 2.82842...,
     ���ڷ���������������С�����ֽ�����ȥ��|
------------------------------------------------------------------*/

/*  ���ֲ��ҷ�
*
*	ִ����ʱ��0 ms, ������ C++ �ύ�л�����100.00%���û�
*	�ڴ����ģ�5.7 MB, ������ C++ �ύ�л�����75.34%���û�
*/

#include <iostream>
#include <string> 
#include <vector>
#include <algorithm>
#include <unordered_map>
#include <map>

using namespace std;

int mySqrt(int x) {
    int low = 0;
    int high = x;
    int ans = -1;
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if ((long)mid * mid <= x) {
            ans = mid;
            low = mid + 1;                                  /*  ����ҿ�����  */
        }
        else {
            high = mid - 1;
        }
    }
    return ans;
}