#include <string>
#include <vector>

using namespace std;

int solution(int num) {
    long long n = num;
    int count = 0;
        
    while(n != 1 && count<500)
    {
       n = (n % 2 == 0) ? (n/2) : (n*3+1);
        count++;
    }
    
    return count>=500 ? -1 : count;
}