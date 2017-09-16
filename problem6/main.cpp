#include <iostream>

using namespace std;

int main(){
    long int firstSum = 0;
    long int secondSum = 0;
    long int diff = 0;

    for(int i = 1; i <= 100; i++){
        firstSum += i*i;
        secondSum += i;

    }

    secondSum*= secondSum;


    diff = secondSum - firstSum;

    cout << "SecondSum: " << secondSum << endl << "Diff: " << diff << endl;

    return 0;
}
