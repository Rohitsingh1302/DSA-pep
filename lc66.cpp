#include <iostream>
#include <vector>

std::vector<int> plusOne(std::vector<int>& a){
    for(int i = (int)a.size() - 1; i >= 0; --i)
        if(a[i] < 9) { ++a[i]; return a; } else a[i] = 0;
    a.insert(a.begin(), 1);
    return a;
}

int main(){
    std::vector<int> v{9,9,9};
    for(auto d : plusOne(v)) std::cout << d << ' ';
    return 0;
}
