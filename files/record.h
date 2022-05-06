#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define NAME_SIZE 20

// 책, 영화, 드라마 제목 변수(book_t, movie_t, drama_t)
// 장르, 내용, 날짜 변수(genre, content, date)


typedef struct
{
    char book_t[NAME_SIZE];
    char movie_t[NAME_SIZE];
    char drama_t[NAME_SIZE];
    char genre[10];
    char content[30];
    int date;
}Record;

/*
메뉴선택창
책, 영화, 드라마를 기록하는 기능
기록한 리스트를 출력하는 기능
기록한 리스트를 수정하는 기능
기록한 리스트를 삭제하는 기능
데이터 파일 저장/읽어오는 기능
책, 영화, 드라마 제목 검색 기능
책, 영화, 드라마 장르 검색 기능
책, 영화, 드라마 날짜 검색 기능
북마크 기능
*/



void search_price(Record *p[], int count); // 가격을 찾는 기능
void search_unit(Record *p[], int count); // 판매단위를 찾는 기능
void search_name(Record *p[], int count); // 제품이름을 찾는 기능
void saveData(Record *p[], int count);
int loadData(Record *p[]);
