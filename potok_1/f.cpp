// на сколько сосисок у меня хватит кэша
#include <iostream>
using namespace std;

int main(){
    int d, c, n, di, ci; 
    /*
    d - долларовая часть цены сосиски
    c - центовая часть цены сосиски
    n - колличество сосисок
    di - мои доллары
    ci - мои сосиски
    */
    cin >> d >> c >> n >> di >> ci;
    int x = (di * 100 + ci) - (d * 100 + c) * n;
    if(x > 0){
        cout << x / 100 << " " << x % 100; // сколько долларов и центов (1 доллар = 100 центов)
    }else{
        cout << -1;
    }


    return 0;
}