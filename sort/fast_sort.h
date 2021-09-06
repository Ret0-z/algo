#include <vector>

class Fast_Sort
{
public:
    Fast_Sort(){};
    std::vector<int> operator() (std::vector<int> d) 
    {
        aux = d;
        sort(aux);
        return aux;
    }
private:
    
    void sort(std::vector<int> & d);
    void sort(std::vector<int> & d, int lo, int hi);
    int partition(std::vector<int> & d, int lo, int hi);
    
    std::vector<int> aux;
};