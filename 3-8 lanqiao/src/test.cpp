

//�������ÿһ����λ��������ֶ�������
//������Լ�����Ҳ�Ǹ�����
// #include <iostream>
// #include <math.h>
// using namespace std;
// bool IsPurePrime(int i) //�ж�ÿһλ�Ƿ��� 0 1 4 6 8 9
// {
//     while (i)
//     {
//         int temp = i % 10;
//         if (temp == 0 || temp == 1 || temp == 4 || temp == 6 || temp == 8 || temp == 9)
//         {
//             return false;
//         }
//         i /= 10;
//     }
//     return true;
// }
// bool IsPrime(int i)
// {
//     for (int j = 2; j < sqrt(i); j++)
//     {
//         if (i % j == 0)
//         {
//             return false;
//         }
//     }
//     return true;
// }
// int main()
// {
//     int count = 0;
//     //�ȱ���1 ~ 20210605
//     for (int i = 1; i <= 20210605; i += 2) //ż��������������
//     {
//         if (IsPurePrime(i))
//         {
//             if (IsPrime(i))
//             {
//                 count++;
//             }
//         }
//     }
//     cout << count << endl;
//     system("pause");
//     return 0;
// }

// #include <iostream>
// using namespace std;
// #include <math.h>
// int main(int argc, char const *argv[])
// {
//     int N;
//     cin >> N;
//     int left, right;
//     int i;
//     for (i = 1;; i++)
//     {
//         if (N == 1)
//         {
//             cout << i << endl;
//             return 0;
//         }
//         int left = (pow(3, i - 1) - 1) / 2;
//         int right = (pow(3, i) - 1) / 2;
//         if (left <= N && N <= right)
//             break;
//     }
//     cout << i << endl;
//     system("pause");
//     return 0;
// }

// 1.�����һ�����ж��ٸ�ˮ�ܣ�����˶��ٿ��
// 2.����ʣ��k-1�������Ӷ��ٴ�
// 3.ͳ���ܹ��ж��ٿ�ر�����ˮ
// #include <iostream>
// using namespace std;
// static int arr[110][110] = {0};
// void water(int x, int y) //���ӽ�ˮ
// {
//     arr[x][y] = 1;
//     if (arr[x - 1][y] == 0)
//         arr[x - 1][y] = 1;
//     if (arr[x][y + 1] == 0)
//         arr[x][y + 1] = 1;
//     if (arr[x + 1][y] == 0)
//         arr[x + 1][y] = 1;
//     if (arr[x][y - 1] == 0)
//         arr[x][y - 1] = 1;
// }
// int main()
// {
//     int n, m, t;
//     cin >> n >> m; // n��m�е����
//     cin >> t;      // t��ˮ��
//     while (t--)    // t��ˮ�ܣ���һ������ɵĽ�ˮ��
//     {
//         int x, y;
//         cin >> x >> y;
//         water(x, y);
//     }
//     //���뽽ˮʱ��k
//     int k;
//     cin >> k;
//     int curK = k - 1; //ʣ��ʱ��
//     while (curK--)
//     {
//         for (int i = 0; i <= n; i++)
//         {
//             for (int j = 0; j <= m; j++)
//             {
//                 if (arr[i][j] == 1)
//                     water(i, j);
//             }
//         }
//     }
//     //ͳ�ƽ�ˮ���
//     int ret = 0;
//     for (int i = 0; i <= n; i++)
//     {
//         for (int j = 0; j <= m; j++)
//         {
//             if (arr[i][j] == 1)
//                 ret++;
//         }
//     }
//     cout << ret << endl;
//     return 0;
// }

// // Դ���룺
// #include <bits/stdc++.h>
// using namespace std;
// int tu[101][101];
// void dfs(int x, int y)
// {
//     tu[x][y] = 1;
//     if (!tu[x - 1][y])
//     {
//         tu[x - 1][y] = 1;
//     }
//     if (!tu[x + 1][y])
//     {
//         tu[x + 1][y] = 1;
//     }
//     if (!tu[x][y - 1])
//     {
//         tu[x][y - 1] = 1;
//     }
//     if (!tu[x][y + 1])
//     {
//         tu[x][y + 1] = 1;
//     }
// }

// int main()
// {
//     int k, t, n, m, r, c, i, j, ans = 0;
//     memset(tu, 0, sizeof(tu));
//     cin >> n >> m >> t;
//     while (t--)
//     {
//         cin >> r >> c;
//         dfs(r, c);
//     }
//     cin >> k;
//     if (k > 1)
//         k -= 1;
//     while (k--)
//     {
//         for (i = 1; i <= n; i++)
//         {
//             for (j = 1; j <= m; j++)
//             {
//                 if (tu[i][j])
//                 {
//                     dfs(i, j);
//                 }
//             }
//         }
//     }
//     for (i = 1; i <= n; i++)
//     {
//         for (j = 1; j <= m; j++)
//         {
//             if (tu[i][j])
//                 ans++;
//         }
//     }
//     cout << ans;
//     return 0;
// }
//��֪����ɶ���⣬���н����18���������пտ�����

