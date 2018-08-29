#ifndef _NODE_LIST_H_
#define _NODE_LIST_H_

template<typename T>
struct NodeList
{
	T m_Data;
	NodeList* m_pNext;
};

template<typename T>
void AddNodeList(NodeList<T>** pRoot, const T& value)
{
	if (*pRoot == nullptr)
	{
		*pRoot = new NodeList<T>();
		(*pRoot)->m_Data = value;
		(*pRoot)->m_pNext = nullptr;
	}
	else
	{
		NodeList<T>* pNode = *pRoot;
		NodeList<T>* pNewNode = new NodeList<T>();
		pNewNode->m_Data = value;
		pNewNode->m_pNext = nullptr;
		pNode->m_pNext = pNewNode;
	}
}

#endif
