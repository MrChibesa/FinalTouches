#include <iostream>

using namespace std;

int main()
{
    string yourAnswer;
    string option[4] = {
        "A anything that has space and can force space \nB) anything that has money and can occupy space \nC) anything that has space and can gravity space \nD) anything that has space and can occupy space\n",
        "A) KK\nB) FTJC\nC) LBB\nD) MCS\n",
        "A) obed\nB)isaac\nC)stanley\nD)john\n",
        "A) God\nB) mosesi\nC) jonah\nD) elijah"
    };
    string questions[4] ={
        "what is matter",
        "who is the first president of zambia",
        "who is the first president of congo",
        "who created the heavens and the earth"
    };

    for(int i = 0; i<4; i++){
        cout <<"Q"<<i+1<<") "<<questions[i]<<endl;
        cout << option[i]<<endl;
        cout << "Answer: ";
        cin >> yourAnswer;
    };


    return 0;
}

