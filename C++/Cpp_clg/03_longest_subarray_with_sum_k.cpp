// Given an array of positive integers and an integer K, 
// find the length of the longest contiguous subarray whose sum is exactly K.
#include <iostream>
#include <vector>
#include <queue>
#include <deque>
#include <numeric>

int main()
{
    int n;
    std::cout << "Input" << "\n";
    std::cin >> n;
    std::vector<int> arr(n);
    std::queue<int> q;
    for(int i=0; i<arr.size(); i++)
    {
        std::cin >> arr[i];
        q.push(arr[i]);
    }
    std::deque<int> d(q);
    int sum = std::accumulate(d.begin(), d.end(), 0);
}