#include <iostream>
#include <algorithm>
#include <vector>
#include <stack>
#include <queue>
#include <list>

using namespace std;
bool visit[1001];
vector<int> graph [1001];
void dfs(int v)
{
	stack<int> s;
	s.push(v);
	visit[v] = true;
	cout<<v<<" ";
	while(!s.empty())
	{
		int cur = s.top();
		s.pop();
		for(int i = 0; i<graph[cur].size(); i++)
		{
			int next = graph[cur][i];
			if(!visit[next])
			{
				cout<<next<<" ";
				visit[next] = true;
				s.push(cur);
				s.push(next);
				break;
			}
		}
	}
}

void bfs(int v)
{
	queue<int> s;
	s.push(v);
	visit[v] = true;
	cout<<v<<" ";
	while(!s.empty())
	{
		int cur = s.front();
		s.pop();
		for(int i = 0; i<graph[cur].size(); i++)
		{
			int next = graph[cur][i];
			if(!visit[next])
			{
				cout<<next<<" ";
				visit[next] = true;
				s.push(cur);
				s.push(next);
				break;
			}
		}
	}
}
void dfs_r(int cur)
{
	visit[cur] = true;
	cout<< cur << " ";
	for(int i = 0; i< graph[cur].size(); i++)
	{
		int next = graph[cur][i];
		if(!visit[next])
		{
			dfs_r(next);
		}
	}
}
int main(void)
{
	list<int> List;
	List.push_back(1);
	List.push_back(2);
	List.push_back(100);
	List.push_back(3);
	sort(List.begin(),List.end());
	
}