#include <string>
#include <vector>
#include <cmath>

using namespace std;

int solution(int left, int right) {
    int answer = 0;
    for (int num = left; num <= right; ++num)
    {
        int root = sqrt(num);
        if (root * root == num)
        {
            answer -= num;
        }
        else
        {
            answer += num;
        }
    }
    return answer;
}