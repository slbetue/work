#include<iostream>
#include<string>
#include<vector>
using namespace std;

typedef struct HuffmanNode{
    int weight;
    char data;
    int lchild,rchild;
}HuffNode,*HuffmanTree;

string InputCode();
string CreateHuffmanCode(string source);
void CreateHuffTree(HuffmanTree H,string Code);

int main()
{
    string code;
    string HuffmanCode;
    code = InputCode();
    HuffmanCode = CreateHuffmanCode(code);
}

string InputCode(){
    string C;
    getline(cin,C);
    return C;
}
string CreateHuffmanCode(string source){

}
void CreateHuffTree(HuffmanTree &H,string Code){
    H = new HuffNode[m];
    for(int i = 1;i <= n;++i){
        cin >> H[i].weight;
    }
}