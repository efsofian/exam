void ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)())
{
  t_list *ptr = *begin_list;
  while (ptr)
  {
    if (ptr->data == ptr->next->data)
      free(ptr->next);
    ptr = ptr->next;
  }
}
