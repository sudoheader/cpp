#include <iostream>

using namespace std;

pair<int,int> find_limits (int* data, size_t length)
{
  if (length > 0)
  {
    pair<int,int> limits(find_limits(data + 1, length - 1));
    
    return make_pair(min(limits.first, *data), max(limits.second, *data));
  }
  else
  {
    return make_pair(*data, *data);
  }
}

int main () 
{
  int data[] = { 4, 2, 0, 9, 8 };
  
  pair<int, int>  limits(find_limits(data, sizeof(data) / sizeof(int)));
  
  cout << limits.first << ", " << limits.second << std::endl;
}