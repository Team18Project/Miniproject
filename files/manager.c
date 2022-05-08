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
        fprintf(fp, "%s %s %s %s %d \n", r[i]->kind, r[i]->title, r[i]->genre, r[i]->content, r[i]->date);
    }

    fclose(fp);
    printf("=> 저장됨! ");
}

int loadData(Record *r[])
{
    int count=0, i=0;
    FILE *fp;

    fp=fopen("record.txt", "rt");
    for(i=0; i<100; i++)
    {
        fscanf(fp, "%s", r[i]->kind);
        if(feof(fp))
            break;
        count++;
        fscanf(fp, "%s", r[i]->title);
        fscanf(fp, "%s", r[i]->genre);
        fscanf(fp, "%s", r[i]->content);
        fscanf(fp, "%d", &p[i]->date);
    }

    fclose(fp);
    printf("=> 로딩 성공!\n");

    return count;
}
