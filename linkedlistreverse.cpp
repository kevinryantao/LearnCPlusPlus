#include <iostream>

using namespace std;

struct node
{
  int val;
  struct node* next;
};

void print_reverse(*node list)
{
  if ( list != 0 )
    {
      print_reverse(list->next);
      printf("%d\n", list->val);
    }
}
