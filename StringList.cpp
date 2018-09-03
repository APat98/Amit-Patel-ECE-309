#include <stdio.h>
 
class List {
private:
      class ListNode{
    private:
      Item item;
      ListNode *next;
    public:
      ListNode(Item a)
        { item = a; next=NULL; }
      ListNode* getNext() { return next; }
      void setNext(ListNode *n) { next = n; }
      Item getItem() { return item; }
      };
  
  ListNode *head;
  ListNode *tail;

  public:
  char* push_back(string);
  char* get(n);
  int length();
  char* remove_front();
  bool empty();
  List();
  ~List();
};
