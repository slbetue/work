#include<iostream>
#include<string>
#include<vector>
#include<queue>
#include<map>
using namespace std;

typedef struct HuffmanNode{
    int weight;
    char data;
    int lchild,rchild,parent;
}HuffNode,*HuffmanTree;

string InputCode();
map<char,int> analysecode(string source);
HuffmanTree CreateHuffTree();
string CreateHuffmanCode(HuffmanTree Tree);

int main()
{
    string code;
    string HuffmanCode;
    HuffmanTree HT;
    code = InputCode();
    HT = CreateHuffTree(code);
    return 0;
}

string InputCode(){
    string C;
    getline(cin,C);
    return C;
}
map<char,int> analysecode(string source){
    map<char,int> m;
    for(auto i : source){
        m[i]++;
    }
    return m;
}

bool comp(const pair<char,int>& lpair,const pair<char,int>& rpair) {
    return lpair.second < rpair.second;
}
HuffmanTree CreateHuffTree(){
    priority_queue<pair<string,int>,vector<pair<string,int>>,comp> pr;

    return 
}
