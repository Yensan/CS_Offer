BSTree  SearchBST(BSTree bst, KeyType key)
/ *�ڸ�ָ��bst��ָ�����������У��ݹ����ĳ�ؼ��ֵ���key��Ԫ�أ������ҳɹ�������ָ���Ԫ�ؽ��ָ�룬���򷵻ؿ�ָ��* /
{ 
	if (!bst) 
		return NULL;
	else 
		if (bst->key == key)
			return bst;/ *���ҳɹ�* /
		else
			if (bst->key > key)
				return SearchBST(bst->lchild, key);/ *����������������* /
			else 
				return SearchBST(bst->rchild, key);/ *����������������* /
}