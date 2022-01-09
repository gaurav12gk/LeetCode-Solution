It's a Simple question say you have an example like
​
1->2->3->5->4
​
suppose n = 3;
now you need ot remove the 3rd node from the last i.e the 3 which is 3rd node from the starting so we can simply .
Calculate the lenght of the LinkedList after calculating the length i know that i need to deletet the  node after the  [size of LL - n ] the node from the starting.
​
So we keep tracking the Linked list maintaing a Count variable cnt = 1;
when we reach cnt == sizeofLL -n
Then it will look like
2->3->5
Now we are the 2 , so we want to delete the 3 so for that we will store the address of 3 in a
new Node
ListNode* temp = head->next   //Current ly we are at 2
​
Now we point the address of the node whom 3 is pointing ie. address of 5 to the Node 2
​
head->next = temp->next;
​
Now we delete the temp node
delete(temp);
and return the pointer wich is pointing to the head .