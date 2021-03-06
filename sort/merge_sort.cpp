#include <iostream>
#include "merge_sort.h"

void Merge_Sort::merge(std::vector<int> & d, int lo, int mid, int hi)
{
    int i=lo, j=mid+1;
    for(int k=lo; k<=hi; k++)
    {
        aux[k] = d[k];
    }

    for(int k=lo; k<=hi; k++)
    {
        if( i>mid ) d[k] = aux[j++];
        else if( j>hi ) d[k] = aux[i++];
        else if( aux[j] < aux[i] ) d[k] = aux[j++];
        else d[k] = aux[i++];
    }
    for(auto& a: d)
    {
        std::cout << a << " "; 
    }
    std::cout << "\n";
}

void Merge_Sort::sort(std::vector<int> & d, int lo, int hi)
{
    if(hi <= lo)
        return;

    int mid = lo + (hi-lo)/2;
    sort(d, lo, mid);
    sort(d, mid+1, hi);
    merge(d,lo,mid,hi);
}

void Merge_Sort::sort(std::vector<int> & d)
{
    aux = std::vector<int>(d.size());
    sort(d, 0, d.size()-1);
}

void Merge_Sort::sort_bu(std::vector<int>& d)
{
    aux = std::vector<int>(d.size());
    int len = d.size();

    for(int sz=1; sz<len; sz*=2 )
    {
        for(int lo=0; lo<len-sz; lo+=2*sz)
        {
            int hi = std::min(lo+2*sz-1,len-1);
            merge(d,lo,lo+sz-1,hi);
        }
    }
}