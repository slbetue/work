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
HuffmanTree CreateHuffTree(map<char,int> map_1);
string CreateHuffmanCode(HuffmanTree Tree);

int main()
{
    string code;
    map<char,int> mapcode;
    string HuffmanCode;
    HuffmanTree HT;
    code = InputCode();
    mapcode = analysecode(code);
    HT = CreateHuffTree(mapcode);
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
struct comp{
    bool operator()(const pair<char,int>& lpair,const pair<char,int>& rpair) {
        return lpair.second < rpair.second;
    }
};

HuffmanTree CreateHuffTree(map<char,int> s){
    priority_queue<pair<char,int>,vector<pair<char,int>>,comp> pr;
    for(const auto i : s){
        pr.push(i);
    }
    int n = pr.size();
    HuffmanTree HTree = new HuffNode[2 * n];
    int i = 1;
    while(!pr.empty())
    {
        HTree[i].data = pr.top().first;
        HTree[i].weight = pr.top().second;
        
    }
    return HTree;
}
