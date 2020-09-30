// 3 クラス
// 3.5 継承の概要
// 3.5.3 名前の隠蔽

#include <iostream>

class Base
{
  public:
    virtual void foo();
};

void Base::foo()
{
  std::cout << "Base::foo()" << std::endl;
}

class Derived : public Base
{
  public:
    using Base::foo; // 基底クラスのfoo()を呼び出せるようにする
    void foo(int v); // 派生クラスで追加したオーバーロード
};

void Derived::foo(int i) // v に揃えなくてもOK
{
  std::cout << "Derived::foo(" << i << ")" << std::endl;
}

int main()
{
  Derived derived;
  derived.foo(); // 基底クラスのfoo()が呼ばれる
  derived.foo(42); // 派生クラスで追加したオーバーロードの呼び出し
}
