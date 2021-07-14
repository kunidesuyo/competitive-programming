# STL(C++)まとめ
## map
ハッシュテーブルみたいなの？  
int型の番地にint型の変数を記録  
`map<int, int> m;`  
要素すべてにアクセス
`for(const auto& [key, value] : m) {`
`   cout << key << "=>" << value << endl;`
`}`
