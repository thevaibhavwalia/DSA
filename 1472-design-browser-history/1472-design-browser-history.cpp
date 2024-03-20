class Node {
public:
    string data;
    Node* next;
    Node* back;
    Node(string url) {
        this->data = url;
        next = NULL;
        back = NULL;
    }
};

class BrowserHistory {
public:
    Node* current;
    BrowserHistory(string homepage) {
        current=new Node(homepage);
        
    }
    
    void visit(string url) {
        Node* newPage=new Node(url);
        current->next=newPage;
        newPage->back=current;
        current=newPage;
        
    }
    
    string back(int steps) {
        while(steps){
            if(current->back){
                current=current->back;
            }
            else{
                break;
            }
            steps--;
        }
        return current->data;
        
    }
    
    string forward(int steps) {
         while (steps) {
            if (current->next) {
                current = current->next;
            } else {
                break;
            }
            steps--;
        }
        return current->data;
        
    }
};

/**
 * Your BrowserHistory object will be instantiated and called as such:
 * BrowserHistory* obj = new BrowserHistory(homepage);
 * obj->visit(url);
 * string param_2 = obj->back(steps);
 * string param_3 = obj->forward(steps);
 */