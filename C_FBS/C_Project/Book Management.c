#include<stdio.h>
#include<string.h>

typedef struct Book{
    int book_id;
    char book_name[30];
    char book_author[30];
    int price;
}Book;

void addBook(Book[],int*);
int searchBook(Book[],int*,int,char*);
void removeBook(Book[],int*,int);
void sortBook(Book[],int*,int);
void displaybooks(Book[],int*);


void main(){
    int c_i=0,choice,id;
    char searchName[30];

    Book book[50];
    printf("*** Book Management ***");

    while(1){
        printf("\n--- MENU ---\n");
        printf("1. Add Book");
        printf("\n2. Search Book");
        printf("\n3. Delete Book");
        printf("\n4. Sort Books ");
        printf("\n5. Show Books");
        printf("\n6. Exit\nChoice: ");
        scanf("%d",&choice);

        if(choice==1){
            if(c_i>=50){
                printf("\nStorage Full! Cannot add more books.\n");
                continue;
            }
            addBook(book,&c_i);
        }

        else if(choice==2){
            printf("\nEnter Book id: ");
            scanf("%d",&id);

            printf("Enter Book Name: ");
            getchar();
            fgets(searchName,30,stdin);              //scan
            searchName[strlen(searchName)-1]='\0';   

            int pos = searchBook(book,&c_i,id,searchName);

            if(pos==-1)
                printf("\nBook Not Found!\n");
            else
                printf("\nId: %d\nName: %s\nAuthor: %s\nPrice: %d\n",
                book[pos].book_id,
                book[pos].book_name, 
                book[pos].book_author,
                book[pos].price);
        }

        else if(choice==3){
            printf("\nEnter Book id: ");
            scanf("%d",&id);

            printf("Enter Book Name: ");
            getchar();
            fgets(searchName,30,stdin);
            searchName[strlen(searchName)-1]='\0';

            int pos = searchBook(book,&c_i,id,searchName);

            if(pos==-1)
                printf("\nBook Not Found!\n");
            else
                removeBook(book,&c_i,pos);
        }

        else if(choice==4){
            int opt;
            printf("\n1. Price High to Low");
            printf("\n2. Price Low to High");
            printf("\nChoice: ");
            scanf("%d",&opt);

            sortBook(book,&c_i,opt);
        }

        else if(choice==5){
            displaybooks(book,&c_i);
        }

        else if(choice==6){
            break;
        }

        else{
            printf("\nInvalid Choice!\n");
        }
    }
}

void addBook(Book book[],int *c_i){
    printf("\nEnter Book Id: ");
    scanf("%d",&book[*c_i].book_id);

    printf("Enter Book Name: ");
    getchar();
    fgets(book[*c_i].book_name,30,stdin);
    book[*c_i].book_name[strlen(book[*c_i].book_name)-1]='\0';

    printf("Enter Author Name: ");
    fgets(book[*c_i].book_author,30,stdin);
    book[*c_i].book_author[strlen(book[*c_i].book_author)-1]='\0';

    printf("Enter Price: ");
    scanf("%d",&book[*c_i].price);

    (*c_i)++;
    printf("\nBook Added Successfully!\n");
}

int searchBook(Book book[],int* c_i,int id,char* name){
    for(int i=0;i<*c_i;i++){
        if(book[i].book_id==id && strcmp(book[i].book_name,name)==0)
            return i;
    }
    return -1;
}

void removeBook(Book book[],int* c_i,int idx){
    for(int i=idx;i<*c_i-1;i++){
        book[i]=book[i+1];
    }
    (*c_i)--;
    printf("\nBook Deleted!\n");
}

void sortBook(Book book[],int* c_i,int choice){
    for(int i=0;i<*c_i-1;i++){
        for(int j=0;j<*c_i-i-1;j++){
            int swap=0;

            if(choice==1 && book[j].price < book[j+1].price)
                swap=1;
            else if(choice==2 && book[j].price > book[j+1].price)
                swap=1;

            if(swap){
                Book temp = book[j];
                book[j] = book[j+1];
                book[j+1] = temp;
            }
        }
    }

    printf("\nSorted Successfully!\n");
    displaybooks(book, c_i);
}

void displaybooks(Book book[],int* c_i){
    if(*c_i==0){
        printf("\nNo books here!\n");
        return;
    }

    printf("\n--- Books ---\n");
    for(int i=0;i<*c_i;i++){
        printf("\nId: %d", book[i].book_id);
        printf("\nName: %s", book[i].book_name);
        printf("\nAuthor: %s", book[i].book_author);
        printf("\nPrice: %d\n", book[i].price);
    }
}