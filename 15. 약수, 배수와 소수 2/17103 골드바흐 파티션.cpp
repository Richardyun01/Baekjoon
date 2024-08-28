#include <iostream>
#include <vector>
using namespace std;
void net(int max_n, vector<bool>& is_prime) {
    is_prime[0] = is_prime[1] = false;
    for (int i = 2; i <= max_n; i++) {
        is_prime[i] = true;
    }
    for (int i = 2; i * i <= max_n; i++) {
        if (is_prime[i]) {
            for (int j = i * i; j <= max_n; j += i) {
                is_prime[j] = false;
            }
        }
    }
}
int main() {
    int n;
    cin >> n;
    int max_n = 0;
    vector<int> nums(n);
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
        if (nums[i] > max_n) max_n = nums[i];
    }
    vector<bool> is_prime(max_n+1);
    net(max_n, is_prime);
    for (int num : nums) {
        int cnt = 0;
        for (int j = 2; j <= num/2; j++) {
            if (is_prime[j] && is_prime[num-j]) {
                cnt++;
            }
        }
        cout << cnt << "\n";
    }
    return 0;
}