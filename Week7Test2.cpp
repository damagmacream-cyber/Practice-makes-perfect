#include <iostream>

int main() {
//	int secretMessage,countUpper,lowercaseAsciiSum,countLower;
//	while(ch!='#'){
//		cout<<"Enter ch: ";
//		cin<<ch;
//		if(ch>='A'&&ch<='Z'){
//			secretMessage+=ch;
//			countUpper++;
//		}else if(ch>='a'&&ch<='z'){
//			lowercaseAsciiSum+=static_cast<int>(ch);
//			countLower++;
//		}
//	}
	int total=0;
	for(int i=1; i<=3;i++){
		for(int j=1; j<=5;j++){
			if(j==3){
				std::cout<<"skipped"<<std::endl;
				continue;
			}
			total+=i;
			std::cout<<"j "<<j<<" i "<<i<<std::endl;
		}
	}

	std::cout<<"total: "<<total;
}
