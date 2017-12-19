t_list	*sort_list(t_list* lst, int (*cmp)(int, int))
{
  t_list *new;

  int temp = 0;

  new = lst;

  while (lst)
  {
    if ((*cmp)(new-> data, new-> next-> data) == 0)
    {
      temp = lst-> next -> data;
      lst->next->data = lst-> data;
      lst->data = temp;
      lst = new;
    }
    if (!(new->next))
      break;
    lst = lst->next;
  }
  return (new);
}
