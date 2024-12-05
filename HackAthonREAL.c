#include <stdio.h>
int main(){
int choice, rows, length, value;
int run = 1;
int arr[50];
int value;
while (run)
{
    printf("   MENU   \n");
    printf("1. Nhap so phan tu va gia tri cua mang\n");
    printf("2. In gia tri phan tu trong mang\n");
    printf("3. Diem so luong cac so hoan hao trong mang\n");
    printf("4. Tim gia tri nho thu 2 trong mang\n");
    printf("5. Them mot phan tu tai vi tri ngau nhien\n");
    printf("6. Xoa mot phan tu tai vi tri cu the\n");
    printf("7. Xap xep mang theo thu tang dan\n");
    printf("8. Tim kiem phan tu trong mang\n");
    printf("9. Sap xep mang hien thi phan le dung truoc phan chan dung sau\n");
    printf("10. Kiem tra mang co phai la mang tang dan khong\n");
    printf("11. Exit\n");
    printf("Hay nhap lua chon cua ban: ");
    scanf("%d", &choice);
    switch (choice)
    {
    case 1: //  Nhap so phan tu va gia tri cua mang
        printf("Moi ban nhap so phan tu: \n");
        scanf("%d", &rows);
        if( rows > 0 ) {
            printf("Moi ban nhap cac phan tu: \n");
            for(int i = 0; i < rows; i++) {
            printf("Nhap phan tu arr[%d]: ", i);
            scanf("%d", &arr[i]);   
            }
        } else {
            printf("Moi ban nhap lai gia tri\n");
        }
        break;
    case 2: // In gia tri phan tu trong mang
    if("rows > 0") {
        printf("Ma tran cua mang:  1\n");
        for(int i = 0; i < rows; i++) {
            printf("%3d", arr[i]  );
        }
        printf(" \n");
    } else {
        printf("Moi ban nhap lai gia tri\n");
    }
        break;
    case 3: // Diem so luong cac so hoan hao trong mang
    int condition=0;
    int add;
    for(int i = 0;i<(length+add);i++){
        int perfect=0;
    for(int j = 1;j < arr[i];j++) {
        if(arr[i]%j==0){
            perfect=perfect+j;
            }
        }
    if(perfect==arr[i]){
        printf("\nSo hoan hao co trong mang la: %d\n",arr[i]);
            condition++;
        }
    }
    if(condition==0){
        printf("\nKhong co so nao hoan hao trong mang:\n");
            }
        break;
    case 4: // Tim gia tri nho thu 2 trong mang
        break;
    case 5: //
    int value;
    int i, j;
            printf("hãy nhập phần tử cần tìm kiếm : ");
            scanf("%d",&value);
            for(int i = 0;i < rows;i++){
                    if(arr[i]==value){
                        printf("tại vị trí a[%d][%d]",i,j);
                    }
                
            }
    case 8:
     int value;
            printf("hãy nhập phần tử cần tìm kiếm : ");
            scanf("%d", &value);
            for(int i = 0; i<rows; i++) {
                if(arr[i]==value) {
                    printf("Tai vi tri arr[%d]", i);
                }
            }
        break;
    case 11:
        printf("Thoat chuong trinh.\n");
        run = 0;
        break;
    }
}
    return 0;
}