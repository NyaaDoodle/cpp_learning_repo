#include <iostream>
#include <vector>
using namespace std;

void make_my_vec(vector<int> *vec);
void print_my_vec(vector<int> vec);
int sum_pos_vec(vector<int> vec);

void make_my_vec(vector<int> *vec) {
    for (int i = 1; i <= 10; i++)
        vec->push_back(i);
}

void print_my_vec(vector<int> *vec) {
    cout << "<";
    for (auto it = vec->begin(); it != vec->end(); it++) {
        cout << *it << ", ";
    }
    cout << "\b\b>" << endl;
}

int sum_pos_vec(vector<int> *vec) {
    int res_sum = 0;
    for (auto it = vec->begin(); it != vec->end(); it++) {
        if (*it > 0)
            res_sum += *it;
    }
    return res_sum;
}

int main() {
    vector<int> g1;
    make_my_vec(&g1);
    print_my_vec(&g1);
    cout << sum_pos_vec(&g1) << endl;
    return 0;
}
