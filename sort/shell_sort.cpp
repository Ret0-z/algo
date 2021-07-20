
#include <vector>

void shell(std::vector<int> & d)
{
    int len = d.size();
    int h=1;
    while(h<len/3)
    {
        h = 3*h+1;
    }
    while(h>=1)
    {
        for(int i=h; i< len; ++i)
        {
            for(int j=i; j>=h; j -= h)
            {
                if(d[j] < d[j-h])
                {
                    std::swap(d[j],d[j-h]);
                    /*
                    auto temp = d[j];
                    d[j] = d[j-h];
                    d[j-h] = temp;
                    */
                }
            }
        }
        h = h/3;
    }
}
