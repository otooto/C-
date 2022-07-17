# 標準入力関係

C言語の標準入力関係について述べていく

以下に標準入力に使える関数を記述する。

- puts
- fgets
- sscanf
- atoi

## puts

文字列を出力するのに特化している関数。変数は無理

正常に処理が成功した場合、おそらく文字列の値が返される。失敗した場合にはEOFが返ってくるらしい。

```
int n;

n = puts("test");

printf("%d\n",n);

--ターミナル出力---------------------
test
5
```

# fgets

入力ストリーム(データの流れ)から文字列を取得することができる。

```
fgets(str,numchars,stream)
```
- str : 受け取る文字列変数
- numchars : 受け取る最大の文字数
- stream : 構造体へのポインタ

streamでストリームを決めたら流れてきたデータをstrへ渡す。なお受け取る数はnumcharsで制限する。

以下のようにすることで、標準入力の受け取りに使える

```
fgets(str,sizeof(str),stdin);
```

- str : 受け取る文字列を代入するchar型の配列
- sizeof(str) : sizeofでstrに合わせた最大文字数を決める事ができる。
- stdin : キーボードからの標準入力を受け取る標準ストリーム

# sscanf

文字列から書式付きデータを読みだす事ができる。書式を指定できるので同時にキャストも行える。

```
sscanf(str,format,locale);
```

- str : 使用するデータ
- formata : 書式指定
- locale : データの格納場所

strから渡されたデータがformatに従って型変換されて、localeで指定した変数やアドレスに渡される。

# fgetsとsscanfを使用する。