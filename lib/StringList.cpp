#include <stdio.h>

class Strings {
public:
  const char * str;
  Strings(const char *as = "")
  {
    str = as;
  }
};

class ListNode{
    private:
      Strings strings;
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

class List {
 private:  
  ListNode *head;
  ListNode *tail;

 public:
  void push_back(Strings a);
  ListNode *get(int n);
  int length();
  bool remove_front(Strings &b);
  bool empty();
  List();
  ~List();
  bool remove(Strings &a);
  int i;
};

List::List()
{
 head = NULL;
 tail = NULL;
 i = 0;
}

List::~List()
{
  Strings t;
  while(!empty()) {
      remove(t);
  }
}

void List::push_back(Strings a)
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

bool List::remove_front(Strings &copy)
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

ListNode* List::get(int n)
{
  int k;
  ListNode *nth=head;
  for(k=0;k<n;k++){
     nth = nth->getNext();
  }
 return nth;
}

bool List::remove(Strings &copy)
{
  if(!empty())
  {
    copy = head->getStrings();
    ListNode *tmp = head->getNext();
    delete head;
    head = tmp;
    if (tmp==NULL)
      tail = NULL;
    return true;
  }
return false;
}
