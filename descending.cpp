#include <cinttypes>

uint64_t descendingOrder(uint64_t a)
{ 
  std::vector<int> c ;
  
  for(uint64_t b = a ; b > 0 ; b /=10) 
    c.push_back(b % 10);
  
  for(int i=0 ; i < c.size() ; i++)
    for(int j=i; j < c.size() ; j++) 
      if(c[i] < c[j]) 
        std::swap(c[i],c[j]);
  
  a=0;
  
  for(int i=0; i < c.size() ;i++)
    a = a*10 + c[i];
  
  return a;
}
// Input: 42145 Output: 54421
