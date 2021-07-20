#include <vector>

class Merge
{
    public:
    void sort(std::vector<int>& d);
    void merge(std::vector<int>& d, int lo, int mid, int hi);
    void sort_bu();
};