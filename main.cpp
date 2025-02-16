// lycky ticket
#include <iostream>
using namespace std;

int fun(int n) {
   int a = n / 100000;
   int b = n / 10000 % 10;
   int c = n / 1000 % 10;
   int d = n / 100 % 10;
   int e = n / 10 % 10;
   int f = n % 10;
   if (a + b + c == d + e + f) {
      return 1;
   } else {
      return 0;
   }
}
int main() {
   int x;
   cin >> x;
   cout << fun(x)
   return 0;
}

//while
int main() {
   int N, f = 1;
   cin >> N;
   while (f * f <= N) {
      cout << f * f << " " << endl;
      f++;
   }
   return 0;
}

//for
int main() {
   int N, a = 0;
   cin >> N;
   for (int i = 1; i <= N; i++) {
      a = a + i * i;
   }
   cout << a << endl;
   return 0;
}

//function
int fun (int a, int b, int c, int d) {
   if (a > b) {
      a = b;
   } else if (a > c) {
      a = c;
   } else if (a > d); {
      a = d;
   }
   return a;
}
int main() {
   int a, b, c, d;
   cin >> a >> b >> c >> d;
   cout << fun(a, b, c, d) << endl;
   return 0;
}

//array
int main() {
   int N, a[100];
   cin >> N;
   for (int i = 0; i < N; i++) {
      cin >> a[i];
   }
   for (int i = 0; i < N; i++) {
      cout << a[i] << " ";
   }
   return 0;
}

//double array
int main() {
   int N, M, a[100][100];
   cin >> N >> M;
   for (int i = 0; i < N; i++) {
      for (int j = 0; j < M; j++) {
         cin >> a[i][j];
      }
   }
   for (int i = 0; i < N; i++) {
      for (int j = 0; j < M; j++) {
         cout << a[i][j] << " ";
      }
      cout << endl;
   }
   return 0;
}