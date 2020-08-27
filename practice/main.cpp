#include <iostream>

// 2.1.1 構造体 struct
struct product
{
  int id;
  int price;
  int stock;
};

int main()
{
  product pen;

  pen.id = 0;
  pen.price = 100;
  pen.stock = 200;

  product* ptr = &pen; // 構造体変数へのポインター

  std::cout << "商品ID: " << ptr->id << std::endl;
  std::cout << "単価: " << ptr->price << std::endl;
  std::cout << "在庫数: " << ptr->stock << std::endl;
}
