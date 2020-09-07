// 3 クラス
// 3.1 const メンバー関数とmutable
// 3.1.2 const/非const メンバー関数間のオーバーロード

#include <iostream>

class product
{
  int id;

  public:
    int get_id();
    int get_id() const;
};

int product::get_id()
{
  std::cout << "not const" << std::endl;
}

int product::get_id() const
{
  std::cout << "const" << std::endl;
}

int main()
{
  product p;
  p.get_id();

  const product cp{};
  cp.get_id();
}
