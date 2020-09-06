// 2.6 コンソールからの入力
// 2.6.2 文字列の入力
#include <iostream>
#include <string>

int main()
{
  /* std::string s; */
  /* std::cout << "文字列を入力しなさい！> "; */
  /* std::cin >> s; */
  /* std::cout << "入力された文字列は\"" << s << "\"です" << std::endl; */

  std::string sl;
  std::cout << "文字列を入力しなさい！> ";
  std::getline(std::cin, sl); // 1行全体の文字列入力を受け取る
  std::cout << "入力された文字列は\"" << sl << "\"です" << std::endl;
}
