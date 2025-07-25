#include <iostream>
#include <queue>
#include <unordered_map>
using namespace std;
class Node
{ // This is tree Node
public:
  int val;
  Node *left;
  Node *right;
  Node(int val)
  {
    this->val = val;
    this->left = NULL;
    this->right = NULL;
  }
};
void display(Node *root)
{
  if (root == NULL)
    return;
  cout << root->val << " ";
  display(root->left);
  display(root->right);
}
void LevelOrder(Node *root)
{
  if (root == NULL)
    return;
  queue<Node *> q;
  q.push(root);
  while (!q.empty())
  {
    Node *temp = q.front();
    q.pop();
    cout << temp->val << " ";

    if (temp->left != NULL)
      q.push(temp->left);
    if (temp->right != NULL)
      q.push(temp->right);
  }
  cout << endl;
}
Node *construct(int arr[], int n)
{
  queue<Node *> q;
  Node *root = new Node(arr[0]);
  q.push(root);
  int i = 1;
  int j = 2;
  while (q.size() > 0 && i < n)
  {
    Node *temp = q.front();
    q.pop();

    Node *L;
    Node *R;
    if (arr[i] != INT_MIN)
      L = new Node(arr[i]);
    else
      L = NULL;
    if (j != n && arr[j] != INT_MIN)
      R = new Node(arr[j]);
    else
      R = NULL;
    temp->left = L;
    temp->right = R;
    if (L != NULL)
      q.push(L);
    if (R != NULL)
      q.push(R);
    i += 2;
    j += 2;
  }
  return root;
}
void topView(Node *root)
{
  unordered_map<int, int> m;  // insert (level,root->val)
  queue< pair<Node *, int> > q;  // Node,level
  pair<Node *, int> r;
  r.first = root;
  r.second = 0;
  q.push(r);
  while (q.size() > 0)
  {
    Node *temp = (q.front()).first;
    int level = (q.front()).second;
    q.pop();
    if (m.find(level) == m.end())
    {
      m[level] = temp->val;
    }
    if (temp->left != NULL)
    {
      pair<Node *, int> p;
      p.first = temp->left;
      p.second = level - 1;
      q.push(p);
    }
    if (temp->right != NULL)
    {
      pair<Node *, int> s;
      s.first = temp->right;
      s.second = level + 1;
      q.push(s);
    }
  }
  int minLevel = INT_MAX;
  int maxLevel = INT_MIN;
  for (auto x : m)
  {
    int lev = x.first;
    minLevel = min(minLevel, lev);
    maxLevel = max(maxLevel, lev);
  }
  for (int i = minLevel; i <= maxLevel; i++)
  {
    cout << m[i] << " ";
  }
  cout << endl;
}
int main()
{
  int arr[] = {1, 2, 3, 4, 5, 6,7};
  int n = sizeof(arr) / sizeof(arr[0]);
  Node *root = construct(arr, n);
  LevelOrder(root);
  topView(root);
}