// 3 クラス
// 3.1 const メンバー関数とmutable
// 3.1.2 const/非const メンバー関数間のオーバーロード

#include <iostream>

class heavy_class
{
  int m_value;

  mutable int m_cache;
  mutable bool m_cache_valid;

  public:
    int generate() const;
    void set(int value);
    int get() const;
};

int heavy_class::generate() const
{
  std::cout << "function to create very heavy data" << std::endl;
  return m_value;
}

void heavy_class::set(int value)
{
  // 本来はセットされたタイミングで最終的に使うデータを生成できるとよいが、
  // 処理が重い場合には必要になるまで生成しないこともある
  m_cache_valid = false; // キャッシュを無効化
  m_value = value;
}

int heavy_class::get() const
{
  // キャッシュが有効ならそれを返す
  if(m_cache_valid) { return m_cache; }

  // 本来はconst メンバー関数はメンバー変数を変更できないが
  // mutable なメンバー変数は変更できる
  m_cache = generate(); // データを生成してキャッシュに保存
  m_cache_valid = true; // キャッシュを有効化

  return m_cache;
}

int main()
{
  heavy_class heavy_object;
  heavy_object.set(100);
  std::cout << heavy_object.get() << std::endl;
  // データ生成関数は呼ばれずにキャッシュが返される
  std::cout << heavy_object.get() << std::endl;

  heavy_object.set(200);
  std::cout << heavy_object.get() << std::endl;
  // データ生成関数は呼ばれずにキャッシュが返される
  std::cout << heavy_object.get() << std::endl;
}
