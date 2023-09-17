//7-change from decimal to binary and vice versa
#include <iostream>
#include <bitset>

unsigned long from_bin2dec( std::bitset<8> bin){
    return bin.to_ulong();
    }

std::bitset<8> from_dec2bin(unsigned long a){
   
    return std::bitset<8>(a); 
    }


int main(){
    std::bitset<8> binary("01000101");
    std::cout <<"binary: " << binary <<"\t" << "decimal: "<< from_bin2dec(binary)<< std::endl;
    int d = 70;
    std::cout <<"decimal: " << d <<"\t\t" << "binary: "<<from_dec2bin(d)<< std::endl;


return 0 ;
}
