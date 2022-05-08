#include "manager.h"

int updateRecord(Record *r[], int index) // 하나의 데이터 수정하는 기능
{
    index--;
    printf("분야(책, 영화, 드라마)를 입력하세요: ");
    scanf("%s" ,r[index]->); // 2차원 배열로 설정을 해서 분야를 #define으로 숫자로 설정을 하여서 제목을 입력 받을 때도 쓰는 것을 고려

    printf("제목을 입력하세요: ");
    scanf("%s" ,r[index]->); // 2차원 배열로 설정을 해서 분야를 #define으로 숫자로 설정을 하여서 제목을 입력 받을 때도 쓰는 것을 고려

    printf("장르를 입력하세요: ");
    scanf("%s" ,r[index]->genre);

    printf("내용을 입력하세요: ");
    scanf("%d" ,&p[index]->content);
    
    printf("날짜를 입력하세요: ");
    scanf("%d" ,&p[index]->data);

    printf("수정 완료하였습니다!\n");
    
    return 1;
}