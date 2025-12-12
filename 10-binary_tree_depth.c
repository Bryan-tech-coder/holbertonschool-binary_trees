#include "binary_trees.h"
/**
 * 
 * binary_tree_depth - measures the depth of a node in a binary tree
 * @tree: pointer to the node to measure the depth
 * Return: depth of the node, or 0 if tree is NULL
 * Definition: The depth of a node is the number of edges
 * from the node to the tree's root node.
 */
size_t binary_tree_depth(const binary_tree_t *tree) 
{
    size_t depth = 0;

    if (tree == NULL)
        return (0);

    while (tree->parent != NULL)
    {
        depth++;
        tree = tree->parent;
    }

    return (depth);
}
