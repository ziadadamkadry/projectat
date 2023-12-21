#include <iostream>
#include <string>
using namespace std;

struct contact
{
    string name;
    string tel;
    contact* left;
    contact* right;
};

void addcontact(contact*& newcontact, string nme, string num){

    newcontact = new contact;
    newcontact->name = nme;
    newcontact->tel = num;
    newcontact->left = nullptr;
    newcontact->right = nullptr;
}

void adbol(contact*& root, string nme, string num){
    if(root == NULL){
    addcontact(root, nme, num);
    return;
    }
    if (nme < root->name){
        return adbol(root->left, nme, num);
    }
    else{
        return adbol(root->right, nme, num);
    }
}

void addtobook(contact*& root){
    string nme;
    string num;

    cout<<"enter a contact: ";getline(cin, nme);
    cout<<"enter it's number: ";getline(cin, num);cout<<endl;
    cout<<"contact added! ";cout<<endl;

    (adbol(root, nme, num));


}

string srchbolnum(contact*& root, string nme){
    if(root->name == nme){
        string nom;
        nom = root->tel;
        return nom;
    }
    if (nme < root->name){
        return srchbolnum(root->left, nme);
    }
    else{
        return srchbolnum(root->right, nme);
    }
}

bool srchbol(contact*& root, string nme){
    if(root == NULL){
        return false;
    }
    if(root->name == nme){
        return true;
    }
    if (nme < root->name){
        return srchbol(root->left, nme);
    }
    else{
        return srchbol(root->right, nme);
    }
}

void search(contact*& root){
    string nme;
    cout<<"enter the contact to be found: ";getline(cin, nme);
    if (srchbol(root, nme)){
        cout<<nme<<" is found and the number is "<<srchbolnum(root, nme); 
    }
    else{
        cout<<nme<<" is not found";
    }
}



int main()
{
    contact* root = nullptr;
    addtobook(root);
    addtobook(root);
    addtobook(root);
    search(root);

    return 0;

}
