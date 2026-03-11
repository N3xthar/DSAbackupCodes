#include <iostream>
#include <vector>

using namespace std;

int main() {
    int count= 0 ;
    vector<int> array = {1, 2, 1, 1, 3};
    int n = array.size();\
    

    for (int i = 0; i < n; i++) {
        for (int j = i; j < n; j++) {

            int sum = 0;

            for (int k = i; k <= j; k++) {
                sum += array[k];
            }

            if (sum == 3) {
                count++;
            }
        }
    }
    cout<<count;

    return 0;
}
