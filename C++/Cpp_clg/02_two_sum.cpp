#include <iostream>
#include <vector>
#include <unordered_set>

int main(){
    int n,target,needed;
    std::cout << "Input" << "\n";
    std::cin >> n;
    std::vector<int> arr(n);
    for(int i=0; i<n; i++)
    {
        std::cin >> arr[i];
    }

    std::cin >> target;
    std::unordered_set<int> seen;
    for(int x : arr)
    {
        needed=target-x;
        if(seen.count(needed))
        {
            std::cout << "yes";
            return 0;
        }
        seen.insert(x);
    }
    std::cout << "no";
}