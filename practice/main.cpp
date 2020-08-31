#include <iostream>

// 列挙体
enum class Category
{
  Value1, // 0
  Value2, // 1
  Value3 = 100,
  Value4, // 101
};

int main()
{
  // 列挙体の変数を宣言してValue3で初期化
  // 列挙体名と列挙値をスコープ解決演算子::でつなげるとその値を使うことができる
  Category cat = Category::Value3;

  std::cout << static_cast<int>(cat) << std::endl;
}
