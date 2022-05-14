#include"manager.h"

int main(void)
{
    int count=0, menu;
    int index=0;
    int no, deletok;
    my_record *r[100];

    count=loadData(r);
    index=count;
    
    while(1)
    {
        menu=selectMenu();

        if(menu==0)
            break;
        if(menu==1 || menu==3 || menu==4) // list가 아직 추가가 안 되었으므로 이 메뉴들을 실행하면 할 것이 없기 때문에 continue를 한다
            if(count==0)
                continue;

        if(menu==1)
            listRecord(r, index); 
        else if(menu==2)
        {
            r[index]=(my_record *)malloc(sizeof(my_record));
            count+=addRecord(r[index++]); 
        }
        else if(menu==3)
        {
            no=selectDataNo(r, index);
            if(no==0)
            {
                printf("=>취소됨!\n");
                continue;
            }   

            updateRecord(&r[no-1], index); // no는 순수 list의 번호이므로 index로는 한번을 줄여줘야 함
        }
        else if(menu==4)
        {
            no=selectDataNo(r, index);
            if(no==0)
            {
                printf("=>취소됨!\n");
                continue;
            }

            printf("정말로 삭제하시겠습니까? (삭제: 1)");
            scanf("%d", &deletok);

            if(deletok==1)
            {
                if(r[no-1]) 
                    free(r[no-1]);
                r[no-1]=NULL;
                count--;
            }
        }
        else if(menu==5)
        {
            saveData(r, index);
        }
        else if(menu==6)
        {
            search_title(r, count);
        }
        else if(menu==7)
        {
            search_genre(r, count);
        }
        else if(menu==8)
        {
            search_date(r, count);
        }
        else if(menu==9)
        {
            bookMark(r, count);
        }
    } 
    return 0;
}
