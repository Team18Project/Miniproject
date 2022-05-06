#include "record.h"

int selectMenu(); // 메뉴선택 창
int addRecord(Record *p); // 하나의 데이터 추가하는 기능
void readRecord(Record *p); // 하나의 데이터 조회하는 기능
int updateRecord(Record *p[], int index); // 하나의 데이터 수정하는 기능
void listRecord(Record *p[], int count); // 리스트로 조회하는 기능
int selectDataNo(Record *p[], int count); // 번호를 선택 하는 기능