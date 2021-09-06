#include "fast_sort.h"

int Fast_Sort::partition(std::vector<int> & d, int lo, int hi)
{
    int i=lo, j=hi+1;
    while(true)
    {
        while(d[++i]<d[lo]) if(i==hi) break;
        
        while(d[lo]<d[--j]);

        if(i>=j) break;
        std::swap(d[i],d[j]);
    }
    std::swap(d[lo],d[j]);
    return j;

}

void Fast_Sort::sort(std::vector<int> & d)
{
    sort(d,0,d.size()-1);
}

void Fast_Sort::sort(std::vector<int> & d, int lo, int hi)
{
    if(lo >= hi) return;
    int j = partition(d, lo, hi);
    sort(d,lo,j-1);
    sort(d,j+1,hi);
}