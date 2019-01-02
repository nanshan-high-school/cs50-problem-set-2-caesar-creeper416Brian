#include <iostream>
using namespace std;
int main() {

char code[20] ;
 cout << "請輸入文字:";
 cin >> code ;

int key;
 cout << "\n請輸入密鑰:";
 cin >> key ;


for (int i = 0; i < 20;i++) {
  if (code[i] <='z' && code[i] >= 'a')
  cout << (char) ((code[i] - 'a' + key) % 26+ 'a');

  else if (code[i] <='Z' && code[i] >= 'A')
  cout << (char) ((code[i] - 'A' + key) % 26+ 'A');


}
}
