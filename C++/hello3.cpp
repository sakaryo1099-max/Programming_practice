//hello3.cpp
#include <iostream>
#include <string>
using namespace std;

int main()
{
    string name;
    int age;

    cout<<"こんにちは．私はコンピュータです．"<<endl;
    cout<<"あなたの名前を入力してださい．"<<endl;
    cin>>name; //名前の入力

    cout<<name<<"さん．よろしく，"<<endl;

    cout<<"ところで，"<<name<<"さん．失礼ですがお年はいくつですか？"<<endl;
    cout<<"入力は半角数字で．"<<endl;
    cin>>age; //年の入力

    cout<<"なるほど．"<<age<<"歳ですか．"<<endl;
    cout<<"私は100歳のマシンです．"<<endl;
}