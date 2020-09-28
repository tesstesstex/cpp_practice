// 3 クラス
// 3.4 デフォルトの初期値
// 3.4.1 メンバー変数の初期値

#include <iostream>

class S
{
  public:
    int answer = 42; // NSDMI
    float pi{ 3.14159265f }; // NSDMI
};

int main()
{
  S s; // NSDMI によってデフォルト値で初期化される
  std::cout << "s.answer: " << s.answer << std::endl;
  std::cout << "s.pi: " << s.pi << std::endl;
}
