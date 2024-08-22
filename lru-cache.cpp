class LRUCache {
public:
    LRUCache(int capacity) {
        //cap = capacity;
        //cap_counter = 0;
        dub_list = new DLL(capacity);
    }
    
    int get(int key) {
        return dub_list->getting(key);
        
    }
    
    void put(int key, int value) {
        // if (hMap.contains(key)) {
        //     hMap[key] = value;
        // }
        // else {
        //     if (cap_counter < cap) {
        //         hMap[key] = value;
        //         cap_counter++;
        //         v.push_back(key);
        //     }
        //     else {
                
        //     }
        // }
        dub_list->putting(key, value);


        
    }


private:
    class DLLNode {
    public:
        DLLNode() {
            key = -1;
            DLLNode* next = nullptr;
            DLLNode* prev = nullptr;
        }
        DLLNode(int data) {
            key = data;
            DLLNode* next = nullptr;
            DLLNode* prev = nullptr;
        }
        DLLNode(int data, DLLNode* n, DLLNode* p) {
            key = data;
            DLLNode* next = n;
            DLLNode* prev = p;
        }

    //private:
        int key;
        DLLNode* next;
        DLLNode* prev;
        // std::unordered_map <int, DLLNode*> dll_hmap;

    };

    class DLL {
    public:
        DLL(int mem_limit) {
            root = new DLLNode();
            tail = new DLLNode();

            root->next = tail;
            tail->prev = root;

            cap = mem_limit;
            cap_counter = 1;
        }
        // DLL(int data) {
        //     root = new DLLNode();
        //     tail = new DLLNode();

        //     DLLNode* sp_node = new DLLNode(data, tail, root);
        //     dll_hmap[data] = sp_node;
        // }
        DLL(int data, int mem_limit) {
            root = new DLLNode();
            tail = new DLLNode();

            DLLNode* sp_node = new DLLNode(data, tail, root);
            dll_hmap[data] = sp_node;

            cap = mem_limit;
            cap_counter = 1;
        }

        int getting(int key) {
            DLLNode* node_ptr = dll_hmap[key];
           // DLLNode* temp_n = node_ptr->next;
            node_ptr->next->prev = node_ptr->prev;
            node_ptr->prev->next = node_ptr->next;
            //node_ptr->prev->next = node_ptr->next;
            tail->prev->next = node_ptr;
            tail->prev = node_ptr;
            return node_ptr->key;

        }

        void putting(int key, int vall) {
            
            if (dll_hmap.contains(key)) {
                DLLNode* node_ptr = dll_hmap[key];
                node_ptr->key = vall;

            }

            else {
                if (cap_counter < cap) {
                    DLLNode* n_node = new DLLNode(vall, tail, tail->prev);
                    tail->prev->next = n_node;
                    tail->prev = n_node;
                    //n_node->prev->next = n_node; 
                    dll_hmap[key] = n_node;
                    cap_counter++;
                }
                else {
                    dll_hmap.erase(key);
                    root->next = root->next->next;
                    DLLNode* n_node = new DLLNode(key, tail, tail->prev);
                    tail->prev->next = n_node; 
                    tail->prev = n_node;
                    // n_node->prev->next = n_node; 
                    dll_hmap[key] = n_node;
                }

            }
            
        }

        // void adding(int key) {
        //     DLLNode* n_node = new DLLNode(key, tail, tail->prev);
        //     tail->prev = n_node;
        //     n_node->prev->next = n_node; 
        //     dll_hmap[key] = n_node;

        // }


    private: 
        std::unordered_map <int, DLLNode*> dll_hmap;
        DLLNode* root;
        DLLNode* tail;
        int cap;
        int cap_counter;
    };





    DLL* dub_list;
    //int cap;
    //int cap_counter;
    // std::unordered_map <int, int> hMap;
    // std::unordered_map <int, int> temp_hmap;
    // std::vector <int> v;
    
};

/**
 * Your LRUCache object will be instantiated and called as such:
 * LRUCache* obj = new LRUCache(capacity);
 * int param_1 = obj->get(key);
 * obj->put(key,value);
 */
