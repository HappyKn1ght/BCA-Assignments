#include <iostream> 
using namespace std; 
class PrimeCheck { 
public: 
    void isPrime(int num) { 
        bool prime = true; 
        if (num <= 1) 
            prime = false; 
        else { 
            for (int i = 2; i <= num / 2; i++) { 
                if (num % i == 0) { 
                    prime = false; 
                    break; 
                } 
            } 
        } 
        if (prime) 
            cout << num << " is a Prime Number."; 
        else 
            cout << num << " is not a Prime Number."; 
    } 
}; 
int main() { 
    PrimeCheck obj; 
    int num; 
    cout << "Enter Number: ";
    cin >> num; 
    obj.isPrime(num); 
    return 0; 
}