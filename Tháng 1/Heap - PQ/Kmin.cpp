#include <bits/stdc++.h>

using namespace std;

int M, N, K;
priority_queue<int, vector<int>, greater<int>>pq1, pq2;

int main() {
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL); 
    std::cin >> M >> N >> K;

    for (int i = 0; i < M; i++) {
        int x; std::cin >> x;
        pq1.push(x);
    }

    for (int i = 0; i < N; i++) {
        int x; std::cin >> x;
        pq2.push(x);
    }
    int count = 0;
    while (count <= K) {
        int a = pq1.top();
        int b = pq2.top();
        std::cout << a + b << std::endl;
        pq1.pop(); pq2.pop();
        if (a + pq2.top() < b + pq1.top()) {
            std::cout << a + pq2.top() << std::endl;
            std::cout << b + pq1.top() << std::endl;
        } else  {
            std::cout << b + pq1.top() << std::endl;
            std::cout << a + pq2.top() << std::endl;
        }
        count += 3;
    }
    
    return 0;
}