void CreateBiTree(BiTree *bt)
{
      char ch; 
      ch = getchar();
      if(ch=='.') *bt=NULL;
      else 
	{
		*bt=(BiTree)malloc(sizeof(BiTNode)); //����һ���½��
                           (*bt)->data=ch;
                           CreateBiTree(&((*bt)->LChild)); //����������
                           CreateBiTree(&((*bt)->RChild)); //����������
	}
}