#include <iostream>
#include <string>
using namespace std;

struct Contact
{
    string name;
    string tel;
    Contact* left;
    Contact* right;
};

void addEntry(Contact*& root, string& name,  string& tel) 
{
    Contact* newContact = new Contact(name, tel);

    if (root == nullptr) 
    {
        root = newContact;
    } 
    else 
    {
        Contact* temp = root;
        while (true) 
        {
            if (name < temp->name) 
            {
                if (temp->left == nullptr)
                {
                    temp->left = newContact;
                    break;
                } 
                else 
                {
                    temp = temp->left;
                }
            } 
            else 
            {
                if (temp->right == nullptr)
                {
                    temp->right = newContact;
                    break;
                } 
                else
                {
                    temp = temp->right;
                } 
            }
        }
    }

    cout << "added successfully." << endl;
}
void addcontact(string& name, string& tel) 
{
    cout << "Enter the name: ";
    getline(cin, name);
    cout << "Enter the telephone number: ";
    getline(cin, tel);
}

int main()
{
    return 0;

}
