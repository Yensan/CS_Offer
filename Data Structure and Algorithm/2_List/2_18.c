void initial(StaticList space, int *av)
{
    int k;
	space[0].cursor=0;      /*�������þ�̬��������ͷָ��ָ��λ��0*/
	for(k=0;k<Maxsize-1;k++)
		space[k].cursor=k+1;    /*����*/
	space[Maxsize-1].cursor=0;    /*�����β*/
	*av=1;  /*���ñ�������ͷָ���ֵ*/
}