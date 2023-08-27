#include<iostream>
using namespace std;
class Node{
    public:
    int data=0;
    Node* next;
};

Node* new_node = new Node();
Node* help_node = new Node();
Node* help_node1 = new Node();
Node* delete_node = new Node();

int CreateLinkedList(){
    // cout<<"Enter the first data = ";
    // cin>>new_node->data;
    int n=0;
    cout<<"Enter the first number = ";
    cin>>n;
    new_node->data = n;
    new_node->next = NULL;
    //this below line is added for the insert function for creating a linked list
    help_node = new_node;
    do
    {
        int x;
        cout<<endl<<"Do you want to enter more data"<<endl;
        cout<<"Press 1 for yes and 0 for no = ";
        cin>>x;
        if (x == 1) {
            cout<<"Enter the number = ";
            Node* new_node1 = new Node();
            cin>>new_node1->data;
            help_node->next = new_node1;
            help_node = new_node1;
            help_node->next = NULL;
        }
        else if (x == 0) {
            break;
        }
        
        
    } while (1);
    

    return 0;
}

int InsertAtBegin(int n){

    Node* insertatbegin_node = new Node();
    insertatbegin_node->data = n;
    insertatbegin_node->next = new_node;
    new_node = insertatbegin_node;
    return 0;
}

int InsertAtLast(int n){

    Node* insertatlast_node = new Node();
    insertatlast_node->data = n;
    insertatlast_node->next = NULL;

    help_node = new_node;
    while(help_node->next!=NULL){
        help_node = help_node->next;
    }

    help_node->next=insertatlast_node;
    return 0;
}
int InsertAtAnyPos(int num,int pos){
    Node* insertanypos_node = new Node();
    insertanypos_node->data = num;
    insertanypos_node->next = NULL;

    help_node = new_node;
    int len=1;
    while (len!=pos) {
        help_node = help_node->next;
        len++;
    }

    help_node1 = help_node->next;

    //connecting nodes
    help_node->next = insertanypos_node;
    insertanypos_node->next = help_node1;

    return 0;
}

void DeleteFromBegin(){
    delete_node = new_node;
    new_node = new_node->next;
    delete(delete_node);
}
void DeleteFromLast(){
    delete_node = new_node;
    while (delete_node->next!=NULL){
        help_node1 = delete_node;
        delete_node=delete_node->next;
    }
    delete(delete_node);
    help_node1->next = NULL;
}
void DeleteAtAnyPos(int numdel){
    delete_node = new_node;
    
    if (delete_node->data == numdel) {
        new_node = new_node->next;
        delete(delete_node);
    }
    else{
        while (delete_node->data!=numdel) {
            help_node = delete_node;
            delete_node = delete_node->next;
        }
        help_node->next = delete_node->next;
        delete(delete_node);
    }
}

void Search(int n){
    help_node1 = new_node;
    int flag=0, len=0;
    while (help_node1->next!=NULL) {
        len++;
        if (help_node1->data == n) {
            cout<<endl<< n <<" is present in the linked list at "<<len<<" position"<<endl;
            flag++;
        }
        help_node1 = help_node1->next;
    }
    len++;
     if (help_node1->data == n) {
            cout<<endl<< n <<" is present in the linked list at "<<len<<" position"<<endl;
            flag++;
        }
    else if (flag == 0){
        cout<<endl<< n <<" is not present in the linked list"<<endl;
    }
}

int SizeOfLL(){
    Node* size_node = new Node();
    help_node1 = new_node;
    int len=0;
    if (new_node->data==0) {
        return len;
    }
    else {
        len=1;
        while (help_node1->next!=NULL){
            help_node1=help_node1->next;
            len++;
        }
        return len;
    }
    
}

int PrintList(){
    //this is a print function used to print the whole Linked list
    Node* print_node = new Node();
    print_node = new_node;
    cout<<endl<<"Present Linked List:-"<<endl;
    while(print_node->next!=NULL){
        cout<<print_node->data<<" ";
        print_node = print_node->next;
    }
    cout<<print_node->data<<" ";
    cout<<endl<<endl;
    return 0;
}


int main(){
    int input=0;
    cout<<"<--Linked List Program-->"<<endl;
    cout<<"1. Create a linked list "<<endl;
    cout<<"2. Traverse the linked list "<<endl;
    cout<<"3. Insert in the beginning "<<endl;
    cout<<"4. Insert from the last  "<<endl;
    cout<<"5. Insert at given position  "<<endl;
    cout<<"6. Delete from the beginning "<<endl;
    cout<<"7. Delete from the last "<<endl;
    cout<<"8. Delete at given position "<<endl;
    cout<<"9. Search a number "<<endl;
    cout<<"10. To know the size of Linked List"<<endl;
    cout<<"11. Exit from the program "<<endl;

    while (1) {
        cout<<"Enter your choice = ";
        cin>>input;
        switch (input)
        {
        case 1:
            CreateLinkedList();
            break;

        case 2:
            PrintList();
            break;

        case 3:
            int n;
            cout<<"Enter the number = ";
            cin>>n;
            InsertAtBegin(n);
            break;

        case 4:
            int num1;
            cout<<"Enter the number = ";
            cin>>num1;
            InsertAtLast(num1);
            break;

        case 5:
            int num,pos;
            cout<<"Enter the number = ";
            cin>>num;
            cout<<"Enter the position = ";
            cin>>pos;
            InsertAtAnyPos(num,pos);
            break;

        case 6:
            DeleteFromBegin();
            break;

        case 7:
            DeleteFromLast();
            break;

        case 8:
            int numdel;
            cout<<"Enter the number which you want to delete = ";
            cin>>numdel;
            DeleteAtAnyPos(numdel);
            break;

        case 9:
            int search;
            cout<<endl<<"Enter the number you want to search = ";
            cin>>search;
            Search(search);
            break;

        case 10:
            cout<<endl<<"The size of the Linked List = "<<SizeOfLL()<<endl;
            break;
        
        case 11:
            exit(0);

        default:
            cout<<endl<<"-:Enter a Valid Number:-"<<endl;
            break;
        }
    }
    

    return 0;
}