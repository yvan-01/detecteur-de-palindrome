#include<iostream>
#include<string>
#include<stdlib.h>
std::string mot,verif;
int var=0,d;
bool palindrome(std::string mot);
std::string filtre(std::string mot);
int length(std::string word);
int main(){
    std::cout<<"saisir l'expression :"<<std::endl;
    getline(std::cin,mot);
    verif = filtre(mot);
    if(palindrome(verif)){
        std::cout<<"la phrase [--("<<mot<<")--] est un palidrome"<<std::endl;
    }else{
        std::cout<<"la phrase [--("<<mot<<")--] n'est pas un palindrome"<<std::endl;
    }
    return 0;
}
bool palindrome(std::string mot){
    int debut = 0;
    int fin = mot.length()-1;
    while(debut<fin){
        if(mot[debut] != mot[fin]){
            return false;
        }
        debut++;
        fin--;
    }
    return true;
}
std::string filtre(std::string mot){
int taille = length(mot),i=0;
std::string final="";
for(i=0;i<=taille-1;i++){
if(mot[i]!=' ' && mot[i]!=';' && mot[i]!=':' && mot[i]!='.' && mot[i]!=',' && mot[i]!='"' && mot[i]!='!' && mot[i]!='?'){
final += mot[i];
}
}
return final;
}
int length(std::string word)
{
    int j = 0; 
    for(int i = 0; word[i] != '\0'; i++) 
    {
        j++;
    }
    return j; 
}