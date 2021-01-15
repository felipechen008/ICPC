void dfs1(int u){
	vis[u] = true;
	for(auto v : g[u]){
		if(!vis[v]) dfs1(v);
	}
	order.push_back(u);
}

void dfs2(int u){
	vis[u] = true;
	scc[u] = sccnum;
	for(auto v : gt[u]){
		if(!vis[v]) dfs2(v);
	}
}
