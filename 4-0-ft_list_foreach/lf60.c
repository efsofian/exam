void    ft_list_foreach(t_list *begin_list, void (*f)(void *))
{
  t_list *ptr;

  ptr = begin_list;
  while (ptr != NULL)
  {
    (*f)(ptr->data);
    if (!(ptr->next))
      break;
    ptr = ptr->next;
  }
}
