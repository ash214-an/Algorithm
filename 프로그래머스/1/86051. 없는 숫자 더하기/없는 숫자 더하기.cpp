#include <string>
#include <vector>

using namespace std;

int solution(vector<int> numbers) {
    int total = 0;
    for(int num:numbers)
    {
        total += num;
    }
    return (45 - total);
}