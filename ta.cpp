#include <iostream>
#include <fstream>
#include <vector>

extern void shell(std::vector<int> & d);

int main()
{
    std::ifstream ifs("test_data.txt",std::fstream::in);
    if(ifs.is_open())
    {
        int num=0;
        std::vector<int> data;
        while(ifs>>num)
        {
            data.push_back(num);
            std::cout << num << " "; 
        }
        std::cout << "\n";
        shell(data);
        for(auto& d: data)
        {
            std::cout << d << " "; 
        }
        std::cout << "\n";

    }
    ifs.close();

    return 0;
}
