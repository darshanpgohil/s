void bfs(struct node *adj[],int visited[],int start)
{
	int queue[10],rear=-1,front=-1,i,k,j=0;

	struct node *tmp;

	queue[++rear] = start;
	++front;
	visited[start]=1;

	while(rear>=front)
	{
		start=queue[front++];
		//printf("%c",start+65);
		printf("%d",start);

		tmp=adj[start];

		while(tmp)
		{
			if(tmp->data && visited[tmp->data]==0)
			{
				queue[++rear] = tmp->data;
				visited[tmp->data]=1;
			}
			tmp=tmp->next;
		}
	}
}