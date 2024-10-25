#include "geral.h"

void RemoverItem(string ArquivoTemp){
    vector<string> Itens;
    string ItemID, PrimeiroItem;
    MontarVetor(Itens, ArquivoTemp);
    int i = 0, ID, PrimeiroID;
    
    PrimeiroItem = Itens[0];
    stringstream  ss1(PrimeiroItem);
    ss1 >> PrimeiroID;


    for (auto& item : Itens){
        cout << "Item: "<< item << endl;
    }
    cout << "Digite o ID do item que deseja remove: " << endl;
    cin >> ID;
    
    ofstream Arq(ArquivoTemp);

    for (auto& item: Itens){
        i++;
        stringstream ss (item);

        getline(ss, ItemID, ',');

        if (ID == PrimeiroID){
            if (!item.empty()){
                Itens.erase(Itens.begin());
                break;
            }
            
        }else if(ID == stoi(ItemID)){
            
            Itens.erase(Itens.begin() + (i-1));
            break;
        }
    } 
    for (auto& item : Itens){
        Arq << item << "\n";
    }
    
}