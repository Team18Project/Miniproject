#include "manager.h"

int selectMenu(){
    int menu;
    printf("\n*** Archive ***\n");
    printf("1. 기록조회\n");
    printf("2. 기록추가\n");
    printf("3. 기록수정\n");
    printf("4. 기록삭제\n");
    printf("5. 기록저장\n");
    printf("6. 제목검색\n");
    printf("7. 장르검색\n");
    printf("8. 날짜검색\n");
    printf("9. 북마크\n");
    printf("0. 기록종료\n\n");
    printf("=> 원하는 메뉴는? ");
    scanf("%d", &menu);
    return menu;
}

int addRecord(my_record *r) {
    
    printf("분야(책, 영화, 드라마)를 입력하세요: ");
    scanf("%s",r->kind);

    printf("제목을 입력하세요: "); 
    scanf("%s",r->title);

    printf("장르를 입력하세요: ");
    scanf("%s",r->genre);

    printf("내용을 입력하세요: ");
    scanf("%s",r->content);
    getchar();

    printf("날짜를 입력하세요: ");
    scanf("%d" ,&r->date);

    r->bookmark=0;

    return 1;
}

void listRecord(my_record *r[], int count){
    printf("| Kind |  Title  | genre |  content | date |\n");
    printf("================================================================================= \n");
    for(int i=0; i<count; i++){
        if(r[i]->date==-1) continue;
        printf("%2d ", i+1);
        readRecord(r[i]);
    }
    
}

void readRecord(my_record *r){
    printf("%s %s %s %s %d\n", r->kind, r->title, r->genre, r->content, r->date);

}

int updateRecord(my_record *r, int index) // 하나의 데이터 수정하는 기능
{
    int number;

    printf("분야(책, 영화, 드라마)를 입력하세요: ");
    scanf("%s",r->kind);

    printf("제목을 입력하세요: "); 
    scanf("%s",r->title);

    printf("장르를 입력하세요: ");
    scanf("%s",r->genre);

    printf("내용을 입력하세요: ");
    scanf("%s",r->content);
    getchar();

    printf("날짜를 입력하세요: ");
    scanf("%d" ,&r->date);

    printf("수정 완료하였습니다!\n");
    
    return 1;
}

void saveData(my_record *r[], int count)
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

int loadData(my_record *r[])
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
        fscanf(fp, "%d", &r[i]->date);
    }

    fclose(fp);
    printf("=> 로딩 성공!\n");

    return count;
}

int selectDataNo(my_record *r[], int count) // 번호를 선택 하는 기능
{
    int no;

    listRecord(r, count);
    printf("번호는 (취소 : 0)? ");
    scanf("%d", &no);

    return no;
}
