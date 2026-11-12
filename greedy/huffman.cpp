#include <iostream>
#include <queue>
#include <vector>
#include <unordered_map>
#include <string>
using namespace std;

struct Node {
    char ch;
    int freq;
    Node* left;
    Node* right;
};

struct Compare {
    bool operator()(Node* a, Node* b) const {
        return a->freq > b->freq;
    }
};

Node* createNode(char ch, int freq, Node* left = nullptr, Node* right = nullptr) {
    Node* node = new Node();
    node->ch = ch;
    node->freq = freq;
    node->left = left;
    node->right = right;
    return node;
}

void buildCodes(Node* root, string code, unordered_map<char, string>& codes) {
    if (!root) return;
    if (!root->left && !root->right) {
        codes[root->ch] = code;
        return;
    }
    buildCodes(root->left, code + '0', codes);
    buildCodes(root->right, code + '1', codes);
}

int main() {
    string text;
    cout << "Enter a string: ";
    getline(cin, text);

    unordered_map<char, int> freqMap;
    for (char c : text) {
        if (c != ' ') freqMap[c]++;
    }

    priority_queue<Node*, vector<Node*>, Compare> pq;
    for (auto& entry : freqMap) {
        pq.push(createNode(entry.first, entry.second));
    }

    while (pq.size() > 1) {
        Node* left = pq.top(); pq.pop();
        Node* right = pq.top(); pq.pop();
        Node* parent = createNode('\0', left->freq + right->freq, left, right);
        pq.push(parent);
    }

    unordered_map<char, string> codes;
    buildCodes(pq.top(), "", codes);

    cout << "\nHuffman codes:\n";
    for (auto& entry : codes) {
        cout << entry.first << " -> " << entry.second << "\n";
    }
    return 0;
}
