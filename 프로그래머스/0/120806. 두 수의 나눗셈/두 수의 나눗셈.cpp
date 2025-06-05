#include <string>
#include <vector>

using namespace std;

int solution(int num1, int num2) {
    if(num2 == 0){return 0;}
    
    double answer = (double)num1 / num2;
        return (int)(answer * 1000);
}