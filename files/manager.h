#include "record.h"

int selectMenu(); // 메뉴선택 창
int addRecord(my_record *r); // 하나의 데이터 추가하는 기능
void readRecord(my_record *r); // 하나의 데이터 조회하는 기능
int updateRecord(my_record *r[], int index); // 하나의 데이터 수정하는 기능
void listRecord(my_record *r[], int count); // 리스트로 조회하는 기능
void saveData(my_record *r[], int count);
int loadData(my_record *r[]);
int selectDataNo(my_record *r[], int count); // 번호를 선택 하는 기능

