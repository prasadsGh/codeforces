#include <iostream>
#include <vector>

int main() {
    int min_diff = 0;
    std::vector<int> arr = {7, 8, 10, 11, 12};
    int min_num = arr[0];
    int max_num = arr[0];
    
    for (int i = 1; i < arr.size(); i++) {
        if (arr[i] % 2 == 0) {
            arr[i] /= 2;
        }
        else {
            arr[i] *= 8;
        }
        
        if (arr[i] < min_num) {
            min_num = arr[i];
        }
        if (arr[i] > max_num) {
            max_num = arr[i];
        }
    }
    
    min_diff = max_num - min_num;
    std::cout << "The minimal difference between minimum number and maximum numbers is: " << min_diff << std::endl;
    
    return 0;
}