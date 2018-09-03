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
  void push_back(string a);
  char* get(n);
  int length();
  char* remove_front();
  bool empty();
  List();
  ~List();
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

void List::push_back(string a)
{
 ListNode *node = new ListNode(a);
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






















