#include "record.h"
#include "manager.h"

void search_date(Record *r[], int count) // 날짜 검색 기능
{
    int i, num;

    printf("검색할 날짜를 입력하세요: ");
    scanf("%d", &num);

    for(i=0; i<count; i++)
        if(r[i]->date==num)
            readRecord(r[i]);
}

/*
void bookMark(Record *r[], int count) // 북마크 기능
{
    
}
*/