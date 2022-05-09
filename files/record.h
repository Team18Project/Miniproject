#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct
{
    char kind[50];
    char title[50];
    char genre[20];
    char content[100];
    int date;
    int bookmark;
}Record;

void search_title(Record *r[], int count); // 제목 검색 기능
void search_genre(Record *r[], int count); // 장르 검색 기능
void search_date(Record *r[], int count); // 날짜 검색 기능
void bookMark(Record *r[], int count); // 북마크 기능

