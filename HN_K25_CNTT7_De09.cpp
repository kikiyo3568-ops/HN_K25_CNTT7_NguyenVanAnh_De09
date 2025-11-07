#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(){
	int n, choose;
	int a, b;
	int pos, val;
	int viTri;
	int sum = 0;
	int count = 0;
	int x, i, found = 0;
	int arr[100];
	int isInputed = 0, isSorted = 0;
	do{
		printf("\n-----------MENU-----------");
		printf("\n1. Nhap so luong phan tu va gia tri tung phan tu cho mang");
		printf("\n2. In ra gia tri cac phan tu trong mang");
		printf("\n3. Tinh tong cua tat ca so am va so duong o trong mang");
		printf("\n4. In ra cac phan tu chia het cho 3 o trong mang");
		printf("\n5. Them moi mot phan tu vao vi tri cu the (nguoi dung nhap)");
		printf("\n6. Xoa phan tu tai mot vi tri cu the (nguoi dung nhap)");
		printf("\n7. Sap xep mang theo thu tu giam dan (insertion sort)");
		printf("\n8. Kiem tra su ton tai cua phan tu trong mang (nguoi dung nhap)");
		printf("\n9. In ra cac phan tu nam trong khoang [a,b] (a,b do nguoi dung nhap, a<b)");
		printf("\n10.Dao nguoc vi tri cac phan tu trong mang");
		printf("\n11.Thoat");
		printf("\n\n Xin vui long lua chon: ");
		scanf("%d", &choose);
		
		switch(choose){
			case 1:
				do{
					printf("Nhap so phan tu cua mang: ");
					scanf("%d",&n);
					if(n<0 || n>100){
						printf("Nhap lai n \n");
					}
				}while(n<0 || n>100);

				for(int i=0;i<n;i++){
					printf("Nhap phan tu a[%d]=",i);
					scanf("%d",&arr[i]);
				}
				isInputed = 1;
				break;
			case 2:
				if(isInputed==0){
					printf("\nMang chua duoc nhap");
				}else{
					printf("\nCac phan tu cua mang :\n");
					for(int i=0;i<n;i++){
						printf("%d  ",arr[i]);
					}
				}				
				break;
			case 3:
				if(isInputed==0){
					printf("\nMang chua duoc nhap");
				}else{
					for(int i = 1; i <= n; i++) {
						sum = sum + i;
					    }
					printf("Tong so am, so duong trong mang la: %d",n,sum);
				    }
				break;
			case 4:
			    printf("\nCac phan tu chia het cho 3 o trong mang: ");
			    for(int i = 0; i < n; i++) {
				    if(arr[i]%3 == 0) {
					    count++;
					    printf("%d ", arr[i]);
				        }
			        }
				break;
			case 5:
				if(isInputed==0){
					printf("\nMang chua duoc nhap");
				}else{
				printf("Nhap vi tri muon them (0 -> %d): ", n);
                scanf("%d", &pos);
                printf("Nhap gia tri muon them: ");
                scanf("%d", &val);

                if (pos < 0 || pos > n) {
                printf("Vi tri khong hop le!\n");
                return 1;
                }

                for (int i = n; i > pos; i--) {
                    arr[i] = arr[i - 1];
                    }

                arr[pos] = val;
                n++;

                printf("Mang sau khi chen:\n");
                for (int i = 0; i < n; i++) {
                    printf("%d ", arr[i]);
                }
            }
				break;
			case 6:
				if(isInputed==0){
					printf("\nMang chua duoc nhap");
				}else{
				printf("Nhap chi so phan tu muon xoa (0 -> %d): ", n - 1);
                scanf("%d", &viTri);

                if (viTri < 0 || viTri >= n) {
                printf("Chi so khong hop le!\n");
                } else {
    	
                    for (int i = viTri; i < n - 1; i++) {
                        arr[i] = arr[i + 1];
                        }
                        n--; 

                printf("Mang sau khi xoa phan tu tai chi so %d:\n", viTri);
                for (int i = 0; i < n; i++) {
                    printf("%d ", arr[i]);
                    }
                printf("\n");
                }
                } 
				break;
			case 7:
				if(isInputed==0){
					printf("\nMang chua duoc nhap");
				}else{
				for (int i = 1; i < n; i++) {
                int key = arr[i];
                int j = i - 1;
                while (j >= 0 && arr[j] < key) { 
                    arr[j + 1] = arr[j]; 
                    j--;
                    }
                arr[j + 1] = key; 
                }
                for (int i = 0; i < n; i++) printf("%d ", arr[i]);
                }
				break;
			case 8:
				if(isSorted==0){
					printf("Mang chua duoc sap xep, khong tim kiem theo linear search duoc!");
				}else{
				    printf("Nhap phan tu can tim: ");
                    scanf("%d", &x);

                    for (int i = 0; i < n; i++) {
                        if (arr[i] == x) {
                            printf("Phan tu %d xuat hien tai vi tri %d\n", x, i);
                            found = 1;
                    }
                }
                if (!found) {
                    printf("Phan tu %d khong xuat hien trong mang\n", x);
                }
				break;
			case 9:
				if(isInputed==0){
					printf("\nMang chua duoc nhap");
				}else{
                    if (a >= b) {
                        printf("\na phai nho hon b.");
                    return 1;
                    }
                for (int i = a; i <= b; i++) {
                    printf("%d ", i);
                    }
                }
				break;
			case 10:
				break;
			case 11:
				exit(0);
			default:
				printf("Loi - Xin vui long nhap tu 1 - 11");
            }
        }
	} while(1);
	
	return 0;
	
}
	

