void InsNode(BiTNode *p ,  BiTNode *r)
{
	BiTNode *s;
	if(p->Rtag==1)    /* p���Һ��� */
	{
		r->RChild=p->RChild;  /* p�ĺ�̱�Ϊr�ĺ�� */
		r->Rtag=1;
		p->RChild=r;  /* r��Ϊp���Һ��� */
		r->LChild=p;  /* p��Ϊr��ǰ�� */
		r->Ltag=1;
	}
	else  /* p���Һ��� */
	{ 
		s=p->RChild;
		while(s->Ltag==0)
			s=s->LChild;  /* ����p������������"�����¶�"��� */
		r->RChild=p->RChild;  /* p���Һ��ӱ�Ϊr���Һ��� */
		r->Rtag=0;
		r->LChild=p;  /* p��Ϊr��ǰ�� */
		r->Ltag=1;
		p->RChild=r;  /* r��Ϊp���Һ��� */
		s->LChild=r;  /* r��Ϊpԭ����������"�����¶�"����ǰ�� */
	}
}