1 задание:
#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter N:";
    cin >> n;
    int m[10000];
    for (int i = 1; i <= n; i += 2) {
        m[i] = i;
        cout << m[i] << endl;
    }
    return 0;
}

2 задание:
#include <iostream>
using namespace std;
int main() {
    int n, a, d;
    cout << "Enter A,d,n:";
    cin >> a >> d >> n;
    int m[10000];
    for (int i = 0; i < n; i++) {
        m[i] = a * d;
        cout << m[i] << endl;
        a = m[i];
    }
    return 0;
}

3 задание:
#include <iostream>
using namespace std;
int main() {
    int n, a, b;
    cout << "Enter A,B,n:";
    cin >> a >> b >> n;
    int m[10000];
    m[1] = a;
    m[2] = b;
    m[3] = a + b;
    a = m[3];
    for (int i = 4; i < n; i++) {
        m[i] = 2 * a;
        a = m[i];
    }
    for (int i = 1; i < n; i++) {
        cout << m[i] << endl;
    }
    return 0;
}

4 задание:
#include <iostream>
using namespace std;
int main() {
    int a[] = { 1,2,3,4,5,6,7,8,9,10 };
    int n = sizeof(a) / sizeof(a[0]) - 1;
    for (int i = 0; i < n / 2; i++) {
        cout << a[i] << endl;
        cout << a[n - i] << endl;
    }
    return 0;
}

5 задание:
#include <iostream>
using namespace std;
int main() {
    int a[] = { 1,2,3,4,5,6,7,8,9,10 };
    int n = sizeof(a) / sizeof(a[0]) - 1;
    for (int i = 0; i < n; i += 2) {
        cout << a[i] << endl;
    }
    for (int i = n; i > 0; i -= 2) {
        cout << a[i] << endl;
    }
    return 0;
}
