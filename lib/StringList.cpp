#include <stdio.h>

class Strings {
public:
  const char * str;
  Strings(const char *as = "")
  {
    str = as;
  }
};

class List {
 private:
   class ListNode{
    private:
      Strings string;
      ListNode *next;
    public:
      ListNode(Strings a)
      { 
        strings = a; 
        next=NULL; 
      }
      ListNode* getNext() 
      { 
        return next; 
      }
      void setNext(ListNode *n) 
      { 
        next = n; 
      }
      Strings getStrings() 
      { 
        return strings; }
     };
  
  ListNode *head;
  ListNode *tail;

 public:
  void push_back(strings a);
  ListNode get(n);
  int length();
  bool remove_front(Strings &b);
  bool empty();
  List();
  ~List();
  int i = 0;
};

List::List()
{
 head = NULL;
 tail = NULL;
}

List::~List()
{
  Strings t;
  while(!empty()) {
      remove(t);
  }
}

void List::push_back(strings a)
{
 ListNode *node = new ListNode(a);
 i++;
 if (head == NULL)
   {
     head = node;
     tail = node;
   }
 else
   {
     tail->setNext(node);
     tail = node;
   }
}

bool List::empty()
{
  return head==NULL;
}

bool List::remove_front(Strings &)
{
  if (!empty())
    {
      copy = head->getStrings();
      ListNode *tmp = head->getNext();
      delete head; 
      i--;
      head = tmp;
      if (tmp==NULL)
         tail = NULL;
      return true;
    }
  return false;
}

int List::length()
{
   return i;
}

ListNode List::get(int n)
{
  int k;
  ListNode nth=head
  for(k=0;k<n;k++){
     nth = nth.getNext;
  }
 return nth;
}
