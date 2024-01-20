#include <iostream>
using namespace std;
string vigenere(string text,string key ,bool EncDec);
int main(){
	string plaintext,key,ciphertext;
	char x; 
	cout<<"o--o                          o                            -o-o-o                          o                         "<<endl;
	cout<<"|                             |  o                    o     |   |                          |  o                      "<<endl;
	cout<<"O-o  o-o   o-o o-o o  o o-o  -o-   o-o o-o           /|     |   O  o-o  o-o o-o o  o o-o  -o-   o-o o-o              "<<endl;
	cout<<"|    |  | |    |   |  | |  |  |  | | | |  |         o-O-    |   |  |-' |    |   |  | |  |  |  | | | |  |             "<<endl;
	cout<<"o--o o  o  o-o o   o--O O-o   o  | o-o o  o           |    -o-o-o  o-o  o-o o   o--O O-o   o  | o-o o  o             "<<endl;
	cout<<"                      | |                                                          | |                               "<<endl;
	cout<<"                   o--o o                                                       o--o o                               "<<endl;
	cout<<""<<endl;
	cout<<"                                                                                                  -Raman Ray"<<endl;
	cout<<""<<endl;
	do{
		cout<<"Choose one of the following options: "<<endl;
		cout<<"[1] Encryption"<<endl;
		cout<<"[2] Decryption"<<endl;
		cout<<"[3] Exit"<<endl;
		int options;
		cin>>options;
		switch(options){
			case 1:
				cout<<"[*]Enter the plain text:-"<< endl;
				cin>>plaintext;
				cout<<"[*]Enter the key:-"<<endl;
				cin>>key;
				
				ciphertext=vigenere(plaintext,key,0);
				cout<<"(^.^) Cipher text: "<<ciphertext<<endl;
				cout<<"[*]Enter Y/y to repeat the process or ant key to exit"<<endl;
				cin>>x;
				break;
			case 2:
				cout<<"[*]Enter the cipher text:-"<< endl;
				cin>>plaintext;
				cout<<"[*]Enter the key:-"<<endl;
				cin>>key;
				
				ciphertext=vigenere(plaintext,key,1);
				cout<<"(^.^) Plain text: "<<ciphertext<<endl;
				cout<<"[*]Enter Y/y to repeat the process or ant key to exit"<<endl;
				cin>>x;
				break;
			case 3:
				x='n';
				break;
	
	
	}
	
		
			
	}while(x=='Y'||x=='y');
}
string vigenere(string text,string key ,bool EncDec){
	string newkey=key,newtext;
	while(newkey.length()<text.length()){
		newkey+=key;
	}
	if(EncDec==0){
		for(int i=0;i<text.length();i++){
			newtext+=(text[i]+newkey[i])%26 +65;
		}
	}
	else{
		for(int i=0;i<text.length();i++){
			newtext+=(text[i]-newkey[i]+26)%26 +65;
		}
	}
	return newtext;
}
