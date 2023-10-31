#include <iostream>
#include <queue>
#include <string.h>
#include <vector>

int numQuery;

int main()
{
    std::cin >> numQuery;
    std::priority_queue<int, std::vector<int>, std::greater<int>> pq, pq2;
    for (int i = 1; i <= numQuery; i++)
    {
        char type;
        std::cin >> type;
        if (type == '1')
        {
            int num;
            std::cin >> num;
            pq.push(num);
        }
        else if (type == '2')
        {
            int num;
            std::cin >> num;
            pq2.push(num);
        }
        else
        {
            while (!pq2.empty() && pq2.top() == pq.top())
            {
                pq.pop();
                pq2.pop();
            }
            std::cout << pq.top();
        }
    }
}