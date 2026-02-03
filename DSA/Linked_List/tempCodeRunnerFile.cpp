oid deleteAtPos(Node* (&head),int pos){
//         if(pos<=1){
//             deleteAtBeg(head);
//             return;
//         }
//         Node* temp = head;
//         for(int i=1;i<pos-1;i++){
//             if(temp==nullptr){
//                 deleteAtEnd(head);
//                 return;
//             }
//             temp = temp->next;        
//         }
//         if(temp->next==nullptr){
//             return;
//         }
//         temp->next = temp->next->next;
// }