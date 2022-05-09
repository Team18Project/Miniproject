#include "record.h"

int addRecord(Record *r); // 하나의 데이터 추가하는 기능
void readRecord(Record *r); // 하나의 데이터 조회하는 기능
int updateRecord(Record *r[], int index); // 하나의 데이터 수정하는 기능
void listRecord(Record *r[], int count); // 리스트로 조회하는 기능
int selectDataNo(Record *r[], int count); // 번호를 선택 하는 기능

