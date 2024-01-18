#include <iostream>
#include <string>
#include <stack>

using namespace std;

int main(){

    int n;

    cin >> n;

    cin.ignore();

    stack<char> pilha;
    bool validacao = true;

    while(n--){
        string expressao;

        getline(cin,expressao);

        if(expressao.empty() == false){

            for(int i = 0; i < expressao.size(); i++){

                if(expressao[i] == '{'){
                    pilha.push('{');
                }else if(expressao[i] == '}'){

                    if(pilha.empty() == true){
                      validacao = false;
                      break;
                    }else{
                        pilha.pop();
                    }

                }
            }

        }

    }

    if(pilha.empty() == false){
        validacao = false;
    }

    if(validacao == true){
        cout << "S" << endl;
    }else{
        cout << "N" << endl;
    }

    return 0;
}
