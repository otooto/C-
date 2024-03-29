# 文字列

C言語では、文字列を処理するとき、1文字ずつ分解して文字とするか、文字列の先頭アドレスを関数に渡して処理するかになる。

# 文字列の仕様

```
'A' = 文字リテラル
"A" = 文字列
```
文字列リテラルは1文字かつ文字列の先頭アドレスにあたる。

# whileループ

文字列の最後に\0(NULL文字)が入る事を利用して、終端文字に到達したらループを抜ける処理を書いている。

ex) str_while.c

```
int i = 0;
//挙動として、文字列を全て出力した後、iを先に更新してstr[i]で比較するので想定通り動く
while (str[i] != '\0'){
    i++;
}
```
## 配列とポインタ

配列の先頭要素を指すポインタと、配列そのものを指すポインタが別に存在する。
配列に&を付ける事で得る事ができる

```
const char (*C)[6] = &"Hello";
```
配列を指すポインタは複数の要素をまとめた「配列全体」を指し示す。

配列のアドレスはそれを構成するバイト列の先頭になるので、実態としては配列の先頭要素のポインタと同じ場所を指しているが、指している先が何であるのかという違いがある。

## %sの機能

受け取ったアドレスから\0までのデータを出力するという解釈

## ポインタ変数について

```
char *result;
result = ""hello;
```

- resultという名前の変数を用意
- result変数はポインタ変数。この変数の値はアドレスになる。
- アドレスのメモリはchar型(ないしchar型配列)

例えば32bitコンピュータのアドレスは32bit,64bitなら64bit,なので32bitなら4バイト、64bitなら8バイト必要になる。この4バイトor8バイト分をまとめて一つのアドレスを記憶する。

メモリは連続することになるので、1文字を指すポインタも、文字配列を指すポインタも同じ格好になる。

文字リテラルの値は、その文字列がある先頭アドレス4バイト分の事。result変数はその4バイト分のアドレスを持つ。

CPUはリトルエンディアン。

*resultはresultポインタが指すメモリの値であること。つまり　*resultの値は'H'を表現する値。

もしprintfが*resultから`H`をもらった。じゃあ次のeにはどうやってアクセスする？

じゃあ逆にresultを渡したら？

resultでは`H`が格納されているアドレスを渡している。後はアドレスを連番で呼んで\0に辿り着くまで出力する。

# 文字列によるメモリ破壊

char_memory_break.cを実行すると次のようになった。

```
//1回目
str1 = [abcdef]
str2 = [f]
//2回目
str1 = [abcdeabcdefghijk]
str2 = [abcdefghijk]
*** stack smashing detected ***: terminated
Aborted
```

これはメモリ破壊が起きている。str1は本来5バイト、str2は10バイトしか領域を確保していない。しかし両者ともそれを超えた領域文の文字列を代入している。

アドレスを見ると、２つの変数は5バイト分の余剰があった。なので6バイト目にあるfが次にわたってしまっている。

printfの使用はNULLまで出力を続けるのでstr2に格納したはずの文字列まで出力している。

これがメモリ破壊となる。






