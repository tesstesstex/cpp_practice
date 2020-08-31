// chapter 2.2 class
#include <iostream>

class product
{
  int id;
  int price;
  int stock;

  public:
    int get_id();
    void set_id(int new_id);
    int get_price();
    void set_price(int new_price);
    int get_stock();
    void set_stock(int new_stock);
};

int product::get_id()
{
  return id;
}

void product::set_id(int new_id)
{
  id = new_id;
}

int product::get_price()
{
  return price;
}

void product::set_price(int new_price)
{
  if (new_price < 0)
  {
    std::cout << "error: You must set price over 0." << std::endl;
    return;
  }
  price = new_price;
}

int product::get_stock()
{
  return stock;
}

void product::set_stock(int new_stock)
{
  if (new_stock < 0)
  {
    std::cout << "error: You must set stock over 0." << std::endl;
    return;
  }
  stock = new_stock;
}

int main()
{
  product pen;

  pen.set_id(0);
  pen.set_price(100);
  pen.set_stock(200);

  // pointer for an instance
  product* ptr = &pen;
  std::cout << "id: " << ptr->get_id() << std::endl;
  std::cout << "price: " << ptr->get_price() << std::endl;
  std::cout << "stock: " << ptr->get_stock() << std::endl;
}