// #include <iostream>
// using�0�2namespace�0�2std;
// bool�0�2getprime(int�0�2n)
// {
//     int�0�2i, j;
//     bool�0�2m;
//     for (i = 1; i <= n; i++)
//     {
//         �0�2�0�2�0�2�0�2m = true;
//         �0�2�0�2�0�2�0�2for (j = 2; j < i; j++)
//         {
//             �0�2�0�2�0�2�0�2�0�2�0�2�0�2�0�2if (i % j == 0)
//             {
//                 �0�2�0�2�0�2�0�2�0�2�0�2�0�2�0�2�0�2�0�2�0�2�0�2m = false;
//                 �0�2�0�2�0�2�0�2�0�2�0�2�0�2�0�2�0�2�0�2�0�2�0�2break;
//                 �0�2�0�2�0�2�0�2�0�2�0�2�0�2�0�2
//             }
//             �0�2�0�2�0�2�0�2
//         }
//         �0�2�0�2�0�2�0�2return�0�2m;
//     }
// }
// int�0�2num[20210610];
// int�0�2main()
// {
//     �0�2�0�2�0�2�0�2int�0�2n = 0, cont = 0;
//     �0�2�0�2�0�2�0�2for (int�0�2i = 1; i <= 20210605 /*20210605*/; i++)
//     {
//         �0�2�0�2�0�2�0�2�0�2�0�2�0�2�0�2if (getprime(i))
//         {
//             �0�2�0�2�0�2�0�2�0�2�0�2�0�2�0�2�0�2�0�2�0�2�0�2num[n++] = i;
//             �0�2�0�2�0�2�0�2�0�2�0�2�0�2�0�2
//         }
//         �0�2�0�2�0�2�0�2
//     }
//     �0�2�0�2�0�2�0�2for (int�0�2i = 0; i < n; i++)
//     {
//         �0�2�0�2�0�2�0�2�0�2�0�2�0�2�0�2num[i] %= 100;
//         �0�2�0�2�0�2�0�2�0�2�0�2�0�2�0�2num[i] /= 10;
//         �0�2�0�2�0�2�0�2�0�2�0�2�0�2�0�2if (num[i] == 2 || num[i] == 3 || num[i] == 5 || num[i] == 7)
//         {
//             �0�2�0�2�0�2�0�2�0�2�0�2�0�2�0�2�0�2�0�2�0�2�0�2cont++;
//             �0�2�0�2�0�2�0�2�0�2�0�2�0�2�0�2
//         }
//         �0�2�0�2�0�2�0�2
//     }
//     �0�2�0�2�0�2�0�2cont += 4;
//     �0�2�0�2�0�2�0�2cout << cont << endl;
//     �0�2�0�2�0�2�0�2return�0�20;
// }

// // 1.����ѭ������
// // 2.Ѱ�ұ������
// // 3.��˳�����γ���
// #include <iostream>
// using namespace std;
// struct Node
// {
//     int data;
//     Node *pNext;
// };

// int main()
// {
//     int n, k, m; // n���˴�kλ�ÿ�ʼ����������m�ͳ���
//     cin >> n >> k >> m;
//     Node *p, *q, *head;
//     //����ѭ���б�
//     Node *first = new Node;
//     p = first;
//     first->data = 1;
//     for (int i = 2; i <= n; i++)
//     {
//         q = new Node;
//         q->data = i;
//         p->pNext = q;
//         p = q; // p = p->pNext;
//     }
//     p->pNext = first; //ѭ��������βָ��ͷ

//     //Ѱ�ұ��������
//     p = first; // firstҲ���һ���ˣ�ֻ��������k-1�α�������
//     for (size_t i = 1; i <= k - 1; i++)
//     {
//         p = p->pNext;
//     }
//     // ���α���������m���Ǹ��˳��У�Ҫ���ϵ�һ���˿�ʼ
//     // Ҳ���Ǳ�m-1�Σ���Ҫ����m-2��λ�ã�ֻ��ѭ��m-2��
//     while (p != p->pNext) //ֻʣ��һ������ֹͣ
//     {
//         for (size_t i = 1; i <= m - 2; i++)
//         {
//             p = p->pNext;
//         }
//         q = p->pNext; // q����Ҫ���е��Ǹ���,��ʱp�ǵ�m-1����
//         cout << q->data << endl;
//         p->pNext = q->pNext; // pҪָ��q�������
//         delete q;
//         p = p->pNext;
//     }
//     cout << p->data << endl; //������һ��Ԫ��
//     return 0;
// }

#include <iostream>
using namespace std;
struct Node
{
    int data;
    Node *next;
    Node *before;
};
Node *head = new Node;
void Insert(int x)
{
    Node *temp = new Node;
    temp->data = x;
    temp->next = head->next;
    head->next = temp;
    temp->before = head;
    if (temp->next != nullptr)
    {
        temp->next->before = temp; //�ڶ��δ����ڵ�ʱ��Ҫ��֮ǰ�Ľڵ��beforeָ����������Ľڵ�
    }
}
void Init()
{
    head->next = nullptr;
    head->before = nullptr;
    for (int i = 10; i >= 1; i--)
    {
        Insert(i);
    }
}

void Del(int x)
{
    for (Node *T = head->next; T != nullptr; T = T->next)
    {
        if (T->data == x)
        {
            T->before->next = T->next;
            T->next->before = T->before;
            return;
        }
    }
}
void Show(int i)
{
    // cout << "���ǵ�" << i << "�β���";
    for (Node *T = head->next; T != nullptr; T = T->next) //�����ı�������д��
    {
        cout << T->data << " ";
    }
    cout << endl;
}
int main(int argc, char const *argv[])
{
    Init();
    int N;
    cin >> N;
    for (int i = 1; i <= N; i++)
    {
        int x;
        cin >> x;
        Del(x);
        Insert(x);
        Show(i);
    }
    return 0;
}