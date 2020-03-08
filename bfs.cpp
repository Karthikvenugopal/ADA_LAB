#include <iostream>
#include <list>
using namespace std;

class Graph
{
    int v;

    list<int> *adj;

public:
    Graph(int v);
    void Edge(int v, int w);
    void bfs(int s);
};

Graph::Graph(int v)
{
    this->v = v;
    adj = new list<int>[v];
}
void Graph::Edge(int v, int w)
{
    adj[v].push_back(w);
}
void Graph::bfs(int s)
{
    bool *visited = new bool[v];
    for (int i = 0; i < v; i++)
        visited[i] = false;

    list<int> queue;

    visited[s] = true;
    queue.push_back(s);
    list<int>::iterator i;

    while (!queue.empty())
    {
        s = queue.front();
        cout << s << " ";
        queue.pop_front();

        for (i = adj[s].begin(); i != adj[s].end(); ++i)
        {
            if (!visited[*i])
            {
                visited[*i] = true;
                queue.push_back(*i);
            }
        }
    }
}
int main()
{
    // Graph g(5);
    // g.Edge(0, 1);
    // g.Edge(0, 2);
    // g.Edge(1, 2);
    // g.Edge(2, 0);
    // g.Edge(2, 3);
    // g.Edge(3, 3);
    int n, o, d, k = 1;
    cout << "Enter the number of nodes\n";
    cin >> n;
    Graph g(n);
    while (k != 0)
    {
        cout << "Enter origin and destination" << endl;
        cin >> o >> d;
        g.Edge(o, d);
        cout << "Do you want to continue(0 or 1)?" << endl;
        cin >> k;
    }
    cout << "Following is Breadth First Traversal "
         << "(starting from vertex 2) \n";
    g.bfs(1);
    return 0;
}