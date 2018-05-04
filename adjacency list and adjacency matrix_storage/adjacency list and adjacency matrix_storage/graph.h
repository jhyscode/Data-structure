#pragma once
typedef int InfoType;
#define	MAXV 100				//��󶥵����
#define INF 32767				//INF��ʾ��
//���¶����ڽӾ�������
typedef struct
{
	int no;						//������
	InfoType info;				//����������Ϣ
} VertexType;					//��������
typedef struct  				//ͼ�Ķ���
{
	int edges[MAXV][MAXV]; 		//�ڽӾ���
	int n, e;   					//������������
	VertexType vexs[MAXV];		//��Ŷ�����Ϣ
} MGraph;						//ͼ���ڽӾ�������
								//���¶����ڽӱ�����
typedef struct ANode           	//�ߵĽڵ�ṹ����
{
	int adjvex;              	//�ñߵ��յ�λ��
	struct ANode *nextarc; 		//ָ����һ���ߵ�ָ��
	InfoType info;           	//�ñߵ������Ϣ,�������ڴ��Ȩֵ
} ArcNode;
typedef int Vertex;
typedef struct Vnode      		//�ڽӱ�ͷ�ڵ������
{
	Vertex data;            	//������Ϣ
	ArcNode *firstarc;     		//ָ���һ����
} VNode;
typedef VNode AdjList[MAXV];	//AdjList���ڽӱ�����
typedef struct
{
	AdjList adjlist;         	//�ڽӱ�
	int n, e;                 	//ͼ�ж�����n�ͱ���e
} ALGraph;                   	//ͼ���ڽӱ�����