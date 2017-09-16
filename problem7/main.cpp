#include <iostream>
#include <vector>
using namespace std;

bool isPrime(int, vector<int>);

int main(){
    int i = 1;
    int count = 2;
    vector<int> primes;
    primes.push_back(2);
    while(i<10001){
        count++;
        if(isPrime(count,primes)){
                primes.push_back(count);
                i++;
                cout << count << endl;
        }
    }

    return 0;
}

bool isPrime(int number, vector<int> primes){
    for(vector<int>::iterator it = primes.begin(); it != primes.end(); ++it){
        if(number%*it == 0){
            //cout << number << endl;
            return false;
            }
    }
    return true;
}
