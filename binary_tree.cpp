#include<bits/stdc++.h>

using namespace std;

template <class T>
struct Node{
    T info;
    Node * llink;
    Node * rlink;
};

template<class T>
class binary_tree{
    public:
        //overloading the assignment operator
        const binary_tree<T>& operator = (const binary_tree<T> &othertree){
            if(this != othertree){      //avoid self copy
                if(root != NULL)
                    destroy(root);//if tree is not empty , destroy it
                if(othertree.root == NULL)
                    root = NULL;
                else
                    copyTree(root, othertree.root);                    
            }
            return this;
        }

        //check if tree is empty
        bool isEmpty() const{
            return(root == NULL);
        }

        //inorder traversal
        void inorderTraversal() const{
            inorder(root);
        }

        //preorder traversal
        void preorderTraversal() const{
            preorder(root);
        }
        
        //postorder
        void postordeTraversalr() const{
            postorder(root);
        }

        //return height of tree
        int heightTree() const{
            return height(root);
        }

        //counting of nodes
      /*  int nodeCountTree() const{
            return nodeCount(root);
        }

        //leaf nodes count
        int leafCountTree() const{
            return lrafCount(root);
        }*/

        //destroying the tree
        void destroyTree(){
            destroy(root);
        }

        //copy constructor
        binary_tree(const binary_tree<T>& other){
            if (other.root == NULL)
                root = NULL;
            else
                copyTree(root, other.root);
        }

        //default constructor
        binary_tree(){
            root = NULL;
        }

        //destructor
        ~binary_tree(){
            destroy(root);
        }

    protected:
        Node<T> *root;
    
    private:
        //make copy of binary tree
        void copyTree(Node<T>* &copiedroot, Node<T>* otherroot){
            if(otherroot == NULL)
                copiedroot = NULL;
            else{
                copiedroot = new Node<T>;
                copiedroot->info = otherroot->info;
                copyTree(copiedroot->llink, otherroot->llink);
                copyTree(copiedroot->rlink, otherroot->rlink);
            }
        }

        //private version of some public member functions
        void inorder(Node<T> *p) const{
            if(p != NULL){
                inorder(p->llink);
                cout<<p->info<<" ";
                inorder(p->rlink);
            }
        }
        void preorder(Node<T> *p) const{
            if(p != NULL){
                cout<<p->info<<" ";
                preorder(p->llink);
                preorder(p->rlink);
            }
        }
        void postorder(Node<T> *p) const{
            postorder(p->llink);
            postorder(p->rlink);
            cout<<p->info<<" ";
        }
        int height(Node<T> *p) const{
            if(p==NULL)
                return 0;
            else
                return max(height(p->llink), height(p->rlink) );
        }
        // function for returning the maximum the two
        int max(int x, int y) const{
            if(x>=y)
                return x;
            else
                return y;
        }
      //  int nodeCount(Node<T> *p) const;
       // int leafCount(Node<T> *p) const;
};

 /*int main(){
     cout<<"Hello";
     return 0;
 }*/