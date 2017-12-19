#include "ft_list_size.h"

int	ft_list_size(t_list *begin_list)
{
  int ret = 0;
  t_list *ptr;

  ptr = begin_list;
  while (begin_list != NULL)
  {
    ret++;
    ptr = ptr->next;
  }
  return (ret);
}
