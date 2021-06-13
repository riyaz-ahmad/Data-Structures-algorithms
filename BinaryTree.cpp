#include<bits/stdc++.h>
#include<conio.h>
using namespace std;

//structure of a node of tree
struct node{
    int key;//data stored in the node
    node *left;//pointer to left child]
    node *right;//pointer to the right child
};

//class for the imokementation of a binary tree
class btree{
    public:

        btree();//constructor
        ~btree();//destructor

        void insert(int key);//public method for inserting the key in the tree
        node * search(int key);//public method for searching the key
        void destroy_tree();//for destroying the whole tree
        void display();// for displaying the elements
        void inorder();
        void preorder();
        void postorder();

        private:
            void destroy_tree(node *leaf);//private method for destroying the tree
            void insert(int key, node *leaf);//private method for inserting the tree
            node * search(int key, node *leaf);//private methid for searching the node in the tree
            void display(node * root);// private version for displaying the elements
            void inorder(node *leaf);
            void preorder(node *leaf);
            void postorder(node *leaf);

        protected:
            node * root;//root node
};//class btree ends here

btree::btree(){
    root = NULL;
}

btree::~btree(){
    destroy_tree();
}



void btree::destroy_tree(node *leaf){
    if(leaf != NULL){
        destroy_tree(leaf->left);
        destroy_tree(leaf->right);
        delete leaf;
        leaf = NULL;
    }
}

void btree::insert(int data, node *leaf){
    if(data < leaf->key){
        if(leaf->left != NULL)
            insert(data, leaf->left);
        else{
            leaf->left = new node;
            leaf->left->key = data;
            leaf->left->left = NULL;//set the left child of child node to null
            leaf->left->right = NULL;//set the right child of child node to null
        }//else ends here
    }//if ends here
    else if(data >= leaf->key){
        if(leaf->right != NULL)
            insert(data, leaf->right);
        else{
            leaf->right = new node;
            leaf->right->key = data;
            leaf->right->left = NULL;//set the left child of child node to null
            leaf->right->right = NULL;//set the right child of child node to null
        }//else ednds here
    }//else if ends here
}//insert method ends here

//private version of inorder traversal
void btree::inorder(node * leaf){
    if(leaf != NULL){
        inorder(leaf->left);
        cout<<leaf->key<<" ";
        inorder(leaf->right);
    }
}

//private version of preorder traversal
void btree::preorder(node * leaf){
    if(leaf != NULL){
        cout<<leaf->key<<" ";
        preorder(leaf->left);
        preorder(leaf->right);
    }
}

//private version of postorder traversal
void btree::postorder(node * leaf){
    if(leaf != NULL){
        postorder(leaf->left);
        postorder(leaf->right);
        cout<<leaf->key<<" ";
    }
}




node * btree::search(int key, node *leaf){
        if(leaf != NULL){
            if(key == leaf->key)
                return leaf;
            if(key < leaf->key)
                return search(key, leaf->left);
            else
                return search(key, leaf->right);
        }//if ends here
        else   
            return NULL;
}//search fxn ends here

void btree::display(node * root){
    int l=-1, r=-1;
    if(root == NULL)
        return;
    if(root->left == NULL)
        cout<<endl;
    else
         l = root->left->key;
    if(root->right == NULL)
        cout<<endl;
    else    
         r = root->right->key;
    cout<<l<<" ==> "<<root->key<<" <== "<<r<<endl;

    display(root->left);
    display(root->right);
    //getch();

}//private version display ends here

//pblic version of insert
void btree::insert(int key){
    if(root != NULL)
        insert(key, root);
    else{
        root = new node;
        root->key = key;
        root->left = NULL;
        root->right = NULL;
    }
}

//public version of search
node * btree::search(int key){
    return search(key, root);
}

//public version of destrroy_tree
void btree::destroy_tree(){
    destroy_tree(root);
}

//public version of display
void btree::display(){
    cout<<"-------------------------------"<<endl;
    cout<<"******** -1 represents null****"<<endl;
    display(root);
    cout<<"-------------------------------"<<endl;
}

//public version of inorder
void btree::inorder(){
    inorder(root);
}

//public version of preorder
void btree::preorder(){
    preorder(root);
}

//public version of postorder
void btree::postorder(){
    postorder(root);
}


int main(){
    btree b;
   /* for(int i = 0; i<11;i++)
       b.insert(i);*/
    b.insert(50);
    b.insert(30);
    b.insert(40);
    b.insert(90);
    b.display();

    if(b.search(40)){
        cout<<"40 is present:"<<endl;
    }
    cout<<"Inorder Traversal"<<endl;
    b.inorder();
    cout<<endl<<"Preorder Traversal"<<endl;
    b.preorder();
    cout<<endl<<"Post Order Traversal"<<endl;
    b.postorder();
    cout<<endl;

   // b.destroy_tree();
    
   /* btree a;
    a.insert(45);*/
    //cout<<"hiii";
   // b.display();
    return 0;
}