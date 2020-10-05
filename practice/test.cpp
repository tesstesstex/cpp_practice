#include <iostream>
#include <string>

    /* コンストラクターとは？ */
    /* クラスの初期化を行うための特殊なメンバー関数のこと。 */
    /* クラスと同じ名前でメンバー関数を記述することで定義できる。 */
    /* 特徴としては、①戻り値の方がない、②メンバー初期化リストを書く、の二点 */

    /* 委譲コンストラクターとは？ */
    /* 通常の関数：他のオーバーロードを呼べる */
    /* コンストラクター：自動で呼ばれるものなので直接呼び出せない */
    /* コンストラクター内部でのみ使用できる、他のコンストラクター呼び出し方法 */
    /* →これを委譲コンストラクターと呼ぶ */

class person
{
  // メンバー変数の宣言
  std::string m_name;
  int m_age;
  // メンバー関数？←違う
  // コンストラクターの宣言
  person(int age);

public:
  // デフォルトコンストラクター、コンストラクターのユーザー定義がなくとも自動的に定義される。
  person();
  // コンストラクターもオーバーロード可能
  person(std::string name, int age);

  void set_name(std::string name);
  void set_age(int age);

  std::string name() const;
  int age() const;
};

// 共通な初期化処理が書かれたコンストラクター
person::person(int age) : m_age(age)
{
  /* メンバー初期化リストにm_age を記述する場合、しない場合で以下の出力処理を比較すると、 */
  /*   記述時はともに15、しない場合はm_age は272056357 が出力される。 ←なんでしない場合も出力できるのかわからん */
  /* std::cout << m_age << std::endl; */
  /* std::cout << age << std::endl; */
  std::cout << "kyotsu constructor call" << std::endl;
}

person::person() // 委譲元コンストラクター(引数なし)
  : person(-1) // 委譲先コンストラクター
{
  std::cout << "hikisu nashi constructor call" << std::endl;
}

person::person(std::string name, int age) // 委譲元コンストラクター（名前と年齢を与えて初期化）
  : person(age) // 委譲先コンストラクター
{
  std::cout << "hikisu tsuki constructor call" << std::endl;
  set_name(name);
}

void person::set_name(std::string name)
{
  m_name = name;
}

void person::set_age(int age)
{
  m_age = age;
}

std::string person::name() const
{
  return m_name;
}

int person::age() const
{
  return m_age;
}

int main()
{
  person alice("alice", 15); // 名前＋年齢コンストラクターオーバーロードが呼ばれる
  std::cout << alice.name() << std::endl;
}
