using namespace std;
struct Node
{
    public:
    int data;
    Node *next;
};
void pushback (Node** head_ref, int new_data)
{
    Node* new_node = new Node(); /* constructing a new node*/ 
    new_node->data = new_data; /*assigning new data*/ 
    new_node->next = NULL;
    Node *last = *head_ref; 
    if (*head_ref == NULL)
    { *head_ref = new_node;
        return;
        }
        while (last->next != NULL)
    {
        last = last->next;
    }
    last->next = new_node;
    return;