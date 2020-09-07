// 3 クラス
// 3.1 const メンバー関数とmutable
// 3.1.1 メンバー変数を変更する/しない関数

#include <iostream>

class product
{
  int id;
  public:
    int get_id() const;
    void set_id(int new_id);
};

int product::get_id() const
{
  return id;
}

void product::set_id(int new_id)
{
  id = new_id;
}

int main()
{
  const product cp{};
  std::cout << cp.get_id() << std::endl;
}
