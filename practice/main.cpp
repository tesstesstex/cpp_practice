// 3 クラス
// 3.5 継承の概要
// 3.5.2 仮想関数とオーバーライド

#include <iostream>

class Base // 基底となるクラス
{
  public:
    virtual void foo();
};

void Base::foo()
{
  std::cout << "foo()" << std::endl;
}

class Derived : public Base // Base のメンバーを継承する
                            // public はBase のメンバー関数をpublic のまま継承するという意味
{
  public:
    void foo() override; // 派生クラスでメンバー関数をオーバーライド
    void foo(int i);
};

void Derived::foo()
{
  std::cout << "Derived::foo() override" << std::endl;
}

void Derived::foo(int i)
{
  std::cout << "Derived::foo(" << i << ")" << std::endl;
}

int main()
{
  Derived derived;
  derived.foo(); // 仮想関数呼び出し
  derived.foo(42); // 仮想関数ではないオーバーロードの呼び出し
}
