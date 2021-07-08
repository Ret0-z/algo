
#include <vector>

class Merge_Sort
{
public:
    Merge_Sort(){};
    void operator() (std::vector<int> & d) 
    {
        sort(d);
    }
    void sort_bu(std::vector<int>& d);
private:
    
    void sort(std::vector<int> & d);
    void sort(std::vector<int> & d, int lo, int hi);
    void merge(std::vector<int> & d, int lo, int mid, int hi);
    
    std::vector<int> aux;
};