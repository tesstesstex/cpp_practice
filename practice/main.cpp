// 3 クラス
// 3.5 継承の概要
// 3.5.2 仮想関数とオーバーライド

#include <iostream>

class Base // 基底となるクラス
{
  public:
    void foo();
};

void Base::foo()
{
  std::cout << "foo()" << std::endl;
}

class Derived : public Base // Base のメンバーを継承する
                            // public はBase のメンバー関数をpublic のまま継承するという意味
{
  public:
    void bar();
};

void Derived::bar()
{
  std::cout << "bar()" << std::endl;
}

int main()
{
  Base base;
  base.foo(); // 基底クラスのfoo が呼ばれる

  // base.bar(); // エラー。基底クラスには派生クラスで追加したメンバーは存在していない。

  Derived derived;
  derived.foo(); // 基底クラスのfoo が呼ばれる
  derived.bar(); // 派生クラスで追加したbar が呼ばれる
}
