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
 
class List {
private:
  ListNode *head;
  ListNode *tail;
public:
  List();
  void append(Item a);
  bool remove(Item &a);
  bool empty();
};
