int  LayerOrder(BiTree bt)
{ 
	SeqQueue *Q;
	BiTree  p;
	Q=(SeqQueue *)malloc(sizeof(SeqQueue));
	
	InitQueue(Q);  /*��ʼ���ն���Q*/
	if(bt == NULL)
		return ERROR; /* ��������btΪ���������������*/
	EnterQueue(Q, bt);/* ��������bt�ǿգ�������bt��ӣ���ʼ��α���*/
	while(!IsEmpty(Q))/*�����зǿգ������Ϊ��������������*/
	{ 
		DeleteQueue(Q, &p);/*��ͷԪ�س��Ӳ����� */
		printf("%c  ",p->data);
		if(p->LChild )  
			EnterQueue(Q, p->LChild);/*��p�����ӷǿգ������*/
		if(p->RChild ) 
			EnterQueue(Q, p->RChild); /*��p���Һ��ӷǿգ������*/
	}/*while*/
	return OK;
}/* LayerOrder */