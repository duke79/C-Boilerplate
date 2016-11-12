#include <iostream>
using namespace std;
#include <string>

int main_()
{
  // Your code here
	return 0;
}

// Do not put your code below this line
//************************************
/////////// Stream redirection and all
#include <fstream>
void main()
{
	std::ifstream in("Inputs.txt");
    std::streambuf *cinbuf = std::cin.rdbuf(); //save old buf
    std::cin.rdbuf(in.rdbuf()); //redirect std::cin to in.txt!

	std::ofstream out("Outputs.txt");
    std::streambuf *coutbuf = std::cout.rdbuf(); //save old buf
    std::cout.rdbuf(out.rdbuf()); //redirect std::cout to out.txt!

	main_();
}
