#include <iostream>
using namespace std;

void make_my_array(int *arr, const unsigned int len);
void print_my_array(int *arr, const unsigned int len);
int sum_array(int *arr, const unsigned int len);
int sum_positives(int *arr, const unsigned int len);

int sum_array(int *arr, const unsigned int len) {
    int res_sum = 0;
    for (int i = 0; i < len; i++) {
        res_sum += arr[i];
    }
    return res_sum;
}

int sum_positives(int *arr, const unsigned int len) {
    int res_sum = 0;
    for (int i = 0; i < len; i++) {
        if (arr[i] >= 0)
            res_sum += arr[i];
    }
    return res_sum;
}

void make_my_array(int *arr, const unsigned int len) {
    for (int i = 0; i < len; i++) {
        arr[i] = i+1;
    }
}

void print_my_array(int *arr, const unsigned int len) {
    cout << "[";
    for (int i = 0; i < len; i++) {
        cout << arr[i] << ", ";
    }
    cout << "\b\b]" << endl;
}

int main() {
    int my_arr[10];
    make_my_array(my_arr, 10);
    print_my_array(my_arr, 10);
    cout << sum_array(my_arr, 10) << endl;
    cout << sum_positives(my_arr, 10) << endl;
    return 0;
}
