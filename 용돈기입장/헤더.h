#define MAX_NUM 100



//������� ������ �����ϴ� ����ü
typedef struct {
	char date[30];
	int food, trans, pc, etc;
	char memo[50];
}MONEY;



typedef struct {
	char name[30];
	int pass;
	int count;
	char quiz[30];
	int sel;
	MONEY s[MAX_NUM];
}USER;
