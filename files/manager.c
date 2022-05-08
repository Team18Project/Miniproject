#include "manager.h"

int updateRecord(Record *r[], int index) // 하나의 데이터 수정하는 기능
{
    int number;

    index--;
    printf("분야(책, 영화, 드라마)를 입력하세요: ");
    scanf("%s" ,r[index]->kind); 

    printf("제목을 입력하세요: ");
    scanf("%s" ,r[index]->title); 

    printf("장르를 입력하세요: ");
    scanf("%s" ,r[index]->genre);

    printf("내용을 입력하세요: ");
    scanf("%s" ,r[index]->content);
    
    printf("날짜를 입력하세요: ");
    scanf("%d" ,&r[index]->date);

    printf("수정 완료하였습니다!\n");
    
    return 1;
}

void saveData(Record *r[], int count)
{
    int i;

    FILE *fp;
    fp=fopen("record.txt", "wt");

    for(i=0; i<count; i++)
    {
        if(r[i]==NULL)
            continue;
        fprintf(fp, "%s %s %s %d %d %s\n", p[i]->name, p[i]->space, p[i]->simple_ex, p[i]->price, p[i]->unit, p[i]->delivery);
    }

    fclose(fp);
    printf("=> 저장됨! ");
}
