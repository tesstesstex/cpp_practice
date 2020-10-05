// 3 クラス
// 3.5 継承の概要
// 3.5.4 純粋仮想関数と抽象クラス

/* 基底クラスでは宣言のみで、派生クラスで必ずオーバライドさせるものを純粋仮想関数と呼ぶ。 */
/* ここでは図形の形状を扱うクラスを作成する。 */

#include <iostream>
#include <string>

// 純粋仮想関数を持つクラスを抽象クラスと呼ぶ
class Shape
{
  public:
    virtual float area() const = 0; // 面積を求める純粋仮想関数
    virtual float perimeter() const = 0; // 周囲帳を求める純粋仮想関数
};

/* 純粋仮想関数は関数本体を持たないため、メンバー関数の定義は無い */
// 長方形
class Rectangle : public Shape
{
  float height;
  float width;

  public:
    // explicit は暗黙のコンストラクター呼び出しを禁止するための指定子
    explicit Rectangle(float height, float width); // 委譲元コンストラクターの宣言？
    /* 委譲コンストラクターとは？ */
    /* 通常の関数：他のオーバーロードを呼べる */
    /* コンストラクター：自動で呼ばれるものなので直接呼び出せない */
    /* コンストラクター内部でのみ使用できる、他のコンストラクター呼び出し方法 */
    /* →これを委譲コンストラクターと呼ぶ */

    float area() const override;
    float perimeter() const override;
};

// これなんやっけ
Rectangle::Rectangle(float height, float width) // 委譲元コンストラクターの定義
  : height(height), width(width) // 委譲先コンストラクターの呼び出し
{
}

float Rectangle::area() const
{
  return height * width;
}

float Rectangle::perimeter() const
{
  return 2 * (height + width);
}

class Circle : public Shape
{
  float r;

  public:
    explicit Circle(float r);
    float area() const override;
    float perimeter() const override;
};

Circle::Circle(float r) : r(r)
{
}

float Circle::area() const
{
  return r * r * 3.14f;
}

float Circle::perimeter() const
{
  return 2 * r * 3.14f;
}

int main()
{
  Rectangle rect(10, 2);
  std::cout << "rect" << std::endl;
  std::cout << "Area: " << rect.area() << std::endl;
  std::cout << "Perimeter: " << rect.perimeter() << std::endl;

  Circle circle(4);
  std::cout << "circle" << std::endl;
  std::cout << "Area: " << circle.area() << std::endl;
  std::cout << "Perimeter: " << circle.perimeter() << std::endl;
}
