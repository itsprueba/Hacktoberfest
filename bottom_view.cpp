#include<iostream>
#include<queue>
#include<map>
using namespace std;

class node{
	public:
	int data;
	int h_dist;
	node *left;
	node *right;
	node(int d){
		data=d;
		left = NULL;
		right = NULL;
	}
};


node* buildTree(){
	int d;
	cin>>d;
	queue<node*> q;
	node *root = new node(d);
	q.push(root);
	while(!q.empty()){
		node * f = q.front();
		q.pop();
		int c1,c2;
		cin>>c1>>c2;
		if(c1!=-1){
          f->left = new node(c1);
		  q.push(f->left); 
		} 
		if(c2!=-1){
         f->right = new node(c2);
		 q.push(f->right);
		}
	}
	return root;
}

void bottom_view(node *root){
	queue<node *> q;
	map<int, int> m;
	root->h_dist = 0;
	q.push(root);
	int h_dist;
	while(!q.empty()){
		node * f= q.front();
		h_dist = f->h_dist; 
		q.pop();
		m[h_dist]=f->data;
		if(f->left){
			f->left->h_dist = h_dist -1;
			q.push(f->left);
		}
		if(f->right){
			f->right->h_dist = h_dist +1;
			q.push(f->right);
		}
	}
	for(auto x:m){
		cout<<x.second<<" ";
	}
}

int main() {
	node *root = buildTree();
	bottom_view(root);
	return 0;
}
