#include <iostream>
using namespace std;

int adj[100][100]= {0};

void add(int a,int b) {
	adj[a][b]=1;
	adj[b][a]=1;
}

void bfs(int s,int v) {
	bool visit[v]= {false};
	visit[s]=true;
	int current,arr[v],k=0,t=0;
	arr[k++]=s;
	current=s;

	while(t<k) {
		current=arr[t];
		cout<<current<<" ";
		t++;
		for(int i=0; i<v; i++) {
			if(adj[current][i]==1 && !visit[i]) {
				arr[k++]=i;
				visit[i]=true;
			}
		}
	}
}


int main() {

	int v,e,a,b,s;
	cout<<"\nEnter the Vertex: ";
	cin>>v;

	cout<<"\nEnter the Edge: ";
	cin>>e;
	cout<<"\n--- Enter (vertex1 vertex2) ---\n";
	for(int i=0; i<e; i++) {
		cout<<"\nEnter Edge "<<i+1<<": ";
		cin>>a>>b;
		add(a,b);
	}
	cout<<"\nEnter Starting Vertex: ";
	cin>>s;
	cout<<"\nThe BFS is: ";
	bfs(s,v);

	return 0;
}