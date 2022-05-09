#include "record.h"

void search_title(my_record *r[], int count) // 제목 검색 기능
{
    int i;
    char search[50];

    printf("검색할 제목을 입력하세요: ");
    scanf("%s", search);

    for(i=0; i<count; i++)
        if(r[i]->title==search)
            readRecord(r[i]);
}

void search_genre(my_record *r[], int count) // 장르 검색 기능
{
    int i;
    char search[50];

    printf("검색할 장르을 입력하세요: ");
    scanf("%s", search);

    for(i=0; i<count; i++)
        if(r[i]->genre==search)
            readRecord(r[i]);
    
}


void search_date(my_record *r[], int count) // 날짜 검색 기능
{
    int i, num;

    printf("검색할 날짜를 입력하세요: ");
    scanf("%d", &num);

    for(i=0; i<count; i++)
        if(r[i]->date==num)
            readRecord(r[i]);
}


void bookMark(my_record *r[], int count) // 북마크 기능
{
    char title[20];
    int i;

    printf("북마크할 제목을 입력하세요: ");
    scanf("%s", title);

    for(i=0; i<count; i++)
        if(r[i]->title==title)
            r[i]->bookmark=1;

    printf("| Kind |  Title  | genre |  content | date |\n");
    printf("================================================================================= \n");

    for(i=0; i<count; i++)
    {
        if(r[i]->bookmark==0)
            continue;
        printf("%d ", i+1);
        readRecord(r[i]);
    }
    printf("\n");
}
