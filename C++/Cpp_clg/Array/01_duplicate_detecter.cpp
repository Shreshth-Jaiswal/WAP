#include <vector>
#include <unordered_set>
#include <iostream>

int main(){
    int n,found=0;
    std::cout << "Enter the no. of elements you wanna enter in the array" << "\n";
    std::cin >> n;
    
    std::vector<int> arr(n);
    std::cout << "Enter the elements" << "\n";
    for(int i=0; i<n; i++)
    {
        std::cin >> arr[i];
    }
    std::unordered_set<int> seen;
    for(int i=0; i<arr.size(); i++)
    {
        if(seen.count(arr[i]))
        {
            found=1;
            break;
        }
        
        seen.insert(arr[i]);
    }
    if(found==1)
    std::cout << "yes";
    else
    std::cout << "no";
}
