#include <iostream>
#include <string>
#include <bitset>



std ::string charToBinary(char c){
    std:: bitset<8> bin(c);
    return bin.to_string();
}



int main(){
    std:: string nombreE="N";
    std:: string nombreM="M";


    //Imprimir cada caraxter utilianodo un bucle for
    for(int i=0; i<nombreE.length(); i++){
        std:: cout<<"Inicial N: "<<charToBinary(nombreE[i])<<std::endl;

        std:: cout<<"Inicial M: "<<charToBinary(nombreM[i])<<std::endl;
    }
    std::cout<< std::endl;

return 0;


}
