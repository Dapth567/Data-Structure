void splitList(list<T>& list1, list<T>& list2) {
    // Add your code here
    if (mSize%2 == 1){
        node* first_list_1 = begin();
        node* last_list_1 = begin();
        for (int i = 0 ; i < (mSize/2)+1 ; i++){
            last_list_1++;
        }

        node* first_list_2 = last_list_1->next;
        node* last_list_2 = mHeader->prev ;

        
    } else {

    }
}