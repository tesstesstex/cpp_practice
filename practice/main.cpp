// 3 クラス
// 3.4 デフォルトの初期値
// 3.4.2 メンバー初期化リストと初期値

#include <iostream>
#include <string>

class Book
{
  std::string title = "";
  int         page = 0;

  public:
    Book();
    explicit Book(std::string title, int page);

    void show() const;
};

// page はメンバー初期化リストで省略したのでNSDMI のデフォルト値を使って初期化される
Book::Book() : title("untitled")
{

}

// メンバー初期化リストで与えた初期値が使われる
Book::Book(std::string title, int page) : title(title), page(page)
{

}

void Book::show() const
{
  std::cout << title << " " << page << "ページ" << std::endl;
}

int main()
{
  Book nsdmi;

  nsdmi.show();
  Book old_edition{"独習C++ 第4版", 568};

  old_edition.show();
}
