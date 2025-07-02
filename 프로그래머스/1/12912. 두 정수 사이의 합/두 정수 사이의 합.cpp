#include <string>
#include <vector>
#include <algorithm>

using namespace std;

long long solution(int a, int b) {
    long long minNum = min(a, b);
    long long maxNum = max(a, b);
    long long count = maxNum - minNum + 1;
    
    return (minNum + maxNum)*count / 2;
}