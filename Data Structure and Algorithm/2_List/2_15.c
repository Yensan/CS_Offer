LinkList  merge_2(LinkList RA,LinkList RB)
{  /*���㷨����������βָ���ѭ��������β��������*/
	Node *p;
	p=RA->next; /*��������RA��ͷ����ַ*/
	RA->next=RB->next->next;/*����RB�Ŀ�ʼ�����������RA���ն˽��֮��*/
	free(RB->next);/*�ͷ�����RB��ͷ���*/
	RB->next=p;/*����RA��ͷ�����������RB���ն˽��֮��*/
    return  RB;/*������ѭ��������βָ��*/
}