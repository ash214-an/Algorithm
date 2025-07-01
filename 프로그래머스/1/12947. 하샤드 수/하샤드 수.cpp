#include <string>
#include <vector>

using namespace std;

bool solution(int x) {
    int number = x;
    int digitsum = 0;
    while(x>0)
    {
        digitsum += x % 10;
        x /= 10;
    }
    return (number % digitsum == 0);
}