int	ft_list_size(t_list *begin_list)
{
  t_list *ptr;
  int i = 0;

  ptr = begin_list;
  while (begin_list != NULL)
  {
    i++;
    ptr = ptr->next;
  }
  return (i);
}
