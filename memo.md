# メモ
## 基本
- 要素数が多い配列は大域変数として宣言する
10^6個要素がある配列をmain関数内で宣言したらsefmentation faultになった。
大域変数で宣言したら問題なく動いた。

## 標準ライブラリ(STL)
### 型変換
- int -> string  
```
int n;
string s = to_string(n);
```
### cout
```
cout << setprecision(x) << y;
```
小数点x桁、yを出力

```
cout << H << ':' << setw(2) << setfill('0') << M << '\n';
```
Mを2桁で表示して、足りなかったら0埋めする

### map
連想配列的なもの
- 宣言
`map<(型1), (型2)> (変数名)`  
型1: 添え字の型  
型2: 入れるデータの型  
- アクセス
配列と同じ  
ex) `map<int, int> a; a[0] = 0;`
- (入れるデータの型がintの時)要素が入っていないときは0を返す

### set
集合(重複なし)
- 宣言  
`set<(型)> (変数名)`
- 全要素探索
```
set<int> Set
for(auto itr = Set.begin(); itr != Set.end(); itr++) {
    cout << (*itr) << endl;
}
```

### multiset
集合（重複あり）
- 宣言
`multiset<(型)> (変数名);`
- 追加
`mst.insert(x);`
- 削除
`mst.erase(x);`
  - xがイテレータの場合、一つだけ削除
  - それ以外の場合は、入力した値と等しい要素をすべて削除
- 最小値のイテレータ
`mst.begin();`
- 最大値のイテレータ
`mst.rbegin();`
- イテレータの値を参照
`*mst.begin();`
- 値の検索
`mst.find(x);`
  - 値が存在する場合はそのイテレータを返す
  - 値が存在しない場合は`mst.end()`を返す

### vector
- 初期化
```
vector<int> a(4, 5) //要素数4、値5で初期化
```
- コピー
```
vector<int> origin, copied;
copy(origin.begin(), origin.end(), back_inserter(copied) );
```
- 二次元配列
```
vector<vector<int>> a(n);
```

### deque
```
    deque<int> d;
    d.push_front(); //先頭に挿入
    d.front();      //先頭の要素を参照
    d.pop_front();  //先頭の要素を削除
    d.push_back();  //末尾に挿入
    d.back();       //末尾の要素を参照
    d.pop_back();   //末尾の要素を削除
```

## アルゴリズム
### bit全探索
```
int n = 100;
// {0, 1, ..., n-1} の部分集合の全探索
for (int bit = 0; bit < (1<<n); bit++) {
    for (int i = 0; i < n; ++i) {
        if (bit & (1<<i)) { // 列挙に i が含まれるか
        }
    }
}
```