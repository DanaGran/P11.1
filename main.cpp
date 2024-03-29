#include <iostream>
#include <map>



int main(){

    int n;
    std::string animal;
    std::string sir;
    std::map<std::string, std::string>mat;
    std::string exemple;
    char c;
    std::cin>>n;
    getchar();
    for( int i =0 ;i <n ;i++){

        getline(std::cin, animal , ',');
        getline(std::cin, sir);
        mat.insert( { animal , sir } );

    }
    while(std::cin>>exemple){
        int ok= 0;
        for( const auto it: mat)
        {
            if(exemple==it.first){
                std::cout<<it.first<<": "<<it.second;
                ok=1;
            }

        }
        if( ok==0)std::cout<<exemple<<": -";
        std::cout<<std::endl;

    }
}
