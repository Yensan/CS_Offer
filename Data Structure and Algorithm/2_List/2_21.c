void polycreate(Polylist head)
{
	Polynode *rear, *s;
	int c,e;
	rear=head;	                            /* rear ʼ��ָ��������β������β�巨����*/
	scanf("%d,%d",&c,&e);                   /*�������ʽ��ϵ����ָ����*/
	while(c!=0)	                            /*��c=0�����������ʽ���������*/
	{
		s=(Polynode*)malloc(sizeof(Polynode));	/*�����µĽ��*/
		s->coef=c;
		s->exp=e;
		rear->next=s;		/*�ڵ�ǰ��β������*/
		rear=s;
		scanf("%d,%d",&c,&e); 
	}
	rear->next=NULL;	/*���������һ������next��NULL����ʾ������*/
}