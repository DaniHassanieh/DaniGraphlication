#ifndef GRAPH_H
#define GRAPH_H

template <typename Payload, typename Weight>
class Graph
{
public:
	// constructor
	Graph();
	// destructor
	~Graph();

	// counts the total number of graph objects that currently exist
	int numGraphObj = 0;

private:
	struct Vertex
	{
		Payload payload;
	};

	struct Edge
	{
		Vertex* initialVertex;
		Vertex* terminalVertex;
		Weight* weight;
	};

	// data members
	
};

template <typename Payload, typename Weight>
Graph<Payload, Weight>::Graph()
{
	numGraphObj++;
}

template <typename Payload, typename Weight>
Graph<Payload, Weight>::~Graph()
{
	numGraphObj--;
}

#endif
