// 2.5 型の別名定義
// 2.5.2 ネストした型名

#include <iostream>

class data
{
  public:
      using integer = int;

      integer get_value();
      void set_value(integer new_value);
  private:
      integer value;
};

// クラスの外なのでスコープ解決演算子を使用
data::integer data::get_value()
{
  return value;
}

// メンバー関数の中はクラスの内側なので、スコープ解決演算子を使う必要はない
void data::set_value(integer new_value)
{
  integer tmp = new_value;
  value = tmp;
}

int main()
{
  data d;

  using integer = data::integer;

  integer value = 42;
  d.set_value(value);

  std::cout << d.get_value() << std::endl;
}
