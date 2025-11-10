
#include <iostream>

//flow control


//while

int main(){
    int curr = 0 , cnt = 0 , val = 0;

    if (std::cin >> curr){
        ++cnt;
        while(std::cin >> val){

            if (curr == val){
                ++cnt;
            }
            else{
                std::cout <<curr<< " occurs "<< cnt << " times "<< std::endl;
                curr = val;
                cnt = 1;

            }
        } 
        std::cout <<curr<< " occurs "<< cnt << " times "<< std::endl;
                


    }
    return 0;
}